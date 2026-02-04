//storing student marks using column side
#include<iostream>
using namespace std;
int main(){
    int marks[4][2];
    //taking roll no and marks input
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cin>> marks[i][j];
        }
    }
    //prt the roll and marks
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
}