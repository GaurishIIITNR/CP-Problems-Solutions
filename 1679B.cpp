//HHM
// DATE: 14-05-2022
// TIME:15:34:34

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
    ll n, q;
    cin >> n >> q;
    vec(ll, v)(n);
    ll sm = 0;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        sm += v[i];
    }
    ll ch = 0, l = 0;
    mpp(ll, ll, mp);
    while (q--)
    {
        ll d;
        cin >> d;

        if (d == 1)
        {
            ll x, y;
            cin >> x >> y;
            if (ch == 1)
            {
                if (mp[x - 1] == 0)
                {
                    sm = sm - l + y;
                    mp[x - 1] = y;
                }
                else
                {
                    sm = sm - mp[x - 1] + y;
                    mp[x - 1] = y;
                }
            }
            else
            {
                sm = sm - v[x - 1] + y;
                v[x - 1] = y;
            }
            cout << sm << "\n";
        }
        else
        {
            ll x;
            cin >> x;
            sm = n * x;
            ch = 1;
            l = x;
            mp.clear();
            cout << sm << "\n";
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin>>t;

    while (t--)
    {
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif