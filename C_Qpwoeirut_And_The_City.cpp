// HHM
//  DATE: 18-07-2022
// TIME:20:54:33

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

    // set<ll>st;
    // map<ll,ll>mp;
    // string s;cin>>s;
    vector<ll> v(n, 0), tmp, tmp1;
    vin(v, n);
    vector<ll> vo, ve, vro, vre;
    if ((n - 2) % 2 == 0)
    {

        ll res1 = 0, res2 = 0;
        for (i = 1; i < n - 1; i += 2)
        {
            ll z;
            if (i % 2 && max(v[i + 1], v[i - 1]) - v[i] >= 0)
                z = max(v[i + 1], v[i - 1]) - v[i] + 1;
            else
                z = 0;
            tmp.pb(z);
            res1 += z;
            vo.pb(res1);
        }
        for (i = 2; i < n - 1; i += 2)
        {
            ll z;
            if (i % 2 == 0 && max(v[i + 1], v[i - 1]) - v[i] >= 0)
                z = max(v[i + 1], v[i - 1]) - v[i] + 1;
            else
                z = 0;
            tmp1.pb(z);
            res2 += z;
            ve.pb(res2);
        }
        ll z = 0;
        for (i = tmp.size() - 1; i >= 0; i--)
        {
            z += tmp[i];
            vro.pb(z);
        }
        z = 0;
        for (i = tmp1.size() - 1; i >= 0; i--)
        {
            z += tmp1[i];
            vre.pb(z);
        }
        ll res = min(res1, res2);
        ll tt = (n - 2) / 2;
        for (i = 1; i < tt; i++)
        {
            ll tmp = (vo[i - 1] + vre[tt - i - 1]);
            res = min(res, tmp);
        }
        // for (i = 1; i <tt; i++)
        // {
        //     ll tmp = (ve[i-1] + vro[tt-i-1]);
        //     deb2(i-1,tt-i-1);
        //     deb2(ve[i-1],vro[tt-i-1]);
        //     res = min(res, tmp);
        //     deb(res);
        // }
        cout << res << "\n";
        // // res = min((vo[(2 * i) - 1] + res2 - ve[(2 * i) + 2]),res);
    }
    else
    {
        ll res1 = 0;
        for (i = 1; i < n - 1; i += 2)
        {
            if (max(v[i + 1], v[i - 1]) - v[i] >= 0)
                res1 += max(v[i + 1], v[i - 1]) - v[i] + 1;
            else
                res1 += 0;
        }
        cout << res1 << "\n";
    }
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
