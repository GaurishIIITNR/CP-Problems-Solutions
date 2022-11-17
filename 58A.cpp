#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    string s;
    cin >> s;
    ll flag = 0;
    string res = "NO";
    for (auto x : s)
    {
        if (flag == 0 && x == 'h')
            flag = 1;
        if (flag == 1 && x == 'e')
            flag = 2;
        if (flag == 2 && x == 'l')
        {
            flag = 3;
            continue;
        }
        if (flag == 3 && x == 'l')
            flag = 4;
        if (flag == 4 && x == 'o')
        {
            res = "YES";
            flag = 5;
        }
    }
    cout << res;
}