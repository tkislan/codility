#include <cmath>
#include <limits>

int solution(vector<int> &A) {
  int left = A[0];
  int right = 0;
  for (size_t i = 1; i < A.size(); ++i) right += A[i];

  int best_abs_diff = abs(left - right);

  for (size_t i = 1; i < A.size() - 1; ++i) {
    left += A[i];
    right -= A[i];

    int abs_diff = abs(left - right);

    if (abs_diff < best_abs_diff) {
      best_abs_diff = abs_diff;
    }
  }

  return best_abs_diff;
}
