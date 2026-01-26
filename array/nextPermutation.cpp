#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int nextPermutation(int a, int n){
    //int n=4;
    int ans=0;//to return answer
    vector<int>v;
    //putting the no into a vector 
    for(int i=0;i<n;i++){
        v.push_back(a%10);
        a/=10;
    }
    reverse(v.begin(),v.end());

    // finding pivot idx;
    int idx=-1;
    for(int i=n-1;i>=1;i--){
        if(v[i-1]<v[i]){
            idx= i-1;
            cout<<"idx is: "<<idx<<endl;
              break;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end()); 
    }
    else{
    //sorting the idx+1 to end
    reverse(v.begin()+(idx+1), v.end());
    cout<<"the no after sorting idx+1 to end: ";
    for(int ele: v){
        cout<<ele;
    }
    cout<<endl;
    //finding the ele just greater than pivot
    int next=-1;
    for(int i= (idx+1);i<n ;i++){
        if(v[idx]<v[i]){
         next= i;
        cout<<"next is: "<<next<<endl;
        break;
        }
    }
    swap(v[next],v[idx]);
    }
        
    for(int i=0;i<n;i++){
        ans*=10;
        ans+=v[i];
     }
    
     return ans;
}
int main(){
    int a= 1616656;
    string s= to_string(a);
    cout<<"the original no is: "<<s<<endl;
    int n= s.size();
    cout<<"the just next permutation is: "<< nextPermutation(a,n);
    // for(int ele: v){
    //     cout<<ele;
    // }
}


vector<int> nextPermutation(vector<int>&v){
    int n= v.size();
    // finding pivot idx;
    int idx=-1;
    for(int i=n-1;i>=1;i--){
        if(v[i-1]<v[i]){
            idx= i-1;
              break;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end()); 
    }
    else{
    //sorting the idx+1 to end
    reverse(v.begin()+(idx+1), v.end());

    //finding the ele just greater than pivot
    int next=-1;
    for(int i= (idx+1);i<n ;i++){
        if(v[idx]<v[i]){
         next= i;
        break;
        }
    }
    swap(v[next],v[idx]);
    }
    
 return v;
}