#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    if (n <= 3 && n != 1)
    {
        cout << "NO SOLUTION";
    } else {
        for (long long i = 1; i <= (n/2); i++)
        {
            cout << (i*2) << " ";
        }
        for (long long i = 0; i < ((n/2)+(n%2)); i++)
        {
            cout << ((i*2)+1) << " ";
        }
    }
    return 0;
}
