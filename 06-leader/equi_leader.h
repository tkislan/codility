int solution(vector<int> &A) {
  vector<size_t> leader_index(A.size(), 0);

  size_t size = 0;
  int value = 0;

  for (int n : A) {
    if (size == 0) {
      value = n;
      ++size;
    } else if (value == n) {
      ++size;
    } else {
      --size;
    }
  }

  if (size == 0) return 0;

  int leader = value;
  size_t leader_count = 0;

  for (size_t i = 0; i < A.size(); ++i) {
    if (A[i] == leader) {
      ++leader_count;
      leader_index[i] = 1;
    }
  }

  if (leader_count <= A.size() / 2) return 0;

  //! number of leaders before index i  -----> prefix sum
  for (size_t i = 1; i < A.size(); ++i) {
    leader_index[i] += leader_index[i - 1];
  }

  int equi_leader_count = 0;

  for (size_t i = 0; i < A.size() - 1; ++i) {
    size_t left_leaders = leader_index[i];
    size_t right_leaders = (leader_count - leader_index[i]);

    size_t left_numbers = i + 1;
    size_t right_numbers = (A.size() - i - 1);

    if (left_leaders > (left_numbers / 2) && right_leaders > (right_numbers / 2)) ++equi_leader_count;
  }

  return equi_leader_count;
}
