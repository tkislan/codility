int solution(vector<int> &A) {
  // write your code in C++11

  vector<bool> occurence(A.size(), false);

  for (int n : A) {
    if (n <= 0) continue;
    if (n > static_cast<int>(A.size())) continue;

    occurence[n - 1] = true;
  }

  for (size_t i = 0; i < occurence.size(); ++i) {
    if (occurence[i] == false) return i + 1;
  }

  return A.size() + 1;
}
