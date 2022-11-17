// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll m = 1000000007;
vector<ll> v;
vector<vector<ll>> dp(101, vector<ll>(1000002, -1));
ll f(ll tar, ll i)
{
    // Base
    if (tar == 0)
        return 1;
    if (i == v.size())
        return 0;
    // else if (tar < 0)
    //     return 0;
    if (dp[i][tar] != -1)
        return dp[i][tar];
    // Recursive
    ll cnt = 0;
    if (tar - v[i] >= 0)
        cnt += f(tar - v[i], i);
    cnt %= m;
    cnt += f(tar, i + 1);
    return dp[i][tar] = cnt % m;
}
int main()
{
    ll n, tar;
    cin >> n >> tar;
    for (ll i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.push_back(d);
    }
    cout << f(tar, 0);
}