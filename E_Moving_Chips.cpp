//🚩HHM🚩
// DATE: 13-05-2022
// TIME:21:15:55

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

bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return abs(p1.first - p2.first) <= abs(p1.first - p2.first);
}

void hhm()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (i = 0; i < 2; i++)
        for (j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            if (c == '*')
                v.pb({i, j});
        }
    sort(all(v), comp);
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
    // if (v.size() == 1)
    // {
    //     cout << 0 << "\n";
    //     return;
    // }
    ll cnt = 0;
    for (i = 1; i < n; i++)
        cnt += min(abs(v[i].first - v[i - 1].first) + 1, abs(v[i].second - v[i - 1].second) + 1);
    cout << cnt << "\n";
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
