int solution(int A, int B, int K) {
  int lower = A % K == 0 ? A / K - 1 : A / K;
  int upper = B / K;
  return upper - lower;
}
