#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t, x, y, R; 
    cin >> t;

    while (t > 0) {
        cin >> x >> y >> R; 
        cout << x + R << " " << y << "\n"; 
        t--;
    } 
}