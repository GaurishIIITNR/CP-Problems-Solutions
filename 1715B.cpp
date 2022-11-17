// HHM
//  DATE: 20-08-2022
// TIME:20:18:31

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
    ll n, a, b, sm;
    cin >> n >> a >> b >> sm;
    ll rsm = sm;
    if ((b * a) > sm)
    {
        cout << -1 << "\n";
        return;
    }
    vector<ll> v(n, 0);
    v[0] = min(sm, (((b + 1) * (a)) - 1));
    // cout << v[0];
    sm -= min(sm, ((a * (b + 1)) - 1));
    for (i = 1; i < n; i++)
    {
        if (sm >= (a - 1))
        {
            v[i] = (a - 1);
            sm -= (a - 1);
        }
        else
        {
            v[i] = sm;
            sm = 0;
        }
    }
    // vout(v);
    // cout << sm << "\n";
    ll be = 0, smm = 0;
    for (auto x : v)
    {
        be += (x / a);
        smm += x;
    }
    if (smm == rsm && be == b)
    {
        // sort(all(v));
        vout(v);
    }
    else
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
    cin >> t;
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