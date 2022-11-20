// HHM
//  DATE: 12-07-2022
// TIME:20:44:59

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
// #define vp(type1, type2, name) vector<pair<type1, type2>> name
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
    ll n;
    cin >> n;
    // vector<ll> v;
    vector<pair<ll, ll>> vp;
    // map<pair<ll,ll>
    ll cnt = 0, cnt1 = 0;
    ll prev = -1;
    map<ll, ll> mp1, mp2;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        if (d < i + 1)
        {
            vp.pb({d, i + 1});
        }
    }

    // for (auto x : vp)
    //     cout << x.F << " " << x.S << "\n";
    // deb(vp.size());
    if (vp.size() == 0 || vp.size() == 1)
    {
        cout << 0 << "\n";
        return;
    }
    for (i = 0; i < vp.size(); i++)
    {
        for (j = i + 1; j < vp.size(); j++)
        {
            if (vp[i].S < vp[j].F)
                cnt++;
        }
    }
    cout << cnt << "\n";
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
