using namespace std;

#include <vector>

#include "perm_missing_elem.h"

int main() {
  vector<int> input{ 2, 3, 1, 5 };
  if (solution(input) != 4) return -1;

  return 0;
}
