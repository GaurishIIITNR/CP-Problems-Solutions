// HHM
//  DATE: 06-07-2022
// TIME:09:04:52

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
    ll n;
    cin >> n;
    map<string, pair<ll, vector<pair<ll, ll>>>> mp;
    i = 1;
    while (n--)
    {
        string s;
        ll d;
        cin >> s >> d;
        mp[s].F += d;
        mp[s].S.pb({mp[s].F, i});
        i++;
    }
    // for (auto x : mp)
    // {
    //     cout << x.F << " " << x.S.F << " "<< "\n";
    // }
    ll mx = INT_MIN;
    for (auto x : mp)
        mx = max(mx, x.S.F);
    vector<pair<ll, string>> v;
    for (auto x : mp)
    {
        if (x.S.F == mx)
        {
            for (auto y : x.S.S)
            {
                if (y.F >= mx)
                {
                    v.pb({y.S, x.F});
                    break;
                }
            }
        }
    }
    sort(all(v));
    cout << v[0].S << "\n";
    // for (auto x : v)
    // {
    //     cout << x.F << " " << x.S << "\n";
    // }
    // cout << ms << "\n";
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
