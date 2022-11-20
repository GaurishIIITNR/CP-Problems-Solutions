//🚩HHM🚩
// DATE: 24-06-2022
// TIME:15:53:49

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
// set<ll>st;
// map<ll,ll>mp;
// string s;cin>>s;

void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    vin(v, n);
    ll tmp = v[0];
    vector<pair<ll, ll>> vp(n, {0, 0});
    for (i = 0; i < n; i++)
    {
        if (!i)
            vp[i].F = 0;
        else
            vp[i].F = tmp;
        tmp = __gcd(tmp, v[i]);
    }
    ll tmp1 = v[n - 1];
    for (i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
            vp[i].S = 0;
        else
            vp[i].S = tmp1;
        tmp1 = __gcd(tmp1, v[i]);
    }
    ll cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (i == 0 && vp[i].S != 1)
            cnt++;
        else if (i != 0 && i != n - 1)
        {
            if (__gcd(vp[i].S, vp[i].F) != 1)
                cnt++;
        }
        else if (i == n - 1)
        {
            if (vp[i].F != 1)
                cnt++;
        }
    }
    // cout << "_______________________"
    //<< "\n";
    // for (auto x : vp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    // cout << "_______________________"
    //  << "\n";
    cout << cnt << "\n";
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
