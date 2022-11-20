#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll a, b;
        string s;
        cin >> a >> b >> s;
        ll flag = 1;
        if (b == 0 || a == 1)
        {
            cout << 1 << "\n";
            flag = 2;
        }
        else if (flag == 1)
        {
            for (ll i = 0; i < a; i++)
            {
                if (s[i] != s[a - i - 1])
                {
                    flag = 4;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << 1 << "\n";
                flag = 3;
            }
        }
        if (flag == 4)
            cout << 2 << "\n";

        //   vector<ll> v;
        //   vector<ll> vv;
        //   for(ll i=0;i<2a-1;i++)
        //     v.push_back(s[i]);
        //     for(ll i=0;i<b;i++)
        //     {

        //     }
    }
}
