//
// Created by Timur on 10/2/26.
//

#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n, min, sum;
    cin >> t;
    int a[51];
    min = INT_MAX;
    sum = 0;

    for (int i = 0; i < t; i++) {
        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (a[j] < min) min = a[j];
        }

        for (int j = 0; j < n; j++) {
//            cout << (a[j] - min) << "\n";
            sum += (a[j] - min);
        }
        cout << sum << "\n";
        sum = 0;
        min = INT_MAX;
    }

    return 0;
}