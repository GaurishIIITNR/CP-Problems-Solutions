// DATE: 25-03-2022
// TIME:18:49:05
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
    vec(ll, v)(4);
    foi(i, 0, 4, 1)
            cin >>
        v[i];
    sort(all(v));
    ll a, b;
    if (v[2] + 1 == v[3])
    {
        a = 1;
        b = v[3] - a;
        if ((a >= 1 && a <= 10000) && (b >= 1 && b <= 10000))
        {
            if (((a - b) == v[0] && (a / b) == v[1]) || ((a - b) == v[1] && (a / b) == v[0]))
            {
                cout << a << " " << b << "\n";
                return;
            }
            else
            {
                swap(a, b);
                if (((a - b) == v[0] && (a / b) == v[1]) || ((a - b) == v[1] && (a / b) == v[0]))
                {
                    cout << a << " " << b << "\n";
                    return;
                }
            }
        }
    }
    ll d = (v[2] * v[2]) - (4 * v[3]);
    if ((ll)sqrt(d) * (ll)sqrt(d) == d)
        if (d >= 0 && (v[2] + (ll)sqrt(d)) % 2 == 0 && (v[2] - (ll)sqrt(d)) % 2 == 0)
        {
            a = (v[2] + (ll)sqrt(d)) / 2;
            b = (v[2] - (ll)sqrt(d)) / 2;
            if ((a >= 1 && a <= 10000) && (b >= 1 && b <= 10000))
            {
                if (((a - b) == v[0] && (a / b) == v[1]) || ((a - b) == v[1] && (a / b) == v[0]))
                {
                    cout << a << " " << b << "\n";
                    return;
                }
                else
                {
                    swap(a, b);
                    if (((a - b) == v[0] && (a / b) == v[1]) || ((a - b) == v[1] && (a / b) == v[0]))
                    {
                        cout << a << " " << b << "\n";
                        return;
                    }
                }
            }
        }
    cout << -1 << " " << -1 << "\n";
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
