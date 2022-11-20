    //////////////////////////////////////
   //   🚩HHM🚩                      ///
  // DATE: 18-06-2022               ///
 // TIME:18:14:06                 ///
///////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define debv(v)           \
    cout << #v << ": ";   \
    for (auto x : v)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
//#define     mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void hhm()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<vector<int>> intervals, ans;
    for (int i = 0; i < n; i++)
    {
        ll d, d1;
        cin >> d >> d1;
        vector<int> r;
        r.pb(d);
        r.pb(d1);
        intervals.pb(r);
    }
    sort(intervals.begin(), intervals.end());
    int mini = intervals[0][0], maxi = intervals[0][1];
    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i][0] > maxi)
        {
            ans.push_back({mini, maxi});
            mini = intervals[i][0];
            maxi = intervals[i][1];
        }
        else
        {
            if (intervals[i][1] > maxi)
            {
                maxi = intervals[i][1];
            }
        }
    }
    ans.push_back({mini, maxi});
    for (auto x : ans)
        cout << x[0] << " " << x[1] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;

    while (t--)
    {
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
