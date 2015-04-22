int solution(int X, vector<int> &A) {
    // write your code in C++11

  int leaves_dropped = 0;
  vector<bool> leaf_dropped(X, false);

  for (int i = 0; i < static_cast<int>(A.size()); ++i) {
    if (!leaf_dropped[A[i] - 1]) {
      leaf_dropped[A[i] - 1] = true;
      ++leaves_dropped;
    }

    if (leaves_dropped == X) return i;
  }

  return -1;
}
