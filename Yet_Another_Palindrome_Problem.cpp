#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll var[100001];
ll pwr(ll n, ll c, ll m)
{
    ll x = 1, y = n;
    while (c > 0)
    {
        if (c % 2 == 1)
        {
            x = (x * y);
            if (x > m)
                x %= m;
        }
        y = (y * y);
        if (y > m)
            y %= m;
        c /= 2;
    }
    return x;
}

ll elr(ll n, ll m)
{
    return pwr(n, m - 2,m);
}

ll cmb(ll n, ll r, ll m)
{

    return (var[n] * ((elr(var[r], m) * elr(var[n - r], m)) % m)) % m;
}

int main()
{
   var[0] = 1;
    for (int i = 1; i <= 4; i++)
        var[i] = (var[i - 1] * i) % mod;
    cout << cmb(4, 2, mod) << endl;
}