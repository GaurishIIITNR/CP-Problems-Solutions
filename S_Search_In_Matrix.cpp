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
        ll arr[a * b];
        for (ll i = 0; i < a * b; i++)
            cin >> arr[i];
        ll d;
        cin >> d;
        ll flag = 1;
        for (ll i = 0; i < a * b; i++)
        {
            if (d == arr[i])
            {
                flag = 2;
                break;
            }
        }
        if (flag == 2)
            cout << "will not take number\n";
        else
            cout << "will take number\n";
    }
}
