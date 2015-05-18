int solution(vector<int> &A) {
  vector<size_t> peaks;

  for (size_t i = 1; i < A.size() - 1; ++i) {
    if (A[i] > A[i - 1] && A[i] > A[i + 1]) peaks.push_back(i);
  }

  if (peaks.empty()) return 0;

  for (size_t i = peaks.size(); i >= 1; --i) {
    if (A.size() % i != 0) continue;

    auto it = peaks.begin();
    size_t block_end = 0;
    size_t block_size = A.size() / i;

    bool ok = true;
    while (ok && block_end < A.size()) {
      block_end += block_size;

      if (it == peaks.end()) {
        ok = false;
        break;
      }

      //! If there is no peak in a block
      if (*it >= block_end) {
        ok = false;
        break;
      }

      //! Ignore peaks until the next block
      while (*it < block_end && it != peaks.end()) ++it;
    }

    if (ok) return i;
  }

  return 0;
}
