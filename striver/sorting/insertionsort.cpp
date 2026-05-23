#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[6]={1,2,3,3,5,6};
    for(int i=1;i<=5;i++){
        int j=i;
        while(j>0 &&ar[j-1]>ar[j]){
            
                int t=ar[j-1];
                ar[j-1]=ar[j];
                ar[j]=t;
                j--;
                
            
        }
    }
    for (int i=0;i<=5;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}