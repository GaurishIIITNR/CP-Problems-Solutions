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
        vector<ll> even;
        vector<ll> odd;
        for (ll i = 0; i < n; i++)
        {
            ll d;
            cin >> d;
            if (d % 2)
                odd.push_back(d);
            else
                even.push_back(d);
        }
        if(odd.size() == 0)
            cout << -1 << "\n";
        else if (odd.size() == 1 && even.size() == 0)
            cout << odd[0] << "\n";
        else if (odd.size() == 1 && even.size() != 0)
            cout << -1 << "\n";
        else if (odd.size() % 2 != 0 && even.size() == 0)
            cout << -1 << "\n";
        else if (odd.size() % 2 != 0)
        {
            for (int i = 0; i < odd.size() - 1; i++)
                cout << odd[i] << " ";
            cout << even[0] << " ";
            cout << odd[odd.size() - 1] << " ";
            for (int i = 1; i < even.size(); i++)
                cout << even[i] << " ";
            cout << "\n";

            // ll j = 0, k = 0, cnt = 0, i = 0;
            // while (1)
            // {
            //     if (i % 3 == 2)
            //     {
            //         if (k < even.size())
            //         {
            //             cout << even[k] << " ";
            //             cnt++;
            //         }
            //         k++;
            //     }
            //     else
            //     {
            //         if (j < odd.size())
            //         {
            //             cout << odd[j] << " ";
            //             cnt++;
            //         }
            //         j++;
            //     }
            //     i++;
            //     if (cnt == n)
            //         break;
            // }
            // cout << "\n";
        }
        else
        {
            for (int i = 0; i < odd.size(); i++)
                cout << odd[i] << " ";
            for (int i = 0; i < even.size(); i++)
                cout << even[i] << " ";
            cout << "\n";
        }
    }
}