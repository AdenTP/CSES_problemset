#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int ans = 0;
    for (int x=5;x<=n;x*=5)
    {
        ans+=(n/x);
    }
    cout << ans;

    return 0;
}