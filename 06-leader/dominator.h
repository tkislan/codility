int solution(vector<int> &A) {
  vector<int> leader_stack;

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

  if (size == 0) return -1;

  int leader = value;
  size_t leader_count = 0;

  for (int n : A) if (n == leader) ++leader_count;

  if (!(leader_count > A.size() / 2)) return -1;

  for (size_t i = 0; i < A.size(); ++i) {
    if (A[i] == leader) return i;
  }

  return -1;
}
