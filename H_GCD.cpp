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
        if (a > b)
            swap(a, b);
            ll rem2=a;
            ll rem1=b;
            ll rem;
            ll gcd;
        while(1)
        {
             rem=rem1%rem2;
           if(rem==0){
              gcd=rem2;
               break;
           }
           rem1=rem2;
           rem2=rem;
        }
        
        cout << gcd << " " << (a * b) / gcd;
    }
}
