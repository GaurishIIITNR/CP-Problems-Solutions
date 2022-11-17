// HHM
//  DATE: 28-07-2022
// TIME:10:14:42

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
    cin >> n >> m >> k;
    while (k--)
    {
        ll x, y, x1, y1;
        cin >> x >> y >> x1 >> y1;
        ll cnt1 = 0, cnt2 = 0;
        for (i = 1; i < n; i++)
        {
            if (x1 - x < 0)
            {
                if ((n + x1 - x) % i == 0)
                    cnt1++;
            }
            else if (x1 - x == 0)
                cnt1++;
            else
            {
                if ((x1 - x) % i == 0)
                    cnt1++;
            }
        }
        for (i = 1; i < m; i++)
        {
            if (y1 - y < 0)
            {
                if ((m + y1 - y) % i == 0)
                    cnt2++;
            }
            else if (y1 - y == 0)
                cnt2++;
            else
            {
                if ((y1 - y) % i == 0)
                    cnt2++;
            }
        }
        cout << cnt1 * cnt2 << "\n";
    }

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
