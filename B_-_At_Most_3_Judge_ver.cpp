//🚩HHM🚩
// DATE: 14-05-2022
// TIME:17:34:54

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
    ll n, w;
    cin >> n >> w;
    vec(ll, v);
    ll cnt = 0;
    st(ll, s);
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        if (d < w)
        {
            cnt++;
            s.insert(d);
            v.pb(d);
        }
        if (d == w)
        {
            cnt++;
            s.insert(d);
        }
    }
    if (cnt == 0)
    {
        cout << 0 << "\n";
        return;
    }
    // debv(v);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] <= w)
                s.insert(v[i] + v[j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (v[i] + v[j] + v[k] <= w)
                    s.insert(v[i] + v[j] + v[k]);
            }
        }
    }
    cout << s.size() << "\n";
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
