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
 string str;
 cin >> str;
 
 for(int i=97; i<=122; i++)
 {
       int cnt =0;
     for (int j=0;j<str.length();j++)
     {
         if(str[j]==char(i))
         cnt+=1;
        
     }
     if(cnt>=1)
     cout<<char(i)<<" "<<":"<<" "<<cnt<<"\n";
     
 }
    }
}
