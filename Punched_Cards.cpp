// DATE: 02-04-2022
// TIME:11:35:09
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
    ll r, c;
    cin >> r >> c;
    foi(i, 0, (2 * r) + 1, 1)
    {
        foi(j, 0, (2 * c) + 1, 1)
        {
            if ((i == 0 && (j == 0 || j == 1)) || (i == 1 && (j == 0 || j == 1)))
                cout << ".";
            else if (i % 2)
            {
                if (j % 2)
                    cout << ".";
                else
                    cout << "|";
            }
            else
            {
                if (j % 2)
                    cout << "-";
                else
                    cout << "+";
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
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ":\n";
        gaurish();
    }
}
