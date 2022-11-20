//=======================================================//
// HAR HAR MAHADEV
// DATE: 01-05-2022
// TIME:14:34:08
//=======================================================//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    ll n;
    cin >> n >> k;
    string s = "";
    dbl avg = 0.0;
    foi(i, 0, n, 1)
    {
        int d;
        cin >> d;
        string k = to_string(d);
        s += k;
    }
    while (k < n)
    {
        foi(i, 0, n - k + 1, 1)
        {
            ll sm = 0;
            string temp = s.substr(i, k);
            for (auto x : temp)
                sm += (x - '0');
            avg = max(avg, (dbl)sm / k);
        }
        k++;
    }
    printf("%.15f\n", avg);
    // cout<<s<<"\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll t = 1;
    // cin >> t;

    while (t--)
    {
        gaurish();
    }
}
