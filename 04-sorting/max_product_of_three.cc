using namespace std;

#include <vector>

#include "check.h"

#include "max_product_of_three.h"

int main() {
  vector<int> input { -3, 1, 2, -2, 5, 6 };
  CHECK(solution(input), 60);

  vector<int> input2 { -10, 1, 2, -2, 5, 6 };
  CHECK(solution(input2), 120);

  return test_ret;
}
