// DATE :13-05-2022
// TIME:23:13:35
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define vect(type1, name) vector<type1> name
#define vectp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define fir first
#define sec second
#define full(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m > n)
        cout << -1;
    else
        cout << m * ceil((dbl)n / (2 * m));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll T = 1;
    // cin >> T;

    for (ll i = 1; i <= T; i++)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }
}