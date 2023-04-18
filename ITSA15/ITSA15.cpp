#include <iostream>
#include<string> 
using namespace std;

int main(){

    string str;
    int s1[30]={0},s2[30]={0};
    int con=1;
        
    getline(cin,str);
    for (int i=0;i < str.length();i++){
        if (str[i]>='A' && str[i]<='Z')
            s1[str[i]-'A']++;

        else if (str[i]>='a' && str[i]<='z')
            s2[str[i]-'a']++;

        if (str[i] == ' ')
            con++;
    }
    cout << con << endl;
    for (int i = 0;i<26;i++){
        if (s1[i]!=0)
            cout << char('A'+i+32) << " : " << s1[i] <<endl;
        else if (s2[i]!=0)
            cout << char('a'+i) << " : "<< s2[i] <<endl;
    }
    return 0;
}