int solution(vector<int> &A) {
  int max_profit = 0, current_profit = 0;

  for (size_t i = 1; i < A.size(); ++i) {
    int diff = A[i] - A[i - 1];
    current_profit = max(diff, current_profit + diff);
    max_profit = max(current_profit, max_profit);
  }

  return max_profit;
}
