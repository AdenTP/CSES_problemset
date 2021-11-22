#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        long long o = 0;
        cin >> o;
        arr[i] = o;
    }

    long long moves = 0;
    long long current = 0;
    for (int i = 0; i < n; i++)
    {
        long long diff = current - arr[i];
        if (diff > 0)
        {
            arr[i] += diff;
            moves += diff;
        }
        current = arr[i];
    }

    cout << moves;

    return 0;
}