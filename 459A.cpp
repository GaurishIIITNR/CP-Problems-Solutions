// HHM
//  DATE: 03-09-2022
// TIME:21:13:51

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
void HHM()
{
    ll i, j, k;
    ll x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if (x1 == x)
    {
        ll d = y - y1;
        cout << x + d << " " << y << " " << x1 + d << " " << y1 << "\n";
        return;
    }
    if (y1 == y)
    {
        ll d = x - x1;
        cout << x << " " << y + d << " " << x1 << " " << y1 + d << "\n";
        return;
    }
    dbl m = (dbl)(y - y1) / (x - x1);
    if (m == 1)
    {
        cout << min(x, x1) << " " << max(y, y1) << " " << max(x, x1) << " " << min(y, y1) << "\n";
        return;
    }
    if (m == -1)
    {
        cout << min(x, x1) << " " << min(y, y1) << " " << max(x, x1) << " " << max(y, y1) << "\n";
        return;
    }
    cout << -1 << "\n";

    // set<ll>st;
    // map<ll,ll>mp;
    // string s;cin>>s;
    // vector<ll>v(n,0);

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    // ll tt=1;
    while (t--)
    {
        // cout << "Case #" << tt << ": ";
        HHM();
        // tt++;;
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);