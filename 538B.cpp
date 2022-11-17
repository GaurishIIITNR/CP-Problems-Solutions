#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    vector<string> v(9, "");
    // long long cnt=1;
    while (n > 0)
    {
        long long int rem = n % 10;
        for (int i = 0; i < 9; i++)
        {
            if (rem > 0)
                v[i] = '1' + v[i];
            else
                v[i] = '0' + v[i];
            rem--;
        }
        n /= 10;
        // cnt*=10;
    }
    long long int cnt = 0;
    vector<long long int> res;
    for (auto x : v)
    {
        if (stoi(x) != 0)
        {
            cnt++;
            res.push_back(stoi(x));
        }
    }
    cout << cnt << "\n";
    for (auto x : res)
        cout << x << " ";
    cout << "\n";
}