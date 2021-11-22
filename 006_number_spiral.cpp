#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long y;
        long long x;
        cin >> y >> x;
        if (y >= x)
        {
            cout << ((y%2==0)?((y*y)-(x-1)):((y*y)-(y-1)-(y-x))) << '\n';
        } else {
            cout << ((x%2==1)?((x*x)-(y-1)):((x*x)-(x-1)-(x-y))) << '\n';
        }

    }
    return 0;
}