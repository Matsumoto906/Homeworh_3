#include <iostream>
#include <cmath>
using namespace std;
double ans=0;
int sum(double r,double n,double p){
    ans+=(ans+p)*r+p;
    n--;
    if (n == 0)
        return ans;
    else    
        return sum(r,n,p);
}

int main(){

    double r;
    int n,p;
    cin >> r;
    cin >> n;
    cin >> p;
    sum(r/100,n,p);
    
    cout << floor(ans) << endl;

    return 0;
}