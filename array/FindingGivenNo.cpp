#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the no of elements: ";
   cin>>n;
   int arr[n];
   cout<<"enter the elements: ";
   for(int i=0; i<n ;i++){
    cin>>arr[i];
   }
   int x;
    cout<<"enter the no you want to find: ";
   cin>>x;
   bool flag= false;
   for(int i=0; i<n ;i++){
      if(arr[i]==x){
      flag= true;
      break;
      }
   }
   if(flag== true )
   cout<<"the given no is present!";
   else 
   cout<<"the given no is not present!";
       return 0;
}