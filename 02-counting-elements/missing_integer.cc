using namespace std;

#include <vector>

#include "check.h"

#include "missing_integer.h"

int main() {
  vector<int> input { 1, 3, 6, 4, 1, 2 };
  CHECK(solution(input), 5);

  vector<int> input2 { 1, 2, 3, 4};
  CHECK(solution(input2), 5);

  vector<int> input3 { 2 };
  CHECK(solution(input3), 1);

  return test_ret;
}
