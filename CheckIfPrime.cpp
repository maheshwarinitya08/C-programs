#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter a number:";
    cin>>n;
    int flag=1;
    if(n==1 || n==0){
        flag=0;
    }
    for(int i=2;i<=n/2;++i){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<n<<" is a prime no"<<endl;
    }
    else{
        cout<<n<<" is not a prime no"<<endl;
    }
    return 0;
}