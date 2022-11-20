#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;

    while(t--) 
    {
        string a;

       getline(cin, a);
       for (ll i = 0; i < a.length(); i++)
       {
           if (a[i] != (char)92)
            cout << a[i];
           else
           break;
       }
       
    }
}
