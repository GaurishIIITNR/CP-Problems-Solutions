//🚩HHM🚩
// DATE: 06-06-2022
// TIME:20:39:41

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
    mpp(ll, ll, mp);
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        mp[d]++;
    }
    vp(ll, bool, v);
    for (auto x : mp)
        v.pb({x.first, 0});
    sort(all(v));
    // for(auto x:v)cout<<x.first<<endl;
      ll res = 0;
    for (i = 0; i<v.size()-2; i++)
    {
        if ((v[i + 2].first - v[i].first) <= 2)
        res++;      
    }
  
    for (auto x : v)
    {
        if (x.second == 1)
           res += mp[x.first];
    }
    cout << res << "\n";
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
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
