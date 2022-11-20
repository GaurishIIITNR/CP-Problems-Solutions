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
        char arr[a][b];
        for (ll i = 0; i < a; i++)
            for (ll j = 0; j < b; j++)
            {
                if ((i + 1) % 4 == 2)
                {
                    if (j == b - 1)
                        arr[i][j] = '#';
                    else
                        arr[i][j] = '.';
                }
                else if ((i + 1) % 4 == 0)
                {
                    if (j == 0)
                        arr[i][j] = '#';
                    else
                        arr[i][j] = '.';
                }
                else
                    arr[i][j] = '#';
            }
        for (ll i = 0; i < a; i++)
        {
            for (ll j = 0; j < b; j++)
            {
               cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }
}
