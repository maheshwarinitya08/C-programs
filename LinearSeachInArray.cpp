#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[10];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to be searched:";
    cin>>key;
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Key found at index "<<i;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Key not found";
    }
    return 0;
}