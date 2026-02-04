#include<iostream>
using namespace std;

int main(){
    int m,n,p,q;
    cout<<"enter the 1st matrix row and column no: ";
    cin>>m>>n;
    cout<<"enter the 2nd matrix row and column no: ";
    cin>>p>>q;
     if((m!=p)||n!=q){
        cout<<"addtion is not possible!";
    } 
    else{
    //taking 1st matrix input
      int a[m][n];
      cout<<"enter 1st mat ele: "<<endl;
     for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    //taking 2nd matrix input
     cout<<"enter 2nd mat ele: "<<endl;

    int b[p][q];
     for(int i=0;i<p;i++){
        for (int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    
    // finding addition of matrix
    int sum[m][n];
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            sum[i][j]= a[i][j] + b[i][j];
        }
    }
    //prting added array
    cout<<"the sum matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}

}