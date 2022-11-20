#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
   // cin>>t;

    while(t--) 
    {
      string s;
      getline(cin, s);
      for(int i=0; i<s.length(); i++)
      {
          if(s[i]==',')
          s[i]=' ';
          else if(int(s[i])>=65 and (s[i])<=90 )
          s[i]=char(int(s[i])+32);
         else if(int(s[i])>=97 and (s[i])<=122 )
          s[i]=char(int(s[i])-32); 
      }
      cout << s << endl;
    }
}
