#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float num;
    float max_num = -1e9, min_num = 1e9;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num > max_num) max_num = num;
        if (num < min_num) min_num = num;
    }

    cout << "maximum:" << fixed << setprecision(2) << max_num << endl;
    cout << "minimum:" << fixed << setprecision(2) << min_num << endl;

    return 0;
}
