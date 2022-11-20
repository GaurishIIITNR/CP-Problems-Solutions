
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0); 
    ll tc;  cin>>tc;
    while(tc--)
     {
         int n;
         cin>>n;
         int s=0,l=0;
         while(n--){
             string d;
             cin>>d;
             if(d[0]=='S')s++;
             else l++;
         }
         cout<<s<<" "<<l<<endl;
     }
}