// Created by Mahadev_devote
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> odd;
        vector<ll> even;
        for (ll i = 0; i < n; i++)
        {
            ll d;
            cin >> d;
            if (d % 2)
                odd.push_back(d);
            else
                even.push_back(d);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        reverse(odd.begin(), odd.end());
        reverse(even.begin(), even.end());
        ll a = 0, b = 0;
        if (odd[0 >= even[0])
        {
           
        
        }
    }
}