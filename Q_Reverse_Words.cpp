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
      ll l= a.length();
      ll k=0;
      a[l]=' ';
      for(int i=0; i<l+1; i++)
      {
        if(a[i]==' ')
        {
        
            for(int j=i-1; j>=k;j--)
            {
                cout << a[j];
            }
            k=i+1;
            if(i!=l)
            cout<<" ";
        }

      }      
    }
}
