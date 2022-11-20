//🚩HHM🚩
// DATE: 11-05-2022
// TIME:07:16:44

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
    ll i, j;
    ll n, q;
    cin >> n >> q;

    vec(ll, v)(n);
    ll sm = 0;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v[i] = d;
        sm += d;
    }

    sort(all(v));
    reverse(all(v));
    vec(ll, smv);
    ll sm1 = 0;
    for (auto x : v)
    {
        sm1 += x;
        smv.pb(sm1);
    }
    while (q--)
    {

        ll d;
        cin >> d;
        ll cnt = 0;
        if (d > sm)
        {
            cout << -1 << "\n";
            continue;
        }
        ll low = 0, high = n - 1;
        while (low < high)
        {
            ll mid = low + (high - low) / 2;
            if (smv[mid] >= d)
                high = mid;
            else
                low = mid + 1;
        }
        cout << low + 1 << "\n";
    }

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
