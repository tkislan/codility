using namespace std;

#include <vector>

#include "check.h"

#include "max_counters.h"

int main() {
  vector<int> input { 3, 4, 4, 6, 1, 4, 4 };
  CHECK(solution(5, input), (vector<int>{ 3, 2, 2, 4, 2 }));

  return test_ret;
}
