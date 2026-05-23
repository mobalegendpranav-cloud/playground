#include <bits/stdc++.h>
using namespace std;
bool check(int ar[],int n){
    int count =0;
    for (int i=0;i<=n-2;i++){
        if (ar[i]>ar[i+1]){
            return false;

        }
        
    }
    return true;
}
int main(){
    int arr[]={1,2,3,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<check(arr,size);
    return 0;
}