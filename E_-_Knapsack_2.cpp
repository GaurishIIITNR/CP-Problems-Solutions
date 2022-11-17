// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> wgt, val;
vector<vector<ll>> dp(102, vector<ll>(100002, -1));
bool f(ll n, ll sm, ll w)
{
    // Base
    // if (w < 0)
    //     return 0;
    if (n == 0)
    {
        if (sm == 0)
            return 1;
        else
            return 0;
    }
    // if (sm == 0)
    //     return 1;
    if (dp[n][sm] != -1)
    {
        if (dp[n][sm])
            return 1;
        return 0;
    }
    // Recursive
    bool r1 = 0, r2 = 0;
    if (sm - val[n - 1] >= 0 && w - wgt[n - 1] >= 0)
        r1 = f(n - 1, sm - val[n - 1], w - wgt[n - 1]);
    r2 = f(n - 1, sm, w);
    if (r1 | r2)
        dp[n][sm] = 1;
    dp[n][sm] = 0;
    return (r1 | r2);
}
int main()
{
    ll n, w;
    cin >> n >> w;
    ll n1 = n, sm = 0;
    while (n--)
    {
        ll w, v;
        cin >> w >> v;
        wgt.push_back(w);
        val.push_back(v);
        sm += v;
    }
    ll mx = 0;
    for (ll i = 1; i <= sm; i++)
    {
        if (f(n1, i, w))
            mx = i;
    }
    cout << mx << "\n";
}