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
        ll a;
        cin >> a;
        ll arr[a][a];
        ll cnt1 = 0, cnt2 = 0;

        for (ll i = 0; i < a; i++)
        {
            for (ll j = 0; j < a; j++)
            {
                cin >> arr[i][j];
                if (i == j)
                    cnt1 += arr[i][j];
                if ((i + j) == (a - 1))
                    cnt2 += arr[i][j];
            }
        }
        cout << abs((cnt1)- (cnt2)) << "\n";
    }
}
