// DATE: 02-04-2022
// TIME:12:02:28
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

ll mini(ll a, ll b, ll c)
{
    return min(a, min(b, c));
}

void gaurish()
{
    ll i, j, k;
    ll arr[3][4];
    foi(i, 0, 3, 1)
    {
        foi(j, 0, 4, 1)
        {
            cin >> arr[i][j];
        }
    }
    ll a, b, c, d;
    a = mini(arr[0][0], arr[1][0], arr[2][0]);
    b = mini(arr[0][1], arr[1][1], arr[2][1]);
    c = mini(arr[0][2], arr[1][2], arr[2][2]);
    d = mini(arr[0][3], arr[1][3], arr[2][3]);
    if (a + b + c + d < 1000000)
        cout << "IMPOSSIBLE\n";
    else
    {
        if (a >= 1000000)
            cout << 1000000 << " " << 0 << " " << 0 << " " << 0 << "\n";
        else
        {
            cout << a << " ";
            if (b >= 1000000 - a)
                cout << 1000000 - a << " " << 0 << " " << 0 << "\n";
            else
            {
                cout << b << " ";
                if (c >= 1000000 - a - b)
                    cout << 1000000 - a - b << " " << 0 << "\n";
                else
                {
                    cout << c << " ";
                    if (d >= 1000000 - a - b - c)
                        cout << 1000000 - a - b - c << "\n";
                }
            }
        }
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
        cout << "Case #" << i << ": ";
        gaurish();
    }
}
