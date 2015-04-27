#include <algorithm>

bool check_triangular(int64_t a, int64_t b, int64_t c) {
  return a + b > c && a + c > b && b + c > a;
}

int solution(vector<int> &A) {
  if (A.size() < 3) return 0;

  sort(A.begin(), A.end());

  for (size_t i = 0; i < A.size() - 2; ++i) {
    if (check_triangular(A[i], A[i + 1], A[i + 2])) return 1;
  }

  return 0;
}
