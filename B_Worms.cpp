#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a;
    cin >> a;
    ll arr[a];
    ll z = 0;
    for (int i = 0; i < a; i++)
    {
        ll k;
        cin >> k;
        z = z + k;
        arr[i] = z;
    }
    ll b;
    cin >> b;
    while (b--)
    {
        ll d;
        cin >> d;
        ll mn = 0;
        ll mx = a-1;
        ll flag = 1;
        while (mn <= mx)
        {
            ll mid = (mn + mx) / 2;
            if (arr[mid] == d)
            {
                cout <<mid+1<<"\n";
                flag = 2;
                break;
            }
            else if (arr[mid] < d)
                mn = mid+1;
            else
                mx = mid-1;
        }
        if(flag==1)
        cout<<mn+1<<"\n";
    }
}
