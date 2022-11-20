// DATE :26-05-2022
// TIME:00:29:49
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
    ll n, c = 0, d = 0, m = 0;
    cin >> n;
    vect(ll, v)(n);
    vect(ll, v1);
    vect(ll, v2);
    vect(ll, v3);
    vect(ll, v4);
    for (ll i = 0; i < n; i++)
    {
        /* code */
        cin >> v[i];
    }
    sort(full(v));
    for (ll i = 0; i < n; i++)
    {
        /* code */
        if (i < (n / 2))
        {
            v1.pb(v[i]);
        }
        else
            v2.pb(v[i]);
    }

    for (ll i = 0; i < n; i++)
    {
        /* code */
        if (i % 2 == 0 and c < v1.size())
        {
            v3.pb(v1[c]);
            c++;
        }
        else
        {
            v3.pb(v2[d]);
            d++;
        }
    }
    v3.pb(v1[0]);
    // cout<<v3[-1]<<"\n";
    for (ll i = 0; i < n; i++)
    {
        // cout << i << "\n";
        for(auto x:v3)
        cout<<x<<" ";
    //     if (i == 0)
    //     {
    //         if (v3[0] < v3[i + 1] and v3[0] < v3[n - 1])
    //         {
    //             m = 1;
    //             continue;
    //         }
    //         else
    //         {
    //             m = 0;
    //             break;
    //         }
    //     }
    //     if ((v3[i] < v3[i - 1] and v3[i] < v3[i + 1]) or (v3[i] > v3[i - 1] and v3[i] > v3[i - 1]))
    //     {
    //         m = 1;
    //         continue;
    //     }
    //     else
    //     {
    //         m = 0;
    //         break;
    //     }
    // }

    // if (m == 1)
    // {
    //     cout << "YES" << endl;
    //     for (ll i = 0; i < n; i++)
    //     {
    //         /* code */
    //         cout << v3[i] << " ";
    //     }
    //     cout << endl;
    // }
    // else
    //     cout << "NO" << endl;
    // return;
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
    ll T = 1;
    cin >> T;

    for (ll i = 1; i <= T; i++)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }
}