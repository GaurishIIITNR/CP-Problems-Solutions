// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> wgt, val;
vector<vector<ll>> dp(101, vector<ll>(100002, -1));
ll f(ll n, ll w)
{
    // Base
    if (n == -1)
    {
        if (w >= 0)
        {
            return 0;
        }
        return INT_MIN;
    }
    if (w < 0)
    {
        return INT_MIN;
    }
    if (dp[n][w] != -1)
        return dp[n][w];
    // Recursive
    return dp[n][w] = max(val[n] + f(n - 1, w - wgt[n]), f(n - 1, w));
}
int main()
{
    ll n, w;
    cin >> n >> w;
    ll n1 = n;
    while (n--)
    {
        ll w, v;
        cin >> w >> v;
        wgt.push_back(w);
        val.push_back(v);
    }
    cout << f(n1 - 1, w);
}