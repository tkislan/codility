using namespace std;

#include <vector>

#include "check.h"

#include "stone_wall.h"

int main() {
  vector<int> input { 8, 8, 5, 7, 9, 8, 7, 4, 8 };
  CHECK(solution(input), 7);

  return test_ret;
}
