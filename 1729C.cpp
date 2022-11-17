// HHM // DATE: 12-09-2022 // TIME:20:53:02
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
bool cmp(pair<char, ll> &p1, pair<char, ll> &p2)
{
    if (p1.F == p2.F)
        return p1.S < p2.S;
    return p1.F < p2.F;
}
bool cmp1(pair<char, ll> &p1, pair<char, ll> &p2)
{
    if (p1.F == p2.F)
        return p1.S > p2.S;
    return p1.F < p2.F;
}
// set<ll>st;
// map<ll,ll>mp;
// string s;cin>>s;
// vector<ll>v(n,0);
void HHM()
{
    ll i, j, k;
    // ll n;
    // cin >> n;
    string s;
    cin >> s;
    vector<pair<char, ll>> v;
    cout << abs(s[0] - s[s.length() - 1]) << " ";
    for (i = 0; i < s.length(); i++)
    {
        v.pb({s[i], i});
    }
    if (s[0] < s[s.length() - 1])
        sort(all(v), cmp);
    else
        sort(all(v), cmp1);
    bool flag = 0;
    vector<ll> res;
    for (i = 0; i < v.size(); i++)
    {
        if ((v[i].S == 0 || v[i].S == s.length() - 1) && flag == 0)
        {
            flag = 1;
            res.pb(v[i].S + 1);
            continue;
        }
        if (flag && (v[i].S == 0 || v[i].S == s.length() - 1))
        {
            res.pb(v[i].S + 1);
            break;
        }
        else if (flag)
        {
            res.pb(v[i].S + 1);
        }
    }
    // vout(res);
    cout << res.size() << "\n";
    if (res[0] == 1)
    {
        vout(res);
    }
    else
    {
        reverse(all(res));
        vout(res);
    }
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