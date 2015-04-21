int solution(vector<int> &A) {
  vector<bool> c(A.size(), false);

  for (int n : A) {
    if (n > static_cast<int>(A.size())) return 0;
    if (c[n - 1] == true) return 0;

    c[n - 1] = true;
  }

  return 1;
}
