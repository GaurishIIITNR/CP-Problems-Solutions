// DATE: 31-03-2022
// TIME:20:55:22
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
    ll n;
    cin >> n;
    ll t = -1, o = -1;
    vec(ll, v);
    ll mult = 1;
    foi(i, 0, n, 1)
    {
        ll d;
        cin >> d;
        v.pb(d);
        mult *= d;
    }
    if (mult > 0)
        cout << 0 << " " << 0 << "\n";
    else
    {
        ll cntu = 0, cntl = 0;
        foi(i, 0, v.size(), 1)
        {
            if ((mult / v[i]) > (mult / v[n - i - 1]))
            {
                v.erase(v.end() - 1);
                cntl++;
                if ((mult / v[i]) > 0)
                {
                    cout < < cntu < < " " << cntl << "\n";
                    return;
                }
                i--;
            }
            else if()
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

    while (t--)
    {
        gaurish();
    }
}
