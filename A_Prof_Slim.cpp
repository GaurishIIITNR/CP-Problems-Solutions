// DATE: 06-05-2022
// TIME:20:11:43

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
    vec(ll, v)(n);
    ll cntn = 0;
    foi(i, 0, n, 1)
    {
        cin >> v[i];
        if (v[i] < 0)
            cntn++;
    }
    for (i = 0; i < n; i++)
    {
        if (v[i] > 0 && i < cntn)
            v[i] = -v[i];
        else if (v[i] < 0 && i >= cntn)
            v[i] = -v[i];
    }
    vec(ll, v1)(v);
    sort(all(v1));
    if (v1 == v)
        cout << "YES\n";
    else
        cout << "NO\n";
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
