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

        ll n, k;
        cin >> n >> k;
        ll tem = n;
        vector<ll> v;
        while (n--)
        {
            ll d;
            cin >> d;
            v.push_back(d);
        }
        sort(v.begin(), v.end());
        ll sm = 0, cnt = 0;
        for (ll i = 0; i < tem; i++)
        {
            sm += v[i];
            if (sm <= k)
                cnt++;
            else
            {
                sm -= v[i];
                sm += ceil(v[i] / 2.0);
                if (sm <= k)
                    cnt++;
                break;
            }
        }
        cout << cnt << "\n";
    }
}