//🚩HHM🚩
// DATE: 18-05-2022
// TIME:11:03:01

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
    ll n, k;
    cin >> n >> k;
    vec(string, v)(n);
    ll cnt = 0;
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < k; i++)
    {
        st(char, s);
        for (j = 0; j < n; j++)
        {
            s.insert(v[j][i]);
        }
        cnt += s.size() - 1;
        if (cnt > k)
        {
            cout << -1 << "\n";
            return;
        }
    }
    string res = "";
    mpp(ll, ll, mp);
    for (i = 0; i < k; i++)
    {
        mpp(char, ll, mp1);
        for (j = 0; j < n; j++)
        {
            if (mp[j]==0)
                mp1[v[j][i]]++;
        }
        ll mx = 100;
        char mxv;
        for (auto x : mp1)
        {
            if (mx >=x.second)
            {
                mx = x.second;
                mxv = x.first;
            }
        }
        for (j = 0; j < n; j++)
        {
            if (v[j][i] == mxv)
                mp[j] = -1;
        }
        res += mxv;
    }
    cout << res << "\n";
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
