using namespace std;

#include <vector>

#include "check.h"

#include "distinct.h"

int main() {
  vector<int> input { 2, 1, 1, 2, 3, 1 };
  CHECK(solution(input), 3);

  return test_ret;
}
