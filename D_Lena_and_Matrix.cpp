//🚩HHM🚩
// DATE: 10-06-2022
// TIME:23:16:55

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
    cin >> n >> m;
    vector<pair<ll, ll>> mp;
    char arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'B')
                mp.push_back({i, j});
        }
    }
    ll mni = INT_MAX, mnj = INT_MAX, mxi = INT_MIN, mxj = INT_MIN;
    for (auto x : mp)
    {
        mni = min(mni, x.first + 1);
        mxi = max(mxi, x.first + 1);
        mnj = min(mnj, x.second + 1);
        mxj = max(mxj, x.second + 1);
    }
    // deb2(mni,mxi);
    //  deb2(mnj,mxj);
    cout << (mxi + mni) / 2 << " " << (mxj + mnj) / 2 << "\n";
    // ll mn = INT_MAX, xi, xj;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < m; j++)
    //     {
    //         ll sm = 0;
    //         for (auto x : mp)
    //             sm = max(sm, (abs(x.first - i) + abs(x.second - j)));
    //         if (sm < mn)
    //         {
    //             mn = sm;
    //             xi = i + 1;
    //             xj = j + 1;
    //         }
    //     }
    // }
    // cout << xi << " " << xj << "\n";
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
