#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;
        ll arr[n + 1];
        ll a;
        for (int i = 0; i < n + 1; i++)
            arr[i] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> a;
            if (a <= n)
                arr[a] += 1;
        }
        ll low = 1000000;
        ll cnt = 0;
        for (int i = 1; i < n + 1; i++)
        {
            if (arr[i] == 0)
                break;
            else if (arr[i] < low)
            {
                low = arr[i];
                cnt += arr[i];
            }
            else
                cnt += low;
        }
        cout << (n - cnt) << "\n";
    }
}
