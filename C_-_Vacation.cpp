// हर हर महादेव
#define F first
#define S second
#define dbl double
using namespace std;
#define pb push_back
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"

// vector<ll> dp(1000005, -1);
// vector<pair<ll,pair<ll,ll>>> v;
// ll f(ll i, ll n, ll k)
// {
//     // Base
//     if (i == n - 1)
//     {
//         return 0;
//     }
//     if (dp[i] != -1)
//         return dp[i];
//     // Recursive
//     ll best = INT_MAX;
//     for (ll j = 1; j <= k; j++)
//     {
//         if (i + j < n)
//             best = min(abs(v[i] - v[i + j]) + f(i + j, n, k), best);
//     }
//     return dp[i] = best;
// }

void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    ll res = 0;
    for (i = 0; i < n; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        res += max(a, max(b, c));
        // v.pb({a,{b,c}});
    }
    cout << res;
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
