#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
        {
            int n;
            cin >> n;
            if (n == 2)
                cout << -1<<"\n";
            else if (n % 2 == 0)
            {
                cout << 4 << " " << 1 << " " << 3 << " " << 2<<" ";
                for (int i = 5; i <= n; i++)
                    cout << i << " ";
                cout << "\n";
            }
            else
                for (int i = 1; i <= n; i++)
                    cout << i << " ";

        }
}
