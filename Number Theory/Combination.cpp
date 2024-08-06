ll expo(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

ll modInverse(ll n, int p) {
    return expo(n, p - 2, p);
}

vector<ll> init() {
    vector<ll> fac(1e6+1);
    fac[0] = fac[1] = 1;
    for (int i = 2; i < fac.size(); i++) {
        fac[i] = (fac[i - 1] * i) % MOD;
    }
    return fac;
}

ll C(int n, int k, int p, vector<ll>& fac) {
    if (k == 0 || k == n) return 1;
    return (fac[n] * modInverse(fac[k], p) % p * modInverse(fac[n - k], p) % p) % p;
}
