#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<ll>> dp(1001, vector<ll>(1001, -1));
ll m = (1e+9) + 7;
ll f(ll i, ll j)
{
    if (i < 0 || j < 0)
        return 0;
    if (i == 0 && j == 0)
        return 1;
    // if (dp[i][j] != -1)
    //     return dp[i][j];
    ll p = 0;
    for (int ii = 1; ii <= i1; ii++)
    {
        for (int jj = 1; jj <= j1; jj++)
        {
            ll c = f(i - ii, j - jj, i1, j1);
            p += c;
            p %= m;
        }
    }
    return p % m;
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << f(2, n,2) % m;
    }
}