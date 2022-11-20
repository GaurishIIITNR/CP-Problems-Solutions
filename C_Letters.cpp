/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 25-02-2022**** //
                            // ******TIME:14:17:41****** //
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
    ll i, j, k, sm = 0;
    ll a, b;
    cin >> a >> b;
    vec(ll, v);
    // vec(ll, inp);
    while (a--)
    {
        ll d;
        cin >> d;
        sm += d;
        // inp.pb(d);
        v.pb(sm);
    }
    while (b--)
    {
        ll k;
        cin >> k;
        if (k <= v[0])
            cout << 1 << " " << k << "\n";
        else
        {
            ll low = 0;
            ll high = v.size() - 1;
            ll mid;
            bool flag = 1;
            while (low <= high)
            {
                mid = (low + high) / 2;
                if (v[mid] >= k && v[mid - 1] < k)
                {
                    cout << (mid + 1) << " " << k - v[mid - 1] << "\n";
                    flag = 0;
                    break;
                }
                else if (v[mid] < k)
                {
                    low = mid + 1;
                }
                else
                    high = mid - 1;
            }
            if (flag)
            {
                cout << low << " " << k - v[high] << "\n";
            }
        }
        // foi (i, 0, v.size(), 1)
        // {
        //     if (k <= v[i])
        //     {
        //        if(i==0)
        //         cout << i+1<<" "<<k<<"\n";
        //         else
        //         cout << i+1<<" "<<k-v[i-1]<<"\n";
        //         break;
        //     }
        // }
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
    // cin >> t;

    while (t--)
    {
        gaurish();
    }
}
