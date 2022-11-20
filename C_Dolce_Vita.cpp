#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << 1 << "\n";
    ll t = 1;
    ll cnt = 100000000;
    while (t--)
    {
        cout << 100000 << " " << 1000000000 << "\n";
        for (int i = 0; i < 100000; i++)
        {
            cout << cnt << " ";
            cnt += 3;
        }
        cout << "\n";
    }
}