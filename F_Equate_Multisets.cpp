// HHM
//  DATE: 10-07-2022
// TIME:21:08:33

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
// bool check(ll a, ll b)
// {
//     if()
//     ll d = max(a, b) / min(a, b);
//     if (d == power(2, (ll)log2(d)))
//         return 1;
//     return 0;
// }
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v, v1;
    map<ll, ll> mp;
    ll mn = INT_MAX, mx = INT_MIN;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
        mp[d]++;
        mx = max(mx, d);
        mn = min(mn, d);
    }
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v1.pb(d);
    }
    // sort(all(v1));
    // reverse(all(v1));
    for (auto x : v1)
    {
        bool flag = 0;
        ll x1 = x;
        while (x >= mn)
        {
            if (mp[x] > 0)
            {
                flag = 1;
                mp[x]--;
                break;
            }
            x /= 2;
        }
        if (flag)
            continue;
        while (x1 <= mx)
        {
            if (mp[x1] > 0)
            {
                flag = 1;
                mp[x1]--;
                break;
            }
            x1 *= 2;
        }
        if (flag)
            continue;
        cout << x1 << "NO\n";
        return;
    }
    cout << "YES\n";
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
