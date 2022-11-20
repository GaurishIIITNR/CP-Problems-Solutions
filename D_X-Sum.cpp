//🚩HHM🚩
// DATE: 10-05-2022
// TIME:20:58:18

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
    ll n, m;
    cin >> n >> m;
    ll v[n][m];
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            cin >> v[i][j];
    // for (ll i = 0; i < n; i++)
    // {
    //     for (ll j = 0; j < m; j++)
    //        { cout << v[i][j] << " ";}
    //     cout << "\n";
    // }
    ll mx = 0;
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
        {
            ll sm = 0;
            ll di = i, dj = j;
            for (ll k = min(i, j); k >= 0; k--)
            {
                sm += v[di][dj];
                dj--;
                di--;
            }
            di = i, dj = j;
            for (ll k = min(i, m - j - 1); k >= 0; k--)
            {
                sm += v[di][dj];
                dj++;
                di--;
            }
            di = i, dj = j;
            for (ll k = min(n - i - 1, j); k >= 0; k--)
            {
                sm += v[di][dj];
                di++;
                dj--;
            }
            di = i, dj = j;
            for (ll k = min(n - i - 1, m - j - 1); k >= 0; k--)
            {
                sm += v[di][dj];
                di++;
                dj++;
            }
            mx = max((sm - 3 * v[i][j]), mx);
        }
    cout << mx << "\n";
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
