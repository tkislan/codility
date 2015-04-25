int solution(vector<int> &A) {
  int sum = 0;
  int east_cars = 0;

  for (int n : A) {
    switch (n) {
      case 0:
        ++east_cars;
        break;
      case 1:
        sum += east_cars;
        if (sum > 1000000000) return -1;
        break;
      default:
        break;
    }
  }

  return sum;
}
