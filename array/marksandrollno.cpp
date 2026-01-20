#include<iostream>
using namespace std;
int main(){
   int n,x;
   cout<<"enter the no of students: ";
   cin>>n;
   int arr[n];
   cout<<"enter the marks of students: ";
   for(int i=0; i<n ;i++){
    cin>>arr[i];
    // cout<<", ";
   }
//    int x;
   cout<<"enter the failing precentage: ";
   cin>>x;
   cout<<"failed students roll no: "; 
   for(int i=0; i<n ;i++){
    if(arr[i]<x){
      cout<<i+1<<"  "; 
    // cout<<", ";
   }
   }
    
    return 0;
}