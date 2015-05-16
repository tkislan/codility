int solution(vector<int> &A) {
  vector<int> leader_stack;

  for (int n : A) {
    leader_stack.push_back(n);

    if (leader_stack.size() >= 2) {
      if (*leader_stack.rbegin() != *(leader_stack.rbegin() + 1)) {
        leader_stack.pop_back();
        leader_stack.pop_back();
      }
    }
  }

  if (leader_stack.empty()) return -1;

  int leader = leader_stack.back();
  size_t leader_count = 0;

  for (int n : A) if (n == leader) ++leader_count;

  if (!(leader_count > A.size() / 2)) return -1;

  for (size_t i = 0; i < A.size(); ++i) {
    if (A[i] == leader) return i;
  }

  return -1;
}
