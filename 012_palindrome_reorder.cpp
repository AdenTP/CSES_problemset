#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str; cin >> str;
    vector<int> counts(26,0);
    for (auto &x : str)
        counts[x-'A']++;
    bool odd = (str.size()%2!=0);
    string side, m;
    for (int i = 0; i < 26; i++) {
        if(counts[i]==0) continue;
        if(counts[i]%2)
        {
            if (empty(m) && odd)
                m=string(counts[i], i+'A');
            else {
                cout << "NO SOLUTION";
                return 0;
            }
        } else {
            side+=string(counts[i]/2, i+'A');
        }
    }
    string flip = side;
    reverse(flip.begin(), flip.end());
    cout << (side + m + flip);
    return 0;
}