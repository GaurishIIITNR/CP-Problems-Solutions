#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<ll>> dp(100001, vector<ll>(101, -1));
vector<ll> v;
bool f(ll sm, ll n)
{
    // Base
    if (sm < 0)
        return 0;
    if (n == 0 && sm == 0)
        return 1;
    else if (n == 0)
        return 0;
    if (dp[sm][n] != -1)
        return dp[sm][n];
    bool p = f((sm - v[v.size() - n]), n - 1) | f(sm, n - 1);
    dp[sm][n] = p;
    return p;
}
int main()
{
    dp[0][0] = 1;
    ll n;
    cin >> n;
    ll sm = 0;
    vector<ll> res;
    for (ll i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.push_back(d);
        sm += d;
    }
    for (ll i = 1; i <= sm; i++)
    {
        if (f(i, n))
            res.push_back(i);
    }
    cout << res.size() << "\n";
    for (auto x : res)
        cout << x << " ";
    cout << "\n";
}