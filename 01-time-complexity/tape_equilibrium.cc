using namespace std;

#include <vector>

#include "check.h"

#include "tape_equilibrium.h"

int main() {
  vector<int> input{ 3, 1, 2, 4, 3 };
  CHECK(solution(input), 1);

  return test_ret;
}
