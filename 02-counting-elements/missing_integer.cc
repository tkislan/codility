using namespace std;

#include <vector>

#include "missing_integer.h"

int main() {
  vector<int> input { 1, 3, 6, 4, 1, 2 };
  if (solution(input) != 5) return -1;

  vector<int> input2 { 1, 2, 3, 4};
  if (solution(input2) != 5) return -1;

  vector<int> input3 { 2 };
  if (solution(input3) != 1) return -1;

  return 0;
}
