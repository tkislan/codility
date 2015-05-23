int solution(int N, int M) {
  //! M * X = N * Y, where X is number of chocolates

  int gcd = 0;
  // int lcm = 0;
  int a = N;
  int b = M;

  while (a % b != 0) {
    gcd = b;
    b = a % gcd;
    a= gcd;
  }
  gcd = b;

  // lc = N * M / gcd; // N * M may exceed integer max size
  // return lcm / M;

  return N / gcd;
}
