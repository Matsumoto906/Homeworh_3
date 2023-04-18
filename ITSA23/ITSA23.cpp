#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);  
    stringstream ss(s);
    
    int n, a1, a2, a3,a;
    char _;
    ss >> n >> _ >> a1 >> _ >> a2 >> _ >> a3;
   
    int total = a1*15 + a2*20 + a3*30;
    if (total > n) { 
        cout << "0\n";
        return 0;
    }
    int remaining = n - total;
    int fifty = remaining / 50; 
    remaining %= 50;
    int five = remaining / 5;
    remaining %= 5;
    int one = remaining;
    cout << one << "," << five << "," << fifty << endl;
    return 0;
}