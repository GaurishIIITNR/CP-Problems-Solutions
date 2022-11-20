//🚩HHM🚩
// DATE: 21-06-2022
// TIME:22:58:08

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
bool sor(pair<pair<ll, ll>, ll> p1, pair<pair<ll, ll>, ll> p2)
{
    return p1.F.S == p2.F.F;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    // vector<ll>v(n,0);
    // vin(v,n);
    vector<pair<pair<ll, ll>, ll>> v(n + 1);
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> v[i].F.F;
    }
    for (i = 0; i < n; i++)
    {
        cin >> v[i].F.S;
    }
    for (i = 0; i < n; i++)
    {
        cin >> v[i].S;
    }
    // v[n].F.F = v[0].F.F;
    // v[n].F.S = v[0].F.S;
    // v[n].S = v[0].S;
    sort(all(v), sor);
    // ll temp = v[v.size() - 1].F.F;
    // for (i = v.size() - 2; i > 0; i--)
    // {
    //     if (temp == v[i].F.S)
    //         break;
    //     else
    //         swap(v[i], v[i - 1]);
    // }
    for (auto x : v)
        cout << x.F.F << " " << x.F.S << " " << x.S << "\n";
    //  vp(ll, ll, v1);
    // bool flag=0;ll cnt=1,temp;
    // for(i=0;mp.size()!=0;i++){

    // }

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
