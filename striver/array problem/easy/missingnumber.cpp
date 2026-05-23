#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int ar[]={1,3,5,4};
    int size=sizeof(ar)/sizeof(ar[0]);
    sort(ar,ar+size);
    int k=0;
    for(int i=0;i<=size-2;i++){
        if(ar[i]!=ar[i+1]-1){
            k=ar[i]+1;
            break;
        }

    }
    cout<<k;
    return 0;
}
