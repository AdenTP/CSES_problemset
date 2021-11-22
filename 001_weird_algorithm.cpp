#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    std::cin >> n;
    std::cout << n << " ";
    while (n!=1)
    {
        if ((n%2)==0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        std::cout << n << " ";
    }
    std::cout << '\n';

    return 0;
}