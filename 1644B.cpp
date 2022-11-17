/*
========================================================================================
                               // ****  ***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 22-02-2022**** //
                            // ******TIME:20:16:40****** //
========================================================================================
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll a;
    cin >> a;
    ll i, j, k;
    vec(ll, v);
    foi(i, 1, a + 1, 1)
    {
        foi(j, i, a + i, 1)
        {
            if (j > a)
                v.pb(j - a);
            else
                v.pb(j);
            if (j == a + i - 1)
            {
                foi(k, 2, a, 1)
                {
                    if (v[k] == v[k - 1] + v[k - 2])
                        swap(v[k], v[k - 1]);
                }
                foi(k, 0, a, 1)
                        cout
                    << v[k] << " ";
                v.clear();
            }
        }
        cout << "\n";
    }

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
        gaurish();
    }
}