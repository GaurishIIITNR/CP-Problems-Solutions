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
ll f(vector<vector<ll>> &v, ll i, ll j)
{
    if (j == v[0].size() - 1 && i == v.size() - 1)
        return v[i][j];
    if (j > v[0].size() - 1 || i > v.size() - 1)
        return INT_MIN;
    return max(v[i][j] + f(v, i, j + 1), v[i][j] + f(v, i + 1, j));
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n >> k;
    vector<vector<ll>> v(n, vector<ll>(k, 0));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
            cin >> v[i][j];
    }
    cout << f(v,0,0);
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
