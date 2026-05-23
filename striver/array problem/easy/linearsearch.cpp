#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={2,5,5,8,3,7,3,6};
    int size=sizeof(ar)/sizeof(ar[0]);
    int k=4;
    int s=-1;
    for(int i=0;i<=size-1;i++){
        if(ar[i]==k){
            s=i;
            break;
        }
    }
    cout<<s;
    return 0;
}