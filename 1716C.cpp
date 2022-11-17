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
ll f(vector<vector<ll>> &v, ll i, ll j, map<pair<ll, ll>, bool> mp)
{
    // Base
    if (mp.size() == v.size() * v[0].size())
        return 0;
    // Recursive
    ll p1 = INT_MAX, p2 = INT_MAX, p3 = INT_MAX, p4 = INT_MAX;
    if (i + 1 < v.size() && !mp[{i, j}])
    {
        mp[{i, j}] = 1;
        p1 = max(v[i][j], f(v, i + 1, j, mp));
    }
    if (j + 1 < 2)
    {
        mp[{i, j}] = 1;
        p2 = max(v[i][j], f(v, i, j + 1, mp));
    }
    if (i - 1 >= 0)
    {
        mp[{i, j}] = 1;
        p3 = max(v[i][j], f(v, i - 1, j, mp));
    }
    if (j - 1 >= 0)
    {
        mp[{i, j}] = 1;
        p4 = max(v[i][j], f(v, i, j - 1, mp));
    }
    if (p1 == INT_MAX && p2 == INT_MAX && p3 == INT_MAX && p4 == INT_MAX)
        return INT_MAX;
    return min(p1, min(p2, min(p3, p4)));
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<vector<ll>> v(2, vector<ll>(n, 0));
    for (auto &x : v)
    {
        for (auto &y : x)
            cin >> y;
    }
    for (auto &x : v)
    {
        for (auto &y : x)
            cout<<y<<" ";
            cout<<"\n";
    }
    map<pair<ll, ll>, bool> mp;
    // cout << f(v, 0, 0, mp) << "\n";
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
