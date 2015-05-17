#include <limits>

int solution(int N) {
  int min_perimeter = std::numeric_limits<int>::max();

  for (int i = 1; i * i <= N; ++i) {
    if (N % i != 0) continue;

    int a = i, b = N / i;
    int perimeter = 2 * (a + b);

    min_perimeter = min(perimeter, min_perimeter);
  }

  return min_perimeter;
}
