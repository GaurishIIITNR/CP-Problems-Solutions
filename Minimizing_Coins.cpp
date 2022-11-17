#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> dp(1000005, -1);
ll f(vector<ll> &v, ll sm)
{
    // Base
    if (sm == 0)
        return 0;
    if (dp[sm] != -1)
    {
        return dp[sm];
    }
    ll best = INT_MAX;
    for (auto x : v)
    {
        if (sm - x >= 0)
            best = min(best, 1 + f(v, sm - x));
        // else
        //     return INT_MAX;
    }
    dp[sm] = best;

    return best;
}
int main()
{
    ll n, sm;
    cin >> n >> sm;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.push_back(d);
    }
    if (f(v, sm) == INT_MAX)
        cout << -1 << "\n";
    else
        cout << f(v, sm);
}