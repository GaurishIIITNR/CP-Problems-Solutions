#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,sum;
        sum=0;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            sum = sum + arr[i];
        }
        if (n%2==0 && sum%2 == 0){
            cout<<"maomao90"<<endl;
        }
        else if  (n%2!=0 && sum%2!=0){
            cout<<"maomao90"<<endl;
            
        }
        else{
            cout<<"errorgorn"<<endl;
        }
    }
}