/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 28-02-2022**** //
                            // ******TIME:09:15:59****** //
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

void gaurish(vector<ll> v, ll target)
{
   // ll i, j, k;
    // predicate v[x]<=target // ttttttfff aim--> last t;
    ll low = 0, high = v.size() - 1;
    while (low < high)
    {
        ll mid = low + (high - low + 1) / 2;
        if (v[mid] <= target)
            low = mid;
        else
            high = mid - 1;
    }
    if (v[low]<=target)
        cout << low+1 << "\n";
    else
        cout << 0 << "\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cin >> t;
    
    {
        ll a, b, i, j, k;
        cin >> a >> b;
        vector<ll> v(a);
        foi(i, 0, a, 1)
                cin >>
            v[i];
        while (b--)
        {
            ll d;
            cin >> d;
            gaurish(v, d);
        }
    }
}
