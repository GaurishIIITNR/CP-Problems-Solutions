// DATE: 26-03-2022
// TIME:17:43:33
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
    ll i;
    ll n, k;
    cin >> n >> k;
    vec(ll, v1)(n);
    vec(ll, v2)(n);
    foi(i, 0, n, 1)
            cin >>
        v1[i];
    foi(i, 0, n, 1)
            cin >>
        v2[i];

    vec(ll, res1);
    vec(ll, res2);
    foi(i, 0, n, 1)
    {
        if (i % 2)
        {
            res1.pb(max(v1[i], v2[i]));
            res2.pb(min(v1[i], v2[i]));
        }
        else
        {
            res2.pb(max(v1[i], v2[i]));
            res1.pb(min(v1[i], v2[i]));
        }
    }
    // for (auto x : res1)
    //     cout << x << " " << endl;
    // cout << "\n";
    // for (auto x : res2)
    //     cout << x << " " << endl;
    // cout << "\n";

    ll flag = 0;
    foi(i, 0, n - 1, 1)
    {
        if (abs(res1[i] - res1[i + 1]) <= k)
            continue;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Yes";
        return;
    }
    else
    {
        foi(i, 0, n - 1, 1)
        {
            if (abs(res2[i] - res2[i + 1]) <= k)
                continue;
            else
            {
                flag = 2;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "Yes";
            return;
        }
        else
        {
            cout << "No";
            return;
        }
    }
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
