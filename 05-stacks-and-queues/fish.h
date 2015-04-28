int solution(vector<int> &A, vector<int> &B) {
  int fish_alive = A.size();

  vector<int> downstream_fish;
  downstream_fish.reserve(A.size());

  for (size_t i = 0; i < A.size(); ++i) {
    int fish_size = A[i];
    int direction = B[i];

    if (direction == 0) { // upstream
      if (downstream_fish.empty()) {
        // do nothing
      } else {
        while (!downstream_fish.empty()) {
          --fish_alive;

          if (downstream_fish.back() > fish_size) break;

          downstream_fish.pop_back();
        }
      }
    } else {
      downstream_fish.push_back(fish_size);
    }
  }

  return fish_alive;
}
