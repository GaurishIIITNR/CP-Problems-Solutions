// HHM
//  DATE: 03-09-2022
// TIME:12:55:22

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
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        mp[d % k]++;
    }
    ll cnt = 0;
    for (auto x : mp)
    {

        if ((x.F == 0) || (x.F == (k / 2) && (k % 2 == 0)))
        {
            mp[x.F] = 0;
            cnt++;
            continue;
        }
        if (x.S > 0 && mp[k - x.F] > 0)
        {
            ll c = x.F, pre = k - x.F;
            if (mp[c] >= mp[pre])
            {
                mp[c] = mp[c] - mp[pre] - 1;
                mp[pre] = 0;
                cnt++;
            }
            else
            {
                mp[pre] = mp[pre] - mp[c] - 1;
                mp[c] = 0;
                cnt++;
            }
        }
    }
    for (auto x : mp)
    {
        if (x.S > 0)
            cnt += x.S;
    }
    cout << cnt << "\n";
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