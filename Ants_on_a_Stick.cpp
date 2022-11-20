//🚩HHM🚩
// DATE: 22-05-2022
// TIME:17:30:13

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
bool comp(pair<pair<ll, ll>, ll> p1, pair<pair<ll, ll>, ll> p2)
{
    if (p1.first.first == p2.first.first)
        return p1.first.second < p2.first.second;
    return p1.first.first < p2.first.first;
}
void hhm()
{
    ll i, j, k;
    ll n, l;
    cin >> n >> l;
    vector<pair<pair<ll, ll>, ll>> v;
    for (i = 1; i <= n; i++)
    {
        ll d1, d2;
        cin >> d1 >> d2;
        v.pb({{d1, d2}, i});
    }
    vec(ll, res);
    while (res.size() < n)
    {
        for (i = 0; i < v.size(); i++)
        {
            if (v[i].first.second == 0)
            {
                if (v[i].first.first == 0)
                {
                    res.pb(v[i].second);
                    v.erase(v.begin() + i);
                    i--;
                    continue;
                }
                else if (v[i].first.first == l)
                {
                    res.pb(v[i].second);
                    v.erase(v.begin() + i);
                    i--;
                    continue;
                }
                v[i].first.first--;
            }
            else
            {
                if (v[i].first.first == 0)
                {
                    res.pb(v[i].second);
                    v.erase(v.begin() + i);
                    i--;
                    continue;
                }
                else if (v[i].first.first == l)
                {
                    res.pb(v[i].second);
                    v.erase(v.begin() + i);
                    i--;
                    continue;
                }
                v[i].first.first++;
            }
            sort(all(v), comp);
            for (j = 0; j < v.size() - 1; j++)
            {
                if (v[j].first.first == v[j + 1].first.first)
                {
                    if (v[i].first.second == 0)
                        v[i].first.second = 1;
                    else
                        v[i].first.second = 0;
                }
            }
        }
    }
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
