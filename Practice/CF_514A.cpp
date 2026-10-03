#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    long long int n;
    cin >> n;
    int counter = 0;
    long long int answer = 0; 
    int temp;

    while (n != 0) { 

        if (n == 9) {
            answer += 9 * pow(10, counter);
            break;
        }
        temp = n % 10;
        if (temp >= 5) {
            temp = (9-temp);
        }
        answer += temp * pow(10, counter);
        counter += 1;
        n /= 10;
    }
    cout << answer << "\n"; 


    return 0;
}
