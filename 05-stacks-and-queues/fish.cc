using namespace std;

#include <vector>

#include "check.h"

#include "fish.h"

int main() {
  vector<int> a_input { 4, 3, 2, 1, 5 }, b_input { 0, 1, 0, 0, 0 };
  CHECK(solution(a_input, b_input), 2);

  vector<int> a_input2 { 4, 3, 2, 1, 5 }, b_input2 { 0, 0, 0, 0, 0 };
  CHECK(solution(a_input2, b_input2), 5);

  vector<int> a_input3 { 4, 3, 2, 1, 5 }, b_input3 { 1, 1, 1, 1, 1 };
  CHECK(solution(a_input3, b_input3), 5);

  vector<int> a_input4 { 10, 3, 2, 1, 5 }, b_input4 { 1, 0, 0, 0, 0 };
  CHECK(solution(a_input4, b_input4), 1);

  vector<int> a_input5 { 1, 3, 2, 4, 5 }, b_input5 { 1, 0, 0, 0, 0 };
  CHECK(solution(a_input5, b_input5), 4);

  vector<int> a_input6 { 1, 3, 2, 4, 10 }, b_input6 { 1, 1, 1, 1, 0 };
  CHECK(solution(a_input6, b_input6), 1);

  return test_ret;
}
