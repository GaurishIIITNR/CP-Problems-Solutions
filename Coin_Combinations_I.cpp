// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll m=1000000007;
vector<ll> v, dp(1000002, -1);
ll f(ll tar)
{
    // Base
    if (tar == 0)
        return 1;
    // else if (tar < 0)
    //     return 0;
    if (dp[tar] != -1)
        return dp[tar];
    // Recursive
    ll cnt = 0;
    for (auto x : v)
    {
        if (tar - x >= 0)
            cnt += f(tar - x);
    }
    return dp[tar] = cnt%m;
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
    cout << f(tar);
}