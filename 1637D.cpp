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
ll dp[101][10001];
// after solving
// eqn --> (n-2)*(sum of square of all element)+ min((sum of ai)^2+(sum of bi)^2);
ll f(vector<ll> &a, vector<ll> &b, ll n, ll sma, ll tsm)
{
    // Base
    if (n == -1)
        return sma * sma + (tsm - sma) * (tsm - sma);
    if (dp[n][sma] != -1)
        return dp[n][sma];
    // Recursive
    ll p = f(a, b, n - 1, sma + a[n], tsm);
    ll p1 = f(a, b, n - 1, sma + b[n], tsm);
    return dp[n][sma] = min(p, p1);
}
void HHM()
{
    memset(dp, -1, sizeof(dp));
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> a, b;
    ll res = 0, sm = 0;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        a.pb(d);
        res += d * d;
        sm += d;
    }
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        b.pb(d);
        res += d * d;
        sm += d;
    }
    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }
    res = (n - 2) * res;
    cout << res + f(a, b, n - 1, 0, sm) << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
