#include <algorithm>

int solution(vector<int> &A) {
  sort(A.begin(), A.end());

  int neg_sum = *A.begin() * *(A.begin() + 1) * *A.rbegin();
  int pos_sum = *A.rbegin() * *(A.rbegin() + 1) * *(A.rbegin() + 2);

  return max(neg_sum, pos_sum);
}
