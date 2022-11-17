// HHM
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n][m], res = 0;
        for (int i = 0; i < n; i++){
           for (int j = 0; j < m; j++){
                char c; cin >> c;
                arr[i][j] = (ll)(c - '0');
                if (arr[i][j] == 1) res++;
            }
        }
        ll cnt = 4;
        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < m - 1; j++)
                cnt = min((arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i + 1][j + 1]), cnt);
        }
        if (cnt <= 2)
            cout << res << "\n";
        else if (cnt == 3)
            cout << res - 1 << "\n";
        else
            cout << res - 2 << "\n";
    }
}