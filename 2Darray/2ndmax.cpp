#include<iostream>
#include<climits>
using namespace std;

int max2(int arr[100][100], int m, int n){
    int max= INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j])
            max=arr[i][j];
        }
    }
    cout<<"the 1st max ele is: "<<max<<endl;//there is no if condn bcz always array have 1st max
    int max2=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max2<arr[i][j] && arr[i][j]!=max){
            max2=arr[i][j];
            }
        }
    }

    return (max2==INT_MIN)? -1: max2;
}
int main(){
    int m,n;
    cout<<"enter the row and column no: ";
    cin>>m>>n;
    int arr[100][100];//taking 100 bcz arr[m][n] not valid bcz its vla (variable length array) which isn't valid in standard c++
     for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
        // int arr[3][3]={5,6,4,9,7,4,1,5,2};//we cant skip writting column but can skip row

    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int result= max2(arr,m,n);
    if(result==-1)
    cout<<"there is no second max available!";
    else
    cout<<"The 2nd max element is: "<<result;
}