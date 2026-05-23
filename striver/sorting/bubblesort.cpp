#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[6]={1,2,3,4,6,5};
    for(int i=5;i>0;i--){
        int count=0;
        for(int j=0;j<=i;j++){
            if(ar[j]>ar[j+1]){
                int t=ar[j];
                count++;
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
            
        }
        if(count==0){
            break;
        }
        cout<<"runned";

    }
    for(int i=0;i<=5;i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}