#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={34,6,3,67,2,65,6};
    int size =sizeof(ar)/sizeof(ar[0]);
    int t=ar[0];
    for(int i=0;i<=size-2;i++){
        ar[i]=ar[i+1];
    }
    ar[size-1]=t;
    for(auto it:ar){
        cout<<it<<" ";
    }
    return 0;
}