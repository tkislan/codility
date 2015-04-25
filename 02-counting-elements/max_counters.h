vector<int> solution(int N, vector<int> &A) {
  vector<int> o(N, 0);

  int max_counter_value = 0;
  int max_value = 0;

  for (int n : A) {
    if (n <= N) {
      --n;

      if (o[n] < max_counter_value) o[n] = max_counter_value + 1;
      else o[n] += 1;

      if (o[n] > max_value) max_value = o[n];
    } else {
      max_counter_value = max_value;
    }
  }

  for (int &n : o) {
    if (n < max_counter_value) n = max_counter_value;
  }

  return o;
}
