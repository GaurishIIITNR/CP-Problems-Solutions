//🚩HHM🚩
// DATE: 31-05-2022
// TIME:20:31:31

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
    cin >> k;
    string s;
    cin >> s;
    ll cnt1 = 0, cnt2 = 0;
    bool flag = 0;
    for (i = n - 1; i >= 1; i--)
    {
        if (s[i - 1] == '1' && s[i] == '0')
        {
            cnt1 = n - i;
            break;
        }

        // else if (s[i] == '1' && s[i + 1] == '0' && flag == 1)
        // {
        //     swap(s[i], s[i + 1]);
        //     cnt1++;
        //     flag = 1;
        //     if (cnt1 > k + 1)
        //     {
        //         swap(s[i], s[i + 1]);
        //         break;
        //     }
        // }
        // else
        // {
        //     flag = 0;
        //     swap(s[i], s[i + 1]);
        //     cnt1--;
        // }
    }
    ll res = 0;
    if (cnt1 <= k)
    {
        if (s[n - 2] == '1' && s[n - 1] == '0')
            res = -10;
        else
            res = -9;
    }
    // if (cnt1 < k && s[n - 2] == '1' && s[n - 1] == '0')
    //     swap(s[n - 1], s[n - 2]);

    // cout << s << "\n";
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '1')
            res += 1;
        else if (s[i] == '1' && s[i + 1] == '0')
            res += 10;
        else if (s[i] == '0' && s[i + 1] == '0')
            res += 0;
        else if (s[i] == '1' && s[i + 1] == '1')
            res += 11;
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
