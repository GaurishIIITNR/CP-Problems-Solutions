//HHM
// DATE: 10-06-2022
// TIME:22:28:36

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
    vec(ll, v)(n), res, v1;
    for (i = 0; i < n; i++)
        cin >> v[i];
    if (n == 1)
    {
        cout << -1 << "\n";
        return;
    }
    v1 = v;
    sort(all(v1));
    for (i = 0; i < n - 1; i++)
    {
        if (v1[i] != v[i])
            res.pb(v1[i]);
        else
        {
            swap(v1[i], v1[i + 1]);
            res.pb(v1[i]);
        }
    }
    res.pb(v1[n - 1]);
    if (res[n - 1] == v[n - 1])
        swap(res[n - 1], res[n - 2]);
    // deb2(mni,mn);

    for (auto x : res)
        cout << x << " ";
    cout << "\n";
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