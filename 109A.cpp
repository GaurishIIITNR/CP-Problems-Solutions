#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int t=1;
  //cin>>t;
  int sm=0,mx=0;
  while(t--)
  {
    int a;
    cin>>a;
   if(a%7==0){sm=a/7;mx=0;}    
   else if(a%7==1&& a>=8){sm=(a-8)/7;mx=2;}
   else if(a%7==2&& a>=16){sm=(a-16)/7;mx=4;}
  else if(a%7==3&& a>=24){sm=(a-24)/7;mx=6;}
  else if(a%7==4&& a>=4){sm=(a-4)/7;mx=1;}
  else if(a%7==5 && a>=12){sm=(a-12)/7;mx=3;}
  else if(a%7==6 && a>=20){sm=(a-20)/7;mx=5;}
   else{
     cout<<-1<<endl;
     continue;
   }
   for(int i=0;i<mx;i++)
   cout<<4;
   for(int i=0;i<sm;i++)
   cout<<7;
   cout<<endl;
  }
}