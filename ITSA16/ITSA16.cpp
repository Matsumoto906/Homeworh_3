#include<iostream> 
#include<string> 
using namespace std; 
 
int main() 
{ 
 string str1,str2; 
    getline(cin,str1);  
    getline(cin,str2); 
    int i = 0,count = 0; 
    while (true) 
    { 
     i = str2.find(str1,i); 
     if (i != string::npos) 
     { 
          i++; 
           count++; 
       } 
      else 
        { 
            break; 
        } 
    } 
  cout << count << endl; 
 return 0; 
}  