#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sum=0;
    int original=n;
    while(n>0){
        int last=n%10;
        sum+=pow(last,3);
        n=n/10;
    }
    if(sum==original){
        cout<<"It's an armstrong no.";
    }
    else{
        cout<<"It's not an armstrong no.";
    }
    return 0;
}