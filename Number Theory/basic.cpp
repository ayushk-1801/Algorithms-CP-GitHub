/* SIEVE OF ERATOSTHENES */
int N;
vector<bool> primes(N + 1, true);

void sieve() {
    primes[0] = primes[1] = false;
    for (int i = 2; i <= N; i++) {
        if (primes[i] && (long long)i * i <= N) {
            for (int j = i * i; j <= N; j += i)
                primes[j] = false;
        }
    }
}

/* BINARY EXPONENTIATION */
long long binExpo(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
