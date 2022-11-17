#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll m = 1000000007;
vector<ll>dp(1000005,-1);
ll f(ll sm1, ll sm2, ll tmp, ll n)
{
    if (tmp == n + 1)
    {
        if (sm1 == sm2)
            return 1;
        return 0;
    }
    ll p = f(sm1 + tmp, sm2, tmp + 1, n) + f(sm1, sm2 + tmp, tmp + 1, n);
    p %= m;
    return p;
}

int main()
{
    long long int n;
    cin >> n;
    cout << (f(0, 0, 1, n) / 2) % m;
}