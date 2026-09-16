#include <bits/stdc++.h>

using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        stack < long long > values;
        for (char c: s) {
            if (isdigit((unsigned char) c)) values.push(c - '0');
            else {
                long long b = values.top();
                values.pop();
                long long a = values.top();
                values.pop();
                if (c == '+') values.push(a + b);
                else if (c == '-') values.push(a - b);
                else values.push(a * b);
            }
        }
        cout << values.top() << endl;
    }
}