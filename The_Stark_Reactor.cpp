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
ll dp[54][204][204];
ll f(vector<pair<ll, ll>> &dec, ll i, ll md, ll zd)
{
    // Base
    if (i == dec.size())
    {
        if (md == 0 && zd == 0)
            return 1;
        return 0;
    }
    if (dp[i][md][zd] != -1)
        return dp[i][md][zd];
    // Recursive
    ll p = 0;
    if ((md - dec[i].F) >= 0 && (zd - dec[i].S) >= 0)
        p = f(dec, i, md - dec[i].F, zd - dec[i].S);
    ll p1 = f(dec, i + 1, md, zd);
    return dp[i][md][zd] = (p + p1);
}
void HHM()
{
    ll i, j, k;
    // ll n;
    cin >> k;
    vector<pair<ll, ll>> dec;
    for (i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;
        dec.pb({a, b});
    }
    ll q;
    cin >> q;
    while (q--)
    {
        memset(dp, -1, sizeof(dp));
        ll m1, z1, m2, z2;
        cin >> m1 >> z1 >> m2 >> z2;
        cout << f(dec, 0, m1 - m2, z1 - z2) << "\n";
    }
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
