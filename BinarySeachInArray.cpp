#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int low=0;
    int high=n;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
            }
         else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
    
}
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
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}