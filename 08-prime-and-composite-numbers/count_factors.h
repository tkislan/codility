int solution(int N) {
  int factor_count = 0;

  for (uintmax_t i = 1; i * i <= static_cast<uintmax_t>(N); ++i) {
    if (N % i == 0) {
      factor_count += (N / i == i) ? 1 : 2;
    }
  }

  return factor_count;
}
