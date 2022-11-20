//🚩HHM🚩
// DATE: 21-06-2022
// TIME:20:46:33

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
// set<ll>st;
// map<ll,ll>mp;
// string s;cin>>s;

void HHM()
{
    ll i, j, k;
    // ll n;
    // cin >> n;
    // vector<ll>v(n,0);
    // vin(v,n);
    string s;
    cin >> s;
    if (s.length() < 3)
    {
        cout << 0 << "\n";
        return;
    }
    ll cnz = 0, cno = 0;
    for (auto x : s)
    {
        if (x == '0')
            cnz++;
        else
            cno++;
    }
    vp(ll, ll, vo);
    vp(ll, ll, vz);
    ll cn0 = 0, cn1 = 0;
    for (auto x : s)
    {
        if (x == '0')
        {
            vz.pb({cn0, cnz - cn0 - 1});
            vo.pb({cn1, cno - cn1});
            cn0++;
        }
        else
        {
            vz.pb({cn0, cnz - cn0});
            vo.pb({cn1, cno - cn1 - 1});
            cn1++;
        }
    }

    ll res = INT_MAX;
    for (i = 0; i < s.length(); i++)
        res = min(res, min((vz[i].S + vo[i].F), (vz[i].F + vo[i].S)));
    cout << res << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
