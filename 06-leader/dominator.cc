using namespace std;

#include <vector>

#include "check.h"

#include "dominator.h"

int main() {
  vector<int> input { 3, 4, 3, 2, 3, -1, 3, 3 };
  CHECK(solution(input), 0);

  vector<int> input2 { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2 };
  CHECK(solution(input2), 5);

  vector<int> input3 { 1, 1, 1, 1, 1, 2, 3, 4, 5, 6 };
  CHECK(solution(input3), -1);

  vector<int> input4 { 1, 2, 3, 4, 5, 6, 6, 6, 6, 6 };
  CHECK(solution(input4), -1);

  return test_ret;
}