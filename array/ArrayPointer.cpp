#include<iostream>
using namespace std;

void change(int a[]){
    a[0]=100;//the change done here in this function reflects in main function without pointer it means Array is pass by reference
}
void display(int b[], int size){
    for(int i=0; i<size; i++)
    cout<<b[i]<<"  ";
}
int main(){
    int arr[]= {1,13,45,78,3,353,56,67,232};
    int size= sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr);
    cout<<endl;
    display(arr,size);
    return 0;
}