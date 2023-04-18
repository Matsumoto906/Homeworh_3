#include <iostream>
#include <iomanip> 
using namespace std;
int main (){
    float M,n;
    float num[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
        M=num[0];
        n=num[0];
    for (int i = 0; i < 10; i++)
    {   
        if (num[i]>M)
        {
            M=num[i];
        }    
    }
    for (int i = 0; i < 10; i++)
    {   
        if (num[i]<n)
        {
            n=num[i];
        }    


    }
    cout << fixed << "maximum:"<< setprecision(2)<< M <<endl;
    cout << fixed << "minimum:"<< setprecision(2)<< n <<endl;
    return 0;
}