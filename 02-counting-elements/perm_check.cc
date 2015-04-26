using namespace std;

#include <vector>

#include "check.h"

#include "perm_check.h"

int main() {
  vector<int> input1{ 4, 1, 3, 2 };
  vector<int> input2{ 4, 1, 3 };

  CHECK(solution(input1), 1);
  CHECK(solution(input2), 0);

  return test_ret;
}
