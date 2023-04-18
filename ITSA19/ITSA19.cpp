#include <iostream>
using namespace std;
int main(){
    
    int n,x,ans=1;
    int a[16],b[16];
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> x;
        a[i]=x;
        cin >> x;
        b[i]=x;
    }
    
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if(b[j]<=a[i]){
                b[j]=b[i];
                break;
            }
            ans+=1;
        }
    }
    cout << ans <<endl;
    
    return 0;
}