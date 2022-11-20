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
      ll a;
      string s;
      cin>>a>>s;
      ll cnt=0;
      for(int i=1; i<a; i++)
      {
          if(s[i]==s[i-1])
              cnt+=1;
      }
      cout<<a-cnt<<"\n";
    }
}
