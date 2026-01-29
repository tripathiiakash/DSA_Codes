//123 741
//456 852
//789 963
//for this do first transpose of given matric and then do row reverse prting
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

    // tramsform to transpose
   for(int i=0; i<m; i++){
    for(int j=i+1;j<m;j++){// j starts from i+1 jisse one time swap hi ho
        swap(a[i][j],a[j][i]);
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
    
    //prting rotated array
    cout<<"the the rotated matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for (int j=m-1;j>=0;j--){// so that the last row element comes first in such seq
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}