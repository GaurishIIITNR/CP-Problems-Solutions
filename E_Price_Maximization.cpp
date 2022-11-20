//🚩HHM🚩
// DATE: 08-06-2022
// TIME:12:36:01

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
    cin >> n >> k;
    ll sm = 0;
    mpp(ll, ll, mp);
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        mp[d % k]++;
        sm += d;
    }
    ll wested = 0, res = 0;
    for (auto x : mp)
    {
        if (x.first == 0 || (k % 2 == 0 && x.first == k / 2))
        {
            mp[x.first] = (x.second % 2);
            res += x.second / 2;
        }
        else
        {
            ll mn = min(mp[x.first], mp[k - x.first]);
            mp[x.first] -= mn;
            mp[k - x.first] -= mn;
            res += mn;
        }
    }

    // ll sm1 = 0;
    // for (auto x : mp)
    // {
    //     if (x.first == 0 && x.second > 0)
    //         sm += k;
    //     else
    //         sm += x.first * x.second;
    // }
    // ll rem = sm1 % k;
    cout << res<< "\n";
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
