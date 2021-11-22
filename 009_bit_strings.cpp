#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    long long res = 1;
    long long big_num = 1000000007;
    long long a = 2;
    while (n>0)
    {
        if (n & 1)
            res = res * a % big_num;
        a = a * a % big_num;
        n >>= 1;
    }
    cout << res;
    return 0;
}