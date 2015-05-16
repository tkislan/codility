using namespace std;

#include <vector>

#include "check.h"

#include "equi_leader.h"

int main() {
  vector<int> input { 4, 3, 4, 4, 4, 2 };
  CHECK(solution(input), 2);

  vector<int> input2 { 4, 4, 2, 4, 2, 4, 4 };
  CHECK(solution(input2), 6);

  vector<int> input3 { 4, 3, 4, 4, 4, 4 };
  CHECK(solution(input3), 4);

  vector<int> input4 { 4, 4, 5, 4 };
  CHECK(solution(input4), 2);

  return test_ret;
}
