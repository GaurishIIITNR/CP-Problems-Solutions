//🚩HHM🚩
// DATE: 10-06-2022
// TIME:22:07:05

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
    ll n, m;
    cin >> n >> m >> k;
    string a, b, s = "";
    cin >> a >> b;
    ll cnt = 0;
    sort(all(a));
    sort(all(b));
    ll cnta = 0, cntb = 0;
    ll ai = 0, bi = 0;
    while (ai < a.length() && bi < b.length())
    {
        if (a[ai] <= b[bi] && cnta < k)
        {
            s += a[ai];
            ai++;
            cnta++;
            cntb = 0;
        }
        else if (cntb < k)
        {
            s += b[bi];
            bi++;
            cntb++;
            cnta = 0;
        }
        else
        {
            s += a[ai];
            ai++;
            cnta++;
            cntb = 0;
        }
    }
    cout << s << "\n";
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
