#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long expected_sum = (n * (n+1)) / 2;

    long long sum = 0;

    for (long long i = 0; i < (n - 1); i++)
    {
        long long current;
        cin >> current;
        sum += current;
    }

    cout << expected_sum - sum;

    return 0;
}