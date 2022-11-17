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
ll dp[102][5];
ll f(vector<ll> &v, ll n, ll c)
{
    // Base
    if (n == -1)
        return 0;
    if (dp[n][c + 1] != -1)
        return dp[n][c + 1];
    // Recursive
    if (v[n] == 0)
        return dp[n][c + 1] = 1 + f(v, n - 1, -1);
    else if (v[n] == 1)
    {
        if (c == 1)
            return dp[n][c + 1] = 1 + f(v, n - 1, -1);
        else
            return dp[n][c + 1] = min(1 + f(v, n - 1, -1), f(v, n - 1, 1));
    }
    else if (v[n] == 2)
    {
        if (c == 2)
            return dp[n][c + 1] = 1 + f(v, n - 1, -1);
        else
            return dp[n][c + 1] = min(1 + f(v, n - 1, -1), f(v, n - 1, 2));
    }
    else
    {
        if (c == 1)
            return dp[n][c + 1] = min(1 + f(v, n - 1, -1), f(v, n - 1, 2));
        else if (c == 2)
            return dp[n][c + 1] = min(1 + f(v, n - 1, -1), f(v, n - 1, 1));
        else
            return dp[n][c + 1] = min(1 + f(v, n - 1, -1), min(f(v, n - 1, 2), f(v, n - 1, 1)));
    }
}
void HHM()
{
    memset(dp, -1, sizeof(dp));
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
    } // 0 both not
      // 1 contest, 2 gym ,3 both
    cout << f(v, v.size() - 1, -1);
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
