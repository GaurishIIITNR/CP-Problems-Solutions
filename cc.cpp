#include <bits/stdc++.h>

using namespace std;
long long power( long long b,long long a){
    long long res
}


void solve()
{
    int x, y;
    cin >> x >> y;
    bool flag=1;
    for (int a = 1;a<=100; a++)
    {
        for (int b = 1;b<=100; b++)
        {
            if (x * pow(b, a) == y)
            {
                cout << a << " " << b<<"\n";
                flag=0;
                break;
            }
            else
            {
                continue;
            }
        }
        if(flag==0) break;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t!= 0)
    {

        solve();
        t--;
    }

    return 0;
}