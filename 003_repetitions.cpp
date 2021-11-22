#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    string sequence;
    cin >> sequence;

    char current = sequence[0];
    long long count = 1;
    long long max = 1;

    for (long long i = 1; i < sequence.length(); i++)
    {
        if (current == sequence[i])
        {
            count += 1;
            if (count > max)
                max = count;
        } else {
            count = 1;
            current = sequence[i];
        }
    }

    cout << max;

    return 0;
}