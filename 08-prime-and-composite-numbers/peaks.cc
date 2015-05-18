using namespace std;

#include <vector>

#include "check.h"

#include "peaks.h"

int main() {
  vector<int> input { 1, 2, 3, 4, 3, 4, 1, 2, 3, 4, 6, 2 };
  CHECK(solution(input), 3);

  vector<int> input2 { 1, 2, 1, 2, 1, 2, 1, 2, 1 };
  CHECK(solution(input2), 3);

  vector<int> input3 { 1, 1, 1 };
  CHECK(solution(input3), 0);

  vector<int> input4 { 1, 2, 1 };
  CHECK(solution(input4), 1);

  vector<int> input5 { 1, 2, 3, 4, 5, 6 };
  CHECK(solution(input5), 0);

  vector<int> input6;
  for (size_t i = 0; i < 99999; ++i) input6.push_back(i);
  input6.push_back(1);
  CHECK(solution(input6), 1);

  return test_ret;
}
