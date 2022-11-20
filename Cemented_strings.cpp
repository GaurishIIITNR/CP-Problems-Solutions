/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 28-02-2022**** //
                            // ******TIME:23:58:51****** //
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

void gaurish()
{
    ll i, j, k;
    ll a;
    cin >> a;
    ll total_cost = a * (a + 1) / 2;
    ll cnt = 0;
    string s;
    cin >> s;
    vector<ll> v(26, 0);
    foi(i, 0, s.length(), 1)
    {
        for (char j = s[i]; j >= 'a'; j--)
          cnt+=v[(int)(j-'a')];//cout<<v[(int)(j-'a')]<<"****"<<cnt<<"$$$$"<<"\n";

          
        v[(s[i] - 'a')]++;
    }
    cout << (total_cost - cnt) << "\n";

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
/*  string dup = s;
        if (i > 0)
        {
            sort(dup.begin(), dup.begin() + i - 1);
            // predicate s[i]>=target ttttffff aim-->finding last t;
            ll low = 0, high = i - 1;
            while (low < high)
            {
                ll mid = low + (high - low + 1) / 2;
                if (dup[mid] <= dup[i])
                    low = mid;
                else
                    high = mid - 1;
            }
            if (dup[low] <= dup[i])
                cnt += (low + 1);
        }*/
