// HHM
//  DATE: 08-07-2022
// TIME:20:49:29

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
    cin >> n >> k;
    // set<ll>st;
    map<ll, ll> mp;
    for (i = 1; i <= n; i++)
        mp[i] = 0;
    for (i = 0; i < k; i++)
    {
        ll d;
        cin >> d;
        mp[d]++;
    }
    vector<ll> v;
    for (auto x : mp)
        v.pb(x.S);
    sort(all(v));
    // vout(v);
    ll res = v[0];
    ll cnt = 3;
    for (i = 1; i < v.size(); i++)
    {
        v[i] -= res;
        // res += ceil((dbl)v[i] / cnt) * 2;
        if (v[i] % cnt == 0)
            res += (v[i] / cnt) * 2;
        else if (v[i] % cnt == 1)
            res += ((v[i] / cnt) * 2) + 1;
        else
            res += ((v[i] / cnt) * 2) + 2;
        cnt++;
    }
    cout << res << "\n";
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
