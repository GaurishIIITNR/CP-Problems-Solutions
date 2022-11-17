//HHM
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

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        ll n;
        cin >> n;
        vector<ll> b(n), c(n);
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        for (ll i = 0; i < n; i++)
            cin >> c[i];
        ll tmp = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
             if (c[i] != 0)
            {
                tmp = (b[i] - c[i]);
                break;
            }
        }
        bool f = 0;
        for (ll i = 0; i < n; i++)
        {
            if (b[i] - c[i] < 0)
            {
                cout << "NO\n";
                f = 1;
                break;
            }
            if (c[i] == 0 && (b[i] - c[i]) > tmp)
            {
                cout << "NO\n";
                f = 1;
                break;
            }
            if (c[i] != 0 && b[i] - c[i] != tmp)
            {
                cout << "NO\n";
                f = 1;
                break;
            }
        }
        if (!f)
            cout << "YES\n";
    }
}