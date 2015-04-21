int solution(vector<int> &A) {
  int expected_sum = ((A.size() + 1) * (1 + A.size() + 1)) / 2;
  int sum = 0;

  for (int n : A) sum += n;

  return expected_sum - sum;
}
