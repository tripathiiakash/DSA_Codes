#include<iostream>
#include<limits>
using namespace std;

int main(){
    int m,n;
    cout<<"enter the row and column no: ";
    cin>>m>>n;
    int arr[m][n];
     for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // finding sum 
    int sum=0;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
           sum +=arr[i][j];
        }
    }

    cout<<"the sum of all elements is: "<<sum;
}