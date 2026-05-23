#include <bits/stdc++.h>
#include<algorithm>
#include <functional>
using namespace std;
int main(){
    int ar[]={1,2,3,4,5};
    int size=sizeof(ar)/sizeof(ar[0]);
    int l=0;
    int mini=INT_MAX;
    int s=0;
    for(int i=size-1;i>0;i--){
        if(ar[i-1]<ar[i]){
            l=i-1;
            

            break;

        }
        
    }
    for(int i=l+1;i<=size-1;i++){
         if(mini>ar[i] && ar[i]>ar[l]){
            s=i;
            mini=ar[i];
        }
    }
    swap(ar[l],ar[s]);
    sort(ar+l+1,ar+size);
    for(auto it:ar){
        cout<<it<<" ";
    }
    return 0;
}