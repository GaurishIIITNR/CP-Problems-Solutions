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
        vector<ll> v(n);
        ll evp = 0, ovp = 0, evcnt = 0, odcnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2)
                odcnt++;
            else
                evcnt++;
        }
        ll lv = 0, uv = 0;
        if (v[0] % 2 == v[n - 1] % 2)
        {
            if (v[0] % 2 == 0)
                cout << evcnt - 1 << "\n";
            else
                cout << odcnt - 1 << "\n";
        }
        else if (v[0] % 2 == 1 && v[n - 1] % 2 == 0)
        {
            ll spcnt = 0, mx = 0;
            bool flag = 0;
            ll odcn = 0, evcn = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 && flag == 0)
                {
                    flag = 1;
                    lv = i;
                }
                else if (flag == 1 && v[i] % 2 == 0)
                {
                    flag = 0;
                    if (spcnt >= mx)
                    {
                        uv = i;
                        mx = spcnt;
                    }
                    else
                    {
                        lv = 0;
                        uv = 0;
                    }
                }
                else if (flag == 1)
                    spcnt++;
            }
            for (int i = 0; i < n; i++)
            {
                if (i < lv)
                {
                    if (v[i] % 2)
                        odcn++;
                }
                if (i > uv)
                {
                    if (v[i] % 2 == 0)
                        evcn++;
                }
            }
            cout << evcn + odcn + 1 << "\n";
        }

        else if (v[0] % 2 == 0 && v[n - 1] % 2 == 1)
        {
            ll spcnt = 0, mx = 0;
            bool flag = 0;
            ll odcn = 0, evcn = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0 && flag == 0)
                {
                    flag = 1;
                    lv = i;
                }
                else if (flag == 1 && v[i] % 2 == 1)
                {
                    flag = 0;
                    if (spcnt >= mx)
                    {
                        uv = i;
                        mx = spcnt;
                    }
                    else
                    {
                        lv = 0;
                        uv = 0;
                    }
                }
                else if (flag == 1)
                    spcnt++;
            }
            for (int i = 0; i < n; i++)
            {
                if (i < lv)
                {
                    if (v[i] % 2 == 0)
                        evcn++;
                }
                if (i > uv)
                {
                    if (v[i] % 2 == 1)
                        odcn++;
                }
            }
            cout << evcn + odcn + 1 << "\n";
        }
    }
}