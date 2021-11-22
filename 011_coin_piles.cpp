#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << (((2*a-b)%3==0 && (2*b-a)%3==0 && (a<=2*b && b<=2*a))?"YES":"NO") << '\n';
    }

    return 0;
}