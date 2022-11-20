#include <bits/stdc++.h>
using namespace std;
#define ll long long int

pair<string, ll> bin(ll n)
{
    string s = "";
    ll cnt = 0;
    while (n > 0)
    {
        ll rem = n % 2;
        string k = to_string(rem);
        if (rem)
            cnt++;
        s = k + s;
        n = n / 2;
    }
    return {s, cnt};
}

int main()
{

    map<ll, ll> mp;
    mp[1] = bin(1).second;
    for (ll i = 2; i <= pow(2, 50) - 1; i++)
    {
        mp[i] = bin(i - 1).second + bin(i).second;
    }
    ll t = 1;

    cin >> t;
    while (t--)
    {
        ll n, a;
        cin >> n >> a;
        cout << mp[a] << "\n";

        // ll sm = 0;
        // ll cnt = 0;
        // for (auto x : mp)
        // {
        //     cout << x.second << " ";
        //     //    sm+=x.second;
        //     //      cnt++;
        //     //      if(cnt==a)
        //     //      break;
        // }
        // // cout<<sm<<"\n";
        // //     for(auto x:v)
        // //   {
        // //       cout<<x.first<<" "<<x.second<<"\n";
        // //   }
        // //   cout<<"\n";
    }
    return 0;
}
