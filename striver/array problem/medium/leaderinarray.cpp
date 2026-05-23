#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={10,22,12,3,0,6};
    int size=sizeof(ar)/sizeof(ar[0]);
    int maxi=INT_MIN;
    for(int i=size-1;i>=0;i--){
        if(ar[i]>maxi){
            cout<<ar[i]<<" ";
        }
        maxi=max(maxi,ar[i]);

    }
    return 0;
}