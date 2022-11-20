// Created by LALU PRASAD YADAV
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
        string s;
        cin >> s;
        ll cnt0 = 0, cnt1 = 0;
        for (auto x : s)
        {
            if (x == '0')
                cnt0++;
            else
                cnt1++;
        }
        if ((min(cnt1, cnt0) * 2) + 1 > n)
            cout << n << "\n";
        else
         cout<<(min(cnt1,cnt0)*2)+1<<"\n";
    }
}