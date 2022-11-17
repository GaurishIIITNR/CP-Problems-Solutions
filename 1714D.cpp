// HHM
//  DATE: 01-08-2022
// TIME:20:28:46

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
bool cmp(pair<ll, pair<string, ll>> &a, pair<ll, pair<string, ll>> &b)
{
    if (a.S.F.length() == b.S.F.length())
        return a.F >= b.F;
    return a.S.F.length() >= b.S.F.length();
}
void HHM()
{
    ll i, j, k;
    string s;
    cin >> s;
    ll n;
    cin >> n;
    vector<pair<ll, pair<string, ll>>> v;
    for (i = 1; i <= n; i++)
    {
        string r;
        cin >> r;
        v.pb({0, {r, i}});
    }
    // sort(all(v), cmp);
    map<ll, bool> mp;
    vector<pair<ll, ll>> res;
    for (auto &x : v)
    {
        ll cnt = 0;
        for (i = 0; i < s.length(); i++)
        {

            if (i <= s.length() - x.S.F.length() && s.substr(i, x.S.F.length()) == x.S.F)
            {
                cnt++;
                //    deb( s.substr(i, x.F.length()));
                //    deb(x.F);
                for (j = i; j < i + x.S.F.length(); j++)
                {
                    // if (mp[j] == 0)
                    //     flag = 1;
                    mp[j] = 1;
                }
            }
            x.F = cnt;
        }
    }

    for (i = 0; i < s.length(); i++)
    {
        if (mp[i] == 0)
        {
            cout << -1 << "\n";
            return;
        }
    }
    sort(all(v), cmp);
    mp.clear();
    for (auto x : v)
        cout << x.F << " " << x.S.F << " " << x.S.S << "\n";
    cout << "\n";
    cout << endl;

    // for (auto x : v)
    // {
    //     // ll cnt = 0;
    //     bool flag = 0;
    //     for (i = 0; i < s.length(); i++)
    //     {

    //         if (i <= s.length() - x.S.F.length() && s.substr(i, x.S.F.length()) == x.S.F)
    //         {
    //             // cnt++;
    //             //    deb( s.substr(i, x.F.length()));
    //             //    deb(x.F);
    //             for (j = i; j < i + x.S.F.length(); j++)
    //             {
    //                 if (mp[j] == 0)
    //                     flag = 1;
    //                 mp[j] = 1;
    //             }
    //         }
    //         // x.F = cnt;
    //         if (flag)
    //         {
    //             res.pb({x.S.S, i + 1});
    //         }
    //     }
    // }
    // cout << res.size() << "\n";
    // for (auto x : res)
    // {
    //     cout << x.F << " " << x.S << "\n";
    // }
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
