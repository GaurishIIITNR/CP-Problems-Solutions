//🚩HHM🚩
// DATE: 14-05-2022
// TIME:10:39:04

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
    int i, j, k;
    int n;
    cin >> n >> k;
    vec(int, v)(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    vp(int, int, v1);
    int cnt = 0;
    for (i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            cnt++;
            v.erase(v.begin());
            i--;
        }
        else
        {
            cnt++;
            v1.pb({v[i], cnt});
            cnt = 0;
        }
    }

    if (v.size() > 1)
        v1.pb({v[n - 1], cnt + 1});
    else
        v1.pb({v[n - 1], 1});
    v.clear();
    int z = v1.size();
    for (i = 0; i < z - 1; i++)
    {
        if (v1[i].first == v1[i + 1].first - 1)
            continue;
        else
        {
            for (j = v1[i].first + 1; j < v1[i + 1].first; j++)
                v1.pb({j, 0});
        }
    }
    sort(all(v1));
    
    // for (auto x : v1)
    // {
    //     cout << x.first << " " << x.second << "\n";
    // }
    // cout << "\n";
    
    int mx = 0, lv, hv;
    cnt = 0;
    int low = -1, high = v1.size();
    for (i = 0; i < v1.size(); i++)
    {
        if (v1[i].second < k)
        {
            high = i;
            cnt = high - low - 1;
            if (mx < cnt)
            {
                mx = cnt;
                lv = v1[low + 1].first;
                hv = v1[high - 1].first;
            }
            low = high;
        }
    }
    high = v1.size();
    cnt = high - low - 1;
    if (mx < cnt)
    {
        mx = cnt;
        lv = v1[low + 1].first;
        hv = v1[high - 1].first;
    }
    if (mx == 0)
    {
        cout << -1 << "\n";
        return;
    }
    cout << lv << " " << hv << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
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
