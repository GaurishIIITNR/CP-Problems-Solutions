/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 13-03-2022**** //
                            // ******TIME:13:56:25****** //
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
#define erase(name, i) name.erase(name.begin() + i)
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    ll q, m;
    cin >> q >> m;
    if (m % 3 == 0)
    {
        cout << "yes"
             << "\n";
        cout << m / 3 << " " << 0 << " " << (q - m / 3) << "\n";
        return;
    }
    if (m % 3 == 1)
    {
        if ((q - (m + 2 / 3) - 2) > -1)
        {
            cout << "yes"
                 << "\n";
            cout << (m + 2) / 3 << " " << 2 << " " << (q - (m + 2 / 3) - 2) << "\n";
            return;
        }
    }
    if (m % 3 == 2 && m < (q - 1) * 3)
    {
        if ((q - (m + 2 / 3) - 1) > -1)
        {
            cout << "yes"
                 << "\n";
            cout << (m + 1) / 3 << " " << 1 << " " << (q - (m + 2 / 3) - 1) << "\n";
            return;
        }
    }
    cout << "no\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll t = 1;
    cin >> t;

    while (t--)
    {
        gaurish();
    }
}
