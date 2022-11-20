/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 12-03-2022**** //
                            // ******TIME:20:47:41****** //
========================================================================================
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define erase(name, i) name.erase(name.begin() + i)
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

bool comp(pair<pair<ll, ll>, char> &a, pair<pair<ll, ll>, char> &b)
{
    if (a.first.second == b.first.second)
    {
        if (a.second == b.second)
            return a.first.first > b.first.first;
        return a.second < b.second;
    }

    return a.first.second < b.first.second;
}

void gaurish()
{
    ll i, j, k;
    ll n;
    cin >> n;

    vector<pair<pair<ll, ll>, char>> v(n, {{0, 0}, '0'});

    for (i = 0; i < n; i++)
    {
        cin >> v[i].first.first >> v[i].first.second;
    }
    string s;
    cin >> s;
    i = 0;
    for (auto x : s)
    {
        v[i].second = x;
        i++;
    }
    sort(v.begin(), v.end(), comp);
    // for (i = 0; i < n; i++)
    // {
    //     cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << "\n";
    // }
    // cout << "******\n\n";
    ll low = 0;
    ll high = 0;
    bool flag = 0;
    for (i = 0; i < n; i++)
    {
        if (i < n-1 && flag == 0 && v[i].first.second == v[i + 1].first.second)
        {
            low = i;
            high = i + 1;
            flag = 1;
            continue;
        }
        if (i < n-1 && flag == 1 && v[i].first.second == v[i + 1].first.second)
            high++;
        else
        {
            if (v[low].first.first > v[high].first.first && v[low].second == 'L' && v[high].second == 'R')
            {
                cout << "Yes";
                return;
            }
            flag = 0;
            low = 0;
            high = 0;
        }
    }
    cout << "No";
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
