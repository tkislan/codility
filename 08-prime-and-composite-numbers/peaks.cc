using namespace std;

#include <vector>

#include "check.h"

#include "peaks.h"

int main() {
  vector<int> input { 1, 2, 3, 4, 3, 4, 1, 2, 3, 4, 6, 2 };
  CHECK(solution(input), 3);

  return test_ret;
}
