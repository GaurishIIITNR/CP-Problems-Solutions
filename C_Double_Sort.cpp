//🚩HHM🚩
// DATE: 23-05-2022
// TIME:20:42:45

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
    if (p1.first == p2.first)
        return p1.second <= p2.second;
    return p1.first < p2.first;
}
void hhm()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v(n), v1(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n; i++)
        cin >> v1[i];
    vp(ll, ll, m);
    for (i = 0; i < n; i++)
        m.pb({v[i], v1[i]});
    sort(all(m), comp);
    for (i = 0; i < n - 1; i++)
    {
        if (m[i].second > m[i + 1].second)
        {
            cout << -1 << "\n";
            return;
        }
    }
    // for (auto x : m)
    // {
    //     cout << x.first << " " << x.second << "\n";
    // }
    vp(ll, ll, res);
    for (i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
            swap(v1[i], v1[i + 1]);
            res.pb({i + 1, i + 2});
            for (j = i; j > 0; j--)
            {
                if (v[j - 1] > v[j])
                {
                    swap(v[j], v[j - 1]);
                    swap(v1[j], v1[j - 1]);
                    res.pb({j, j + 1});
                }
                else
                    break;
            }
        }
        else if (v[i] == v[i + 1] && v1[i] > v1[i + 1])
        {
            swap(v1[i], v1[i + 1]);
            res.pb({i + 1, i + 2});
            for (j = i; j > 0; j--)
            {
                if (v[j] == v[j - 1] && v1[j - 1] > v1[j])
                {
                    swap(v1[j], v1[j - 1]);
                    res.pb({j, j + 1});
                }
                else
                    break;
            }
        }
    }
    cout << res.size() << "\n";
    for (auto x : res)
        cout << x.first << " " << x.second << "\n";
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
