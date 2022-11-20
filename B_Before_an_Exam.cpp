// HHM
//  DATE: 07-07-2022
// TIME:21:38:00

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

bool cmp(pair<ll, pair<ll, ll>> p1, pair<ll, pair<ll, ll>> p2)
{
    return p1.S.S < p2.S.S;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n >> k;
    ll k1 = k;
    ll mx = 0, mn = 0;
    vector<pair<ll, pair<ll, ll>>> v;
    i = 0;
    while (n--)
    {
        ll d1, d2;
        cin >> d1 >> d2;
        mx += d2;
        mn += d1;
        k -= d1;
        v.pb({d2 - d1, {d1, i}});
        i++;
    }
    if (mn <= k1 && mx >= k1)
    {
        sort(all(v));
        reverse(all(v));
        for (i = 0; i < v.size(); i++)
        {
            // cout << v[i].F << " " << v[i].S.F << " " << v[i].S.S << endl;
            if (k > v[i].F)
            {
                v[i].S.F += v[i].F;
                k -= v[i].F;
            }
            else
            {
                v[i].S.F += k;
                break;
            }
        }
        cout << "YES\n";
        sort(all(v), cmp);
        for (i = 0; i < v.size(); i++)
            cout << v[i].S.F << " ";
    }
    else
        cout << "NO\n";
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
