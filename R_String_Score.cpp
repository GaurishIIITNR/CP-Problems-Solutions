/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 15-02-2022**** //
                            // ******TIME:14:47:25****** //
========================================================================================
*/
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
     ll a;
     string s;
     cin >> a>>s;
     ll score=0;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='a')
         continue;
         else if (s[i]=='V')
           score+=5;
          else if(s[i]=='W')
           score+=2;
           else if(s[i]=='Y')
           {
               if(i==s.length()-1)
               continue;
               else
               { s=s+s[i+1];
               //k++;
                 s[i+1]='a';
               }
           // cout<<"k"<<s.length()<<"\n";
           }
           else if(s[i]=='X')
           {
                if(i==s.length()-1)
               continue;
               else
               {
                   s[i+1]='a';
               }
           }
           else if(s[i]=='Z')
           {
                if(i==s.length()-1)
               continue;
               else
               {
                   if(s[i+1]=='V')
                   {
                       score/=5;
                       s[i+1]='a';
                   }
                   else if(s[i+1]=='W')
                   {
                       score/=2;
                       s[i+1]='a';
                   }
               }
           }


     } 
     cout<<score;    
    }
}
