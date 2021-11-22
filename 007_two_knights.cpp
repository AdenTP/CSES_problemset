#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        long long c9ns = ((i * i) * ((i * i) - 1))/2;
        if (i <= 2)
        {
            cout << c9ns << '\n';
            continue;
        }
        cout << c9ns - (((i - 2) * (i - 1)) * 4) << '\n';
    }

    return 0;
}