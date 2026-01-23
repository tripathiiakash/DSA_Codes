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

    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the max element of the array is: "<<min;

    return 0;

}