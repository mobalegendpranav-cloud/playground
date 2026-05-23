#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={4,6,3,2,6,7,5,84,433,35};
    int j=sizeof(ar)/sizeof(ar[0]);
    
    int max=ar[0];
    for(int i=0;i<=j-1;i++){
        if (max<ar[i]){
            max=ar[i];
        }
    }
    cout<<max;
    return 0;
}