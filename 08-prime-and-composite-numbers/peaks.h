int solution(vector<int> &A) {
  vector<int> peaks;

  for (size_t i = 1; i < A.size() - 1; ++i) {
    if (A[i] > A[i - 1] && A[i] > A[i + 1]) peaks.push_back(i);
  }

  return 0;
}
