#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll a1[a], b1[b];
        for (int i = 0; i < a; i++)
            cin >> a1[i];
        for (int i = 0; i < b; i++)
            cin >> b1[i];
        ll flagg = 1;
        for (int i = 0; i < b; i++)
        {
            ll flag = 1;
            for (int j = 0; j < a; j++)
            {
                if (a1[j] == b1[i])
                {
                    flag = 2;
                    a1[j] = -1;
                    break;
                }
                a1[j] = -1;
            }
            if (flag == 1)
            {
                flagg = 2;
                cout << "NO\n";
                break;
            }
        }
        if (flagg == 1)
            cout << "YES\n";
    }
}
