//HHM
// DATE: 24-05-2022
// TIME:10:14:05

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
    string s;
    cin >> s;
    ll cnt = 0, cnt1 = 0, cnt2 = 0;
    ;
    for (i = 1; i < s.length(); i++)
    {
        if (i < s.length() - 1 && s[i] == 'A' && s[i + 1] == 'B' && s[i - 1] == 'B')
        {
            cnt++;
            i += 2;
        }
        else if (i < s.length() - 1 && s[i] == 'B' && s[i + 1] == 'A' && s[i - 1] == 'A')
        {
            cnt++;
            i += 2;
        }
        else if (s[i] == 'B' && s[i - 1] == 'A')
        {
            cnt2 += 1;
            i += 1;
        }
        else if (s[i] == 'A' && s[i - 1] == 'B')
        {
            cnt1 += 1;
            i += 1;
        }
    }
    if (cnt > 0 && cnt + cnt1 + cnt2 > 1)
        cout << "YES";
    else if (cnt1 > 0 && cnt2 > 0 && cnt1 + cnt2 > 1)
        cout << "YES";
    else
        cout << "NO";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin>>t;

    while (t--)
    {
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif