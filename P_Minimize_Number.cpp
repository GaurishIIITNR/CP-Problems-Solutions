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
        ll arr[a];
        ll mx = -1;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (mx < arr[i])
                mx = arr[i];
        }
        ll cnt = 0;
        ll flag = 1;
        for (int i = 2; i <= mx; i=i* 2)
        {
            
            for (int j = 0; j < a; j++)
            {
                if (arr[j] % i != 0)
                {
                    flag = 2;
                    break;
                }
            }
            if (flag == 2)
                break;
            else
             cnt+=1;
            
    
        }
       cout <<cnt <<endl;
    }
}
