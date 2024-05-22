#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three nos: ";
    cin>>a>>b>>c;
    if(a>b){
        if((a>c)){
            cout<<"Larges no is:"<<a<<endl;
        }
        else{
            cout<<"Largest no is:"<<c<<endl;
        }
    }
    else if(b>a){
        if(b>c){
            cout<<"Largest no is:"<<b<<endl;
        }
        else{
            cout<<"Largest no is:"<<c<<endl;
        }
    }
}