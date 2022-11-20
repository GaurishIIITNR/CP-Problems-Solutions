//🚩HHM🚩
// DATE: 29-05-2022
// TIME:00:19:07

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
    ll n, cnt = 0;
    cin >> n;
    vector<bool> v(n + 1, 1);
    v[0] = v[1] = 0;
    for (ll i = 2; i <= n; i++)
    {
        if (!v[i])
        {
            continue;
        }
        for (ll j = i * i; j <= n; j += i)
        {
            v[j] = 0;
        }
    }
    for (int i = 3; i <= n; i++)
    {
        if (v[i] && v[i - 2])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
   // cin >> t;
    vec(ll, v)(10000000);

    while (t--)
    {
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
