using namespace std;

#include <vector>

#include "passing_cars.h"

int main() {
  vector<int> input { 0, 1, 0, 1, 1 };
  if (solution(input) != 5) return -1;

  return 0;
}
