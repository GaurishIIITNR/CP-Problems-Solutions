//🚩HHM🚩
// DATE: 01-06-2022
// TIME:00:57:22

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

void insert(vector<ll> &v, ll temp)
{
    if (v.size() == 0 || temp >= v[v.size() - 1])
    {
        v.push_back(temp);
        return;
    }
    ll val = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
}

void sorte(vector<ll> &v)
{
    if (v.size() == 1)
        return;
    ll temp = v[v.size() - 1];
    v.pop_back();
    sorte(v);
    insert(v, temp);
}

void hhm()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vec(ll, v)(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    sorte(v);
    for (auto x : v)
        cout << x << " ";
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
