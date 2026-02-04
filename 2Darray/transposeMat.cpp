#include<iostream>
using namespace std;

int main(){
    int m,n,p,q;
    cout<<"enter the matrix row and column no: ";
    cin>>m>>n;
    
      int a[m][n];
      cout<<"enter mat ele: "<<endl;
     for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the given matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // making new matrix transpose of matrix
    int trans[n][m];// n*m hoga transpose naaki m*n
    for (int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            trans[j][i]= a[i][j];
        }
    }
    //prting transpose array
    cout<<"the the trans matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }

    //just printing no new transpose matrix creation
    // cout<<"the trans matrix is: "<<endl;
    //  for (int j=0;j<n;j++){
    //     for(int i=0;i<m;i++){
       
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
