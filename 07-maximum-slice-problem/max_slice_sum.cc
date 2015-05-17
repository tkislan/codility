using namespace std;

#include <vector>

#include "check.h"

#include "max_slice_sum.h"

int main() {
  vector<int> input { 3, 2, -6, 4, 0 };
  CHECK(solution(input), 5);

  vector<int> input2 { -2, -3, -5, -4, -3 };
  CHECK(solution(input2), -2);

  return test_ret;
}