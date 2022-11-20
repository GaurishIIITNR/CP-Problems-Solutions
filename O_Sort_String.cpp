#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        int b;
        cin >> b;
        vector<int>v(26,0);
        char c;
        for(int i=0; i<b;i++){
            cin>>c;
            v[c-'a']++;
        }

        for(int i=0; i<26; i++) {

            while(v[i]>0){
                cout<<char('a'+i);
                v[i]--;
            }
        }
}
