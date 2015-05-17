using namespace std;

#include <vector>

#include "check.h"

#include "max_profit.h"

int main() {
  vector<int> input { 23171, 21011, 21123, 21366, 21013, 21367 };
  CHECK(solution(input), 356);

  vector<int> input2 { 1, 2, 3, 5, 1 };
  CHECK(solution(input2), 4);

  vector<int> input3 { 1, 2, 3, 5, 1, 10 };
  CHECK(solution(input3), 9);

  vector<int> input4 { 1, 2, 3, 5, 1, 4 };
  CHECK(solution(input4), 4);

  return test_ret;
}