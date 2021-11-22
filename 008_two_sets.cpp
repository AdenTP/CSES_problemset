#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if ((n * (n + 1) % 4) != 0)
    {
        cout << "NO" << '\n';
        return 0;
    }
    cout << "YES" << '\n';
    bool o = !(n%2==0);
    int m = (o?n-1:n);
    int l=1, r=m;
    cout << m/2 << '\n';
    while (r-l>m/2)
    {
        cout << l++ << " " << r-- << " ";
    }
    if (o)
        cout << n;
    cout << '\n' << m/2+(o?1:0) << '\n';
    while (r-l>0)
    {
        cout << l++ << " " << r-- << " ";
    }



    return 0;
}