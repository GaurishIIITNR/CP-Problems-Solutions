//=======================================================//
// HAR HAR MAHADEV
// DATE: 27-04-2022
// TIME:22:47:24
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        ll c = 0;
        if (a == 1)
            cout << 0 << "\n";
        else if ((ll)sqrt(a) * (ll)sqrt(a) == a && (ll)sqrt(a) % 2 == 0)
            cout << 1 << "\n";
        else if (a % 2)
            cout << 1 << "\n";
        else
        {
            while (a > 0)
            {
                if (a % 2 == 0)
                {
                    a /= 2;
                    c++;
                }
                else
                {
                    if (c % 2 == 0)
                    {
                        cout << 2 << "\n";
                        break;
                    }
                    else
                    {
                        cout << -1 << "\n";
                        break;
                    }
                }
            }
        }
    }
}