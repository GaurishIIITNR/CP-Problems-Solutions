//=======================================================//
// HAR HAR MAHADEV
// DATE: 30-04-2022
// TIME:14:35:22
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
// #define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll n;
    cin >> n;
    ll n1 = n;
    vector<string> v;
    vector<string> res;
    bool check = 1;
    while (n1--)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    string temp = v[0];
    v.erase(v.begin());
    while (v.size() > 0)
    {
        vector<string> save1;
        vector<string> save2;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i][0] == temp[0] && v[i][v[i].length() - 1] == temp[0])
            {
                temp = v[i] + temp;
                v.erase(v.begin() + i);
                i--;
            }
            else if (v[i][v[i].length() - 1] == temp[0])
            {
                save1.pb(v[i]);
                v.erase(v.begin() + i);
                i--;
            }
        }
        if (save1.size() > 1)
        {
            cout << "IMPOSSIBLE\n";
            return;
        }
        for (auto x : save1)
            temp = x + temp;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i][0] == temp[temp.length() - 1] && v[i][v[i].length() - 1] == temp[temp.length() - 1])
            {
                temp = v[i] + temp;
                v.erase(v.begin() + i);
                i--;
            }
            else if (v[i][0] == temp[temp.length() - 1])
            {
                save2.pb(v[i]);
                v.erase(v.begin() + i);
                i--;
            }
        }
        if (save2.size() > 1)
        {
            cout << "IMPOSSIBLE\n";
            return;
        }
        for (auto x : save2)
            temp = temp + x;
        if (v.size() > 0 && save1.size() == 0 && save2.size() == 0)
        {
            res.pb(temp);
            temp = v[0];
            v.erase(v.begin());
        }

        // deb(v.size());
    }
    for (auto x : res)
        temp = temp + x;

    mpp(char, bool, mp);
    for (ll i = 0; i < temp.length(); i++)
    {
        if (mp[temp[i]] == 1)
        {
            check = 0;
            break;
        }
        if (i != temp.length() - 1 && temp[i] == temp[i + 1])
            mp[temp[i]] = 0;
        else
            mp[temp[i]] = 1;
    }
    if (check == 0)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    else
        cout << temp << "\n";
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
    cin >> t;

    for (ll i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        gaurish();
    }
}
