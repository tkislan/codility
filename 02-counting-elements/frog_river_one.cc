using namespace std;

#include <vector>

#include "check.h"

#include "frog_river_one.h"

int main() {
  vector<int> input{ 1, 3, 1, 4, 2, 3, 5, 4 };
  CHECK(solution(5, input), 6);

  return test_ret;
}
