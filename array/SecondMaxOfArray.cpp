#include<iostream>
#include<climits>// to use INT_MIN
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the max element of the array is: "<<max<<endl;

      int smax=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>smax && max>arr[i]){
            smax=arr[i];
        }
    }
    cout<<"the second max element of the array is: "<<smax;

    return 0;

}