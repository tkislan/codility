using namespace std;

#include <vector>

#include "check.h"

#include "triangle.h"

int main() {
  vector<int> input { 10, 2, 5, 1, 8, 20 };
  CHECK(solution(input), 1);

  vector<int> input2 { 10, 50, 5, 1 };
  CHECK(solution(input2), 0);

  return test_ret;
}
