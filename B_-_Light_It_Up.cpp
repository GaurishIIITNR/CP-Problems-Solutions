//🚩HHM🚩
// DATE: 18-06-2022
// TIME:16:37:55

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define debv(v)           \
    cout << #v << ": ";   \
    for (auto x : v)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
//#define     mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void hhm()
{
    ll i, j, k;
    ll n;
    cin >> n >> k;
    map<ll, bool> mp;
    for (i = 0; i < k; i++)
    {
        ll d;
        cin >> d;
        mp[d - 1] = 1;
    }
    vector<pair<ll, ll>> vp1, vp2;
    for (i = 0; i < n; i++)
    {
        ll d1, d2;
        cin >> d1 >> d2;
        if (mp[i] == 1)
            vp1.pb({d1, d2});
        else
            vp2.pb({d1, d2});
    }
    // for(auto x:vp1)cout << x.first << " " << x.second << endl<< endl;
    //  for(auto x:vp2)cout << x.first << " " << x.second << endl;
    dbl mn = (dbl)INT_MAX;
    for (auto x : vp1)
    {
        dbl mx = (dbl)INT_MIN;
        for (auto y : vp2)
        {
            dbl dis = ((x.first - y.first) * (x.first - y.first)) + ((x.second - y.second) * (x.second - y.second));
            mx = max(mx, sqrt(dis));
        }
        mn = min(mx, mn);
    }
    printf("%.15f", mn);
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;

    while (t--)
    {
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
