#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void add(string& a, const string& b) {
    int carry = 0;
    for (int i = a.size() - 1, j = b.size() - 1; i >= 0; i--, j--) {
        int sum = carry + (i >= 0 ? (a[i] - '0') : 0) + (j >= 0 ? (b[j] - '0') : 0);
        a[i] = sum % 10 + '0';
        carry = sum / 10;
    }
    if (carry) {
        a = '1' + a;
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string a, b;
        getline(cin, a, ' ');
        getline(cin, b);

        if (a.size() < b.size()) {
            swap(a, b);
        }

        int diff = a.size() - b.size();
        b = string(diff, '0') + b;
        add(a, b);

        cout << a << endl;
    }

    return 0;
}
