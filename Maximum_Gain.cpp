// HHM
//  DATE: 10-07-2022
// TIME:10:56:53

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
    ll n, m;
    cin >> n;
    map<ll, ll> mp, mpr, mp1, mpr1;
    vector<ll> v, v1;
    ll sm = 0;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        sm += d;
        v.pb(d);
        mp[i + 1] = sm;
    }
    sm = 0;
    ll c = 1;
    for (i = n - 1; i >= 0; i--)
    {
        sm += v[i];
        mpr[c] = sm;
        c++;
    }
    cin >> m;
    sm = 0;
    for (i = 0; i < m; i++)
    {
        ll d;
        cin >> d;
        sm += d;
        v1.pb(d);
        mp1[i + 1] = sm;
    }
    sm = 0, c = 1;
    for (i = m - 1; i >= 0; i--)
    {
        sm += v1[i];
        mpr1[c] = sm;
        c++;
    }
    cin >> k;
    // for (auto x : mp)
    //     cout << x.F << " " << x.S << "\n";
    // cout << " *********\n";
    // for (auto x : mpr)
    //     cout << x.F << " " << x.S << "\n";
    // cout << " *********\n";
    // for (auto x : mp1)
    //     cout << x.F << " " << x.S << "\n";
    // cout << " *********\n";
    // for (auto x : mpr1)
    //     cout << x.F << " " << x.S << "\n";
    // cout << " *********\n";
    ll mx = 0;
    for (i = 0; i <= n; i++)
    {
        // deb(i);
        if (k - i > m)
            continue;
        ll res = 0, res1 = 0;
        for (j = 0; j <= i; j++)
        {
            ll tmp = 0;
            tmp = mp[j] + mpr[i - j];
            // deb(tmp);
            res = max(res, tmp);
        }
        // deb(res);
        for (j = 0; j <= k - i; j++)
        {
            ll tmp1 = 0;
            tmp1 = mp1[j] + mpr1[k - i - j];
            // deb(tmp1);
            res1 = max(res1, tmp1);
        }
        // deb(res1);
        mx = max(mx, res1 + res);
    }
    cout << mx << "\n";
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
    ll tt = 1;
    while (t--)
    {
        cout << "Case #" << tt << ": ";
        HHM();
        tt++;
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
