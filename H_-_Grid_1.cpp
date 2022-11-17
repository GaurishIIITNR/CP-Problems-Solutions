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
vector<vector<char>> arr;
vector<vector<ll>> dp(1001, vector<ll>(1001, -1));
ll mod = (ll)(1e+9) + 7;
ll f(ll n, ll m)
{
    // Base
    if (n == 0 && m == 0)
        return 1;
    if (n < 0 || m < 0)
        return 0;
    if (arr[n][m] == '#')
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    // Recursive
    ll cnt = 0;
    cnt += f(n, m - 1);
    cnt += f(n - 1, m);
    return dp[n][m] = cnt % mod;
}
void HHM()
{
    ll i, j, k;
    ll n, m;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        vector<char> p;
        for (j = 0; j < m; j++)
        {
            char d;
            cin >> d;
            p.pb(d);
        }
        arr.pb(p);
    }
    cout << f(n - 1, m - 1);
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
