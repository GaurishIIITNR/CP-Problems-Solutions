//🚩HHM🚩
// DATE: 15-06-2022
// TIME:22:50:33

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

void hhm()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v, v1;
    if (n == 1)
    {
        cout << 1 << "\n"
             << 1 << "\n";
        return;
    }
    for (i = 1; i <= n; i++)
    {
        v.pb(i);
        v1.pb(i);
    }
    if (n % 2 == 0 && power(2, log2(n)) == n)
    {
        reverse(v1.begin(), v1.begin() + n - 2);
        swap(v1[n - 1], v1[n - 2]);
    }
    else if (n % 2 == 0 && power(2, log2(n + 2)) == n + 2)
        reverse(v1.begin(), v1.begin() + n - 2);
    else
    {
        cout << -1 << "\n";
        return;
    }
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
    for (auto x : v1)
        cout << x << " ";
    cout << "\n";
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
