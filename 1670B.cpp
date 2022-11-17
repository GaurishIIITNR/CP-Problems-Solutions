// DATE: 06-05-2022
// TIME:21:31:13
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
//#define     mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll k;
    cin >> k;
    mpp(char, bool, mp);
    while (k--)
    {
        char c;
        cin >> c;
        mp[c] = 1;
    }
    ll low = -1, high = -1;
    ll r = 0, fir = 0;
    for (i = 0; i < n; i++)
    {
        if (mp[s[i]] == 1)
        {
            if (r == 0)
            {
                low = i;
                fir = max(fir, i);
            }
            else
            {
                high = i;
                fir = max(fir, high - low);
                low = high;
            }
            r++;
        }
        else
            continue;
    }
    cout << fir << "\n";
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
        gaurish();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif