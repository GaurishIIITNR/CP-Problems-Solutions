// HHM // DATE: 11-09-2022 // TIME:23:55:13
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define dbl double
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
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
// vector<ll>v(n,0);
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v;
    vector<pair<ll, ll>> odd, even;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
    }
    vector<ll> res(n, 0);
    string s;
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '0')
            even.pb({v[i], i});
        else
            odd.pb({v[i], i});
    }
    ll l = 1;
    sort(all(odd));
    sort(all(even));
    for (auto x : even)
    {
        res[x.S] = l;
        l++;
    }
    for (auto x : odd)
    {
        res[x.S] = l;
        l++;
    }
    vout(res);
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" << t << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

//  ~ GaurishOjha