//🚩HHM🚩
// DATE: 10-06-2022
// TIME:18:49:57

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
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}

bool check(ll n)
{
    ll d = (ll)log2(n);
    if (power(2, d) == n)
        return 1;
    return 0;
}

void hhm()
{
    ll i, j, k;
    ll a, b;
    cin >> a >> b;
    ll mx = max(a, b);
    ll mn = min(a, b);
    ll mx1 = mx;
    ll mn1 = mn;
    ll res = 0, res1 = 0;
    if (a == 0 && b == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if (a == 0 || b == 0)
    {
        cout << -1 << "\n";
        return;
    }
    res += mn - 1;
    mx = mx - res;
    mn = 1;
    while (1)
    {
        // deb2(mn, mx);
        // deb(res);
        if (mn == mx)
        {
            res += mn;
            break;
        }
        else if (mn == 1 && mx == 2)
        {
            res += 3;
            break;
        }
        else
        {
            res += (ll)log2(mx);
            mn = power(2, (ll)log2(mx));
            // deb2(mn, mx);
            // deb(res);
            res += mn - 1;
            mx = mx - mn + 1;
            mn = 1;
        }
    }

    if (mx1 % mn1 == 0 && check(mx1 / mn1))
    {
        res1 += log2(mx1 / mn1);
        res1 += mx1;
    }
    else if ((mx1 + 1) % mn1 == 0 && check((mx1 + 1) / mn1))
    {
        res1 += log2((mx1 + 1) / mn1);
        res1 += mx1 + 2;
    }
    else if ((mx1 - 1) % mn1 == 0 && check((mx1 - 1) / mn1))
    {
        res1 += log2((mx1 - 1) / mn1);
        res1 += mx1 + 1;
    }
    if (res1 == 0)
        cout << res << "\n";
    else
        cout << min(res, res1) << "\n";
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
