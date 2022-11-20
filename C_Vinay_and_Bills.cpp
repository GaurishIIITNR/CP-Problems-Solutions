#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    ll a[t];
    int i = 0;
    while (i < t)
    {
        cin >> a[i];
        i++;
    }
    sort(a, a + t);
    int b;
    cin >> b;
    while (b--)
    {
        ll c;
        cin >> c;
        ll mn = 0;
        ll mx = t - 1;
        ll flag = 1;
        while (mn <= mx)
        {
            ll mid = (mn + mx) / 2;
            if (a[mid] == c)
            {
                cout << "Unpaid\n";
                flag = 2;
                break;
            }
            else if (a[mid] < c)
                mn = mid+1;
            else
                mx = mid-1;
        }
        if (flag == 1)
            cout << "Paid\n";
    }
}
