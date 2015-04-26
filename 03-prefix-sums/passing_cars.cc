using namespace std;

#include <vector>

#include "check.h"

#include "passing_cars.h"

int main() {
  vector<int> input { 0, 1, 0, 1, 1 };
  CHECK(solution(input), 5);

  return test_ret;
}
