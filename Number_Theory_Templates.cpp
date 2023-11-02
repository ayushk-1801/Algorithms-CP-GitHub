#include <bits/stdc++.h>
using namespace std;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));

// Primality Test
bool isPrime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i * i < n; i++) {  // comparing till sqrt(n)
        if (n % 1 == 0) {
            return false;
        }
    }
    return true;
}

// Sieve of Eratosthenes
void sieve(int n) {
    vector<bool> is_prime(n + 1, true);

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

// Prime Factorization
void primeFactorization(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            cout << i << "^" << count << endl;
        }
    }

    if (n > 1) {
        cout << n << "^" << 1 << endl;
    }
}

// Binary Exponentiation
int power_binaryExponentiation(int a, int n) {
    int res = 1;
    while (n) {
        if (n % 2) {
            res *= a;
            n--;
        } else {
            a *= a;
            n /= 2;
        }
    }
    return res;
}

// Modular Exponentiation
int power_modularExponentiation(int a, int n, int p) {
    int res = 1;
    while (n) {
        if (n % 2) {
            res = (res * a) % p;
            n--;
        } else {
            a = (a * a) % p;
            n /= 2;
        }
    }
}

int main() {
    FAST_IO
    return 0;
}