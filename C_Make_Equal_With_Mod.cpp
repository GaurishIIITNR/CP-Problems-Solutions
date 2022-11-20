/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 24-03-2022**** //
                            // ******TIME:21:40:21****** //
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
    vec(ll, v)(n);
    mpp(ll, bool, mep);
    foi(i, 0, n, 1)
    {
        cin >> v[i];
        mep[v[i]] = 1;
    }
    if (mep[0] > 0 && mep[1] > 0)
    {
        cout << "NO\n";
        return;
    }
    sort(all(v));
    ll mn, d;
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] != 1)
        {
            mn = v[i] - v[0];
            break;
        }
    }
    d = mn;
    for (i = 0; i < n - 1; i++)
    {
        if (v[0] != 1)
        {
            cout << "YES\n";
            return;
        }
        else
        {

            if ((v[i + 1] - v[i])!=0)
                d = (v[i + 1] - v[i]);
            mn = min(mn, d);
            if ((d % mn) == 0)
                continue;
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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
