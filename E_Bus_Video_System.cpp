//🚩HHM🚩
// DATE: 09-05-2022
// TIME:19:01:40

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
    cout << "\n"
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
    ll i, j;
    ll n, k;
    cin >> n >> k;
    ll sm = 0;
    ll mx = INT_MIN, mn = INT_MAX; // initializing value;
    while (n--)
    {
        ll d;
        cin >> d;
        sm += d;          // adding number;
        mn = min(sm, mn); // calculating minimum sum;
        mx = max(sm, mx); // calculating maximum sum;
    }
    ll low = 0, high = k; // intilizing range of answers;
    if (mn < 0)
        low = abs(mn);
    if (mx > 0)
        high = k - mx;
    if (high < low)
        cout << 0 << "\n";
    else
        cout << abs(high - low) + 1 << "\n"; // numbers in this range[low,high];
    return;
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
