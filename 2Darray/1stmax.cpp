#include<iostream>
#include<limits>
using namespace std;

int max(int arr[][3]){
    int max= -1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j])
            max=arr[i][j];
        }
    }
    return max;
}
int main(){
    int arr[3][3]={5,6,4,9,7,4,1,5,2};//we cant skip writting column but can skip row
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The max element is: "<<max(arr)<<endl;
}