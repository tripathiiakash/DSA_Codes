#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> merge2(vector<int>& v1, vector<int>& v2){
int m= v1.size();
int n= v2.size();
vector<int> res(m+n);

int i=0, j=0, k=0;
  while(i<=m-1 && j<=n-1){
    if(v1[i]<=v2[j]){
        res[k]= v1[i];
        i++;
        k++;
    }
    else{
         res[k]= v2[j];
        j++;
        k++;
    } 
}
    if(i==m){
        while(j<n){
            res[k]= v2[j];
            j++;
            k++;
        }
    }
    else{
        while(i<m){
            res[k]= v1[i];
            i++;
            k++;   
    }
}
// for(int ele: res){
//         cout<<ele;
//     }
return res;
}

// void merge(vector<int> &v1, vector<int> &v2, vector<int> &res){
//   int m= v1.size();
//   int n= v2.size();
//   int i=0, j=0, k=0;
//   while(i<m && j<n){
//     if(v1[i]>=v2[j]){
//         res[k]= v1[i];
//         i++;
//         k++;
//     }
//     else{
//          res[k]= v2[j];
//         j++;
//         k++;
//     } 
//   }
//   if(i==m){
//     for(int i=m;i<n;i++){
//         res[k]= v2[i];
//         k++;
//     }
//   }
//   if(j==n){
//       for(int i=n;i<m;i++){
//         res[k]= v2[i];
//         k++;
//     }
//   }
// }
int main(){
    int a[]= {2,3,5,8};
    int b[]={1,4,7,10,12};
    vector<int>v1(4);
    for(int i=0;i<4;i++){
        v1[i]=(a[i]);
    }
    vector<int>v2(5);
    for(int i=0;i<5;i++){
        v2[i]=b[i];
    }
    vector<int> res= merge2(v1,v2);
    cout<<"the merge vector is: ";
    for(int ele: res){
        cout<<ele;
    }
}



