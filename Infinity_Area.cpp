//=======================================================//
// HAR HAR MAHADEV
// DATE: 24-04-2022
// TIME:04:59:06
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

    for (int tc = 1; tc <= t; tc++)
    {
        cout << "Case #" << tc << ": ";
        ll a, b, c;
        cin >> a >> b >> c;
        dbl res = Pi * a * a;
        while (1)
        {
            dbl a2 = Pi * a * a * b * b;
            dbl a3 = Pi * ((a * b) / c) * ((a * b) / c);
            res += a2 + a3;
           
            if (((a * b) / c) == 0 || a3 == 0.0)
                break;
            else
                a = ((a * b) / c);
        }
        cout << setprecision(10) << fixed;
        cout << res << "\n";
    }
}
