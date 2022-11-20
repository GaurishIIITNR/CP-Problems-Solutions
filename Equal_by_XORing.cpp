//🚩HHM🚩
// DATE: 19-06-2022
// TIME:20:17:58

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

ll pwr(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
void hhm()
{
    ll i, j, k;
    ll a, b, n;
    cin >> a >> b >> n;
    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }
    vec(ll, va), vb, vi;
    for (i = 0; i < 32; i++)
    {
        va.pb((a % 2));
        a /= 2;
    }
    for (i = 0; i < 32; i++)
    {
        vb.pb(b % 2);
        b /= 2;
    }
    // debv(va);
    // debv(vb);
    for (i = 0; i < 32; i++)
    {
        if (va[i] != vb[i])
        {
            if (pwr(2, i) >= n)
            {
                cout << -1 << "\n";
                return;
            }
            vi.pb(pwr(2, i));
        }
        else
            vi.pb(0);
    }
    ll cnt = 0, sm = 0;
    for (auto x : vi)
    {
        sm += x;
        if (sm >= n)
        {
            sm = x;
            cnt++;
        }
        // deb(x);
    }
    if (sm != 0)
        cnt++;
    cout << cnt << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
