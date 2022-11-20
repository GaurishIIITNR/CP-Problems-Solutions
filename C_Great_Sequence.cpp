/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 23-02-2022**** //
                            // ******TIME:16:08:42****** //
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
    ll a, b;
    cin >> a >> b;
    vec(ll, v)(a);
    ll cnt = 0;
    for (ll i = 0; i < a; i++)
        cin >> v[i];
    for (ll i = 0; i < a; i++)
    {
        if (v[i] != -1)
            {
                for (ll j = i + 1; j < a; j++)
                {
                    if (((v[i] * b == v[j] )|| (v[j] * b == v[i]) )&&v[j]!=-1 )
                    {
                        cnt += 2;
                        v[i] = -1;
                        v[j] = -1;
                        //deb(i);
                        //deb(j);
                      //  deb(cnt);
                    }
                }
            }
    }
    cout << (a - cnt) << "\n";

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
