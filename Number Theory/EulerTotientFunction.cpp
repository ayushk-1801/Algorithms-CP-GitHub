// O(sqrt(N))
ll phi(ll n) {
    ll number = n;
    if (n % 2 == 0) {
        number /= 2;
        while (n % 2 == 0)
            n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            number = (number / i * (i - 1));
        }
    }
    if (n > 1)
        number = (number / n * (n - 1));
    return number;
}

// O(nloglogn)
vector<ll> phi(ll n) {
    vector<ll> res(n + 1);
    for (ll i = 0; i <= n; i++)
        res[i] = i;
    for (ll i = 2; i <= n; i++) {
        if (res[i] == i) {
            for (ll j = i; j <= n; j += i)
                res[j] -= res[j] / i;
        }
    }
    return res;
}
