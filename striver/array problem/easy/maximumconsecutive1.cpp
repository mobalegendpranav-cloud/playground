#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={1,1,0,0,1,0,1,1,1,1,1};
    int size=sizeof(ar)/sizeof(ar[0]);
    int count=0;
    int max=0;
    for(int i=0;i<=size-1;i++){
        if(ar[i]==1){
            count++;

        }
        if(ar[i]==0){
            if(max<=count){
                max=count;
            }
            count=0;
        }
    }
    if(max<count){
        cout<<count;
    }
    else{cout<<max;}
    return 0;
}