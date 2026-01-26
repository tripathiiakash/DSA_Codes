#include<iostream>
#include<climits>// to use INT_MIN
using namespace std;
int main(){
    // int n;
    // cout<<"enter the size of array: ";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the element of array: ";
    // for(int i=0; i<n; i++){
        
    //     cin>>arr[i];
    // }
    
    // if The array is already define then we can reduce time complexity by not taking input of element from user
    int arr[]= {1,13,45,78,3,353,56,67,232};
    int size= sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the reference no: ";
    cin>>x;
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Total numbers greater than the given referaance no is: "<<count;

    return 0;

}