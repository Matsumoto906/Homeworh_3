#include <iostream>
using namespace std;
int main(){
    char s1[10],s2[10],s3[10];
    string k="False";
    cin.getline(s1,10);
    cin.getline(s2,10);
    cin.getline(s3,10);
    for (int i=0;i<6;i+=2) {
        if (s1[i]==s2[i] && s2[i]==s3[i]){
            k = "True" ;
            break;}}
    
    if (s1[0]==s2[2] && s2[2]==s3[4])
        k="True";
    if (s1[4]==s2[2] && s2[2]==s3[0])
        k="True";
    cout << k << endl;

    return 0;
}