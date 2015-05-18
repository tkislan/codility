vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
  vector<bool> is_prime(N + 1, true);
  is_prime[0] = is_prime[1] = false;

  {
    int i = 2;
    while (i * i <= N) {
      if (is_prime[i]) {
        int k = i * i;
        while (k <= N) {
          is_prime[k] = false;
          k += i;
        }
      }

      i += 1;
    }
  }

  vector<int> primes;
  for (size_t i = 0; i < is_prime.size(); ++i) if (is_prime[i]) primes.push_back(i);

  vector<bool> is_semiprime(N + 1, false);

  auto prime_it = primes.begin();

  while (prime_it != primes.end()) {
    auto it = primes.begin();

    while (it != primes.end()) {
      int semiprime = (*it) * (*prime_it);

      if (semiprime > N) break;

      is_semiprime[semiprime] = true;
      ++it;
    }

    ++prime_it;
  }

  //! Calculate prefix sums
  vector<int> semiprime_count_cache(N + 1, 0);
  for (size_t i = 1; i < semiprime_count_cache.size(); ++i) {
    semiprime_count_cache[i] = semiprime_count_cache[i - 1] + ((is_semiprime[i]) ? 1 : 0);
  }

  vector<int> output;

  for (size_t i = 0; i < P.size(); ++i) {
    output.push_back(semiprime_count_cache[Q[i]] - semiprime_count_cache[P[i] - 1]);
  }

  return output;
}
