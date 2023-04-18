#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    string s,arr[1000];
    int index=0;
    while (cin >> s){
        arr[index++] = s;
        char x = getchar();
        if (x == '\n')
            break;
    }
    
    set<string> ans(arr,arr+1000);
    cout << "\b";
    for (const auto &s : ans) {
        for (int i=0;i<sizeof(&s);i++)
            if (s[i]>=65 && s[i]<=90){
                cout << char(s[i]+32);
                continue;
                }
            else{
                cout << char(s[i]);
            }
        
        cout << ' ';
    }
    
    cout << '\n';

    return 0;
}