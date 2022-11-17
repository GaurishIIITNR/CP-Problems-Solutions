// HHM
//  DATE: 21-07-2022
// TIME:20:26:20

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
    // map<ll,ll>mp;
    // string s;cin>>s;
    vector<ll> v(n, 0);
    vin(v, n);

    vector<ll> res(n, 0), res1(n, 0);
    res[0] = 0;
    ll sm = 0;
    for (i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            sm += v[i - 1] - v[i];
            res[i] = sm;
        }
        else
            res[i] = sm;
    }
    res1[n - 1] = 0;
    sm = 0;
    for (i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            sm += v[i + 1] - v[i];
            res1[i] = sm;
        }
        else
            res1[i] = sm;
    }
    while (k--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b)
        {
            cout << res1[b - 1] - res1[a - 1] << "\n";
        }
        else
        {
            cout << res[b - 1] - res[a - 1] << "\n";
        }
    }
    // vout(res);
    // vout(res1);
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