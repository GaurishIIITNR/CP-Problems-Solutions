#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        int z;
        cin >> z;
        int a[8] = {6, 13, 20, 27, 7, 14, 21, 28};
        int res = 8 + z;
        for (int i = 0; i < z; i++)
        {
            int x;
            cin >> x;
            for (int j = 0; j < 8; j++)
            {
                if (a[j] == x)
                    res -= 1;
            }
        }
        cout << res << "\n";
    }
}
