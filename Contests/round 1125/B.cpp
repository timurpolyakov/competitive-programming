#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    int n;
    string s;
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> t;

    while (t > 0) {
        cin >> n;
        cin >> s;
        vector<int> indices;
        vector<int> notprinted; 
        for (int count = 1; count <= n; count++) {
            if (s[count-1] == '1') {
                indices.push_back(count);
            }
            else if (s[count-1] == '2' and !indices.empty()) { 
                indices.pop_back();
                notprinted.push_back(count);
            }
        }

        for (const auto& elem : indices) {
            notprinted.push_back(elem);
        }
        sort(notprinted.begin(), notprinted.end());

        cout << notprinted.size() << "\n";

        for (const auto& elem: notprinted) {
            cout << elem << " ";
        }
        cout << "\n";
        t--;
    }
}