#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1, sm;
    cin >> t >> sm;
    ll cnt = 0;
    while (t--)
    {
        char a;
        ll b;
        cin >> a >> b;
        if (a == '+')
            sm += b;
        else
        {
            if (b > sm)
                cnt++;
            else
                sm -= b;
        }
    }
    cout << sm << " " << cnt;
}
