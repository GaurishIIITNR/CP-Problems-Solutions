//=======================================================//
// HAR HAR MAHADEV
// DATE: 22-04-2022
// TIME:01:56:51
//=======================================================//
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
    ll n, m;
    cin >> n >> m;
    char grid[n][m];
    char res[n][m];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            res[i][j] = '.';
        }

    for (j = 0; j < m; j++)
    {
        ll stcnt = 0;
        for (i = 0; i < n; i++)
        {
            if (grid[i][j] == 'o')
            {
                res[i][j] = 'o';
                for (ll k = i - 1; stcnt--; k--)
                    res[k][j] = '*';
                stcnt = 0;
            }
            else if (grid[i][j] == '*')
                stcnt++;
        }
        for (ll k = i - 1; stcnt--; k--)
            res[k][j] = '*';
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << res[i][j];
        cout << "\n";
    }
    cout << "\n";
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
