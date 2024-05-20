#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. upto which you want to print the prime nos:";
    cin>>n;
    for(int j=1;j<=n;j++){
        int i;
        for( i=2;i<=n;i++){
            if(j%i==0){
                break;
            }
        }
        if(i==j){
            cout<<j<<endl;
        }
    }
    return 0;
}