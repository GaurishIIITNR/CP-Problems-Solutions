//🚩HHM🚩
// DATE: 13-05-2022
// TIME:20:14:51

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
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> v;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'R')
                v.pb({i, j});
        }
    if (v.size() == 0)
    {
        cout << "NO\n";
        return;
    }
    if (v.size() == 1)
    {
        cout << "YES\n";
        return;
    }
    ll mni = INT_MAX, mnj = INT_MAX;
    for (auto x : v)
    {
        mni = min(x.first, mni);
        mnj = min(x.second, mnj);
    }
    for (auto x : v)
    {
        if (x.first == mni && x.second == mnj)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;}

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
