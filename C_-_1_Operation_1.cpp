//🚩HHM🚩
// DATE: 18-06-2022
// TIME:17:13:26

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
    ll m, a, d, n;
    cin >> m >> a >> d >> n;
    if (d == 0)
    {
        cout << abs(m - a) << "\n";
        return;
    }
    ll i1 = ((m - a) / d) + 1, i2 = i1 + 1;
    if (i1 > n || i2 > n && )
    {
        cout << abs(m - (a + ((n - 1) * d))) << "\n";
        return;
    }
    // if (i2 > n)
    // {
    //     cout << abs(m - (a + ((n - 1) * d))) << "\n";
    //     return;
    // }
    cout << min(abs(m - (a + ((i1 - 1) * d))), abs(a + ((i2 - 1) * d)) - m) << "\n";

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
