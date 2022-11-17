// HHM
//  DATE: 30-08-2022
// TIME:20:58:08

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
bool cmp(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    if (p1.F == p2.F)
        return p1.S < p2.S;
    return p1.F > p2.F;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<ll, ll>> v;
    ll res = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            if (i < n - i - 1)
                v.push_back({n - i - 1, i});
            res += i;
        }
        else
        {
            if (n - i - 1 < i)
                v.push_back({i, n - i - 1});
            res += n - i - 1;
        }
    }
    sort(all(v), cmp);
    ll l = 0;
    for (i = 0; i < n; i++)
    {
        if (v.size() > i)
        {
            res += v[l].F;
            res -= v[l].S;
            cout << res << " ";
        }
        else
            cout << res << " ";
        l++;
    }
    cout << "\n";
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