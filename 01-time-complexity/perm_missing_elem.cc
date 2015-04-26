using namespace std;

#include <vector>

#include "check.h"

#include "perm_missing_elem.h"

int main() {
  vector<int> input{ 2, 3, 1, 5 };
  CHECK(solution(input), 4);

  return test_ret;
}
