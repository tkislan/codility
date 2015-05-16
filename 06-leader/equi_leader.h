int solution(vector<int> &A) {
  vector<int> leader_stack;

  vector<size_t> leader_index(A.size(), 0);

  for (int n : A) {
    leader_stack.push_back(n);

    if (leader_stack.size() >= 2) {
      if (*leader_stack.rbegin() != *(leader_stack.rbegin() + 1)) {
        leader_stack.pop_back();
        leader_stack.pop_back();
      }
    }
  }

  int leader = leader_stack.back();
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
