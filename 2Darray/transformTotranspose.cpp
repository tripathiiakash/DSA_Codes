#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter the matrix row/column no: ";
    cin>>m;
    
      int a[m][m];
      cout<<"enter mat ele: "<<endl;
     for(int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the given matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // tramsform the given square matrix to transpose matrix 
   for(int i=0; i<m; i++){
    for(int j=i+1;j<m;j++){// j starts from i+1 jisse one time swap hi ho
        //swapping
        swap(a[i][j],a[j][i]);
        // int temp= a[i][j];
        // a[i][j]= a[j][i];
        // a[j][i]= temp;
    }
   }
    //prting transpose array
    cout<<"the the trans matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
