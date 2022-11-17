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
ll dp[100003][101];
ll f(vector<ll> &v, ll i, ll previ)
{
    // Base
    if (i == v.size() + 1)
        return 0;
    if (dp[i][previ] != -1)
        return dp[i][previ];
    // Recursive
    if (i == 1)
        return dp[i][previ]= max(1 + f(v, i + 1, i), f(v, i + 1, previ));
    else if (previ != 0 && v[previ - 1] < v[i - 1] && i % previ == 0)
        return  dp[i][previ]=max(1 + f(v, i + 1, i), f(v, i + 1, previ));
    else
        return  dp[i][previ]=f(v, i + 1, previ);
}
void HHM()
{
    memset(dp, -1, sizeof(dp));
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    vin(v, n);
    cout << f(v, 1, 0) << "\n";
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
