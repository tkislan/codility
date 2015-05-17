#include <limits>

int solution(vector<int> &A) {
  int max_sum = std::numeric_limits<int>::min(), current_sum = 0;

  for (int n : A) {
    current_sum = max(current_sum + n, n);
    max_sum = max(current_sum, max_sum);
  }

  return max_sum;
}
