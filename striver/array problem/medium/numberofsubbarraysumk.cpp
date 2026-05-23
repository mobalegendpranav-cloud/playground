#include <bits/stdc++.h>
using namespace std;
int check(int ar[],int start,int end){
    int sum=0;
    for(int i=start;i<=end;i++){
        sum=sum+ar[i];
    }
    return sum;
}
int main(){
    int ar[]={10,1,-1,-10};
    int size=sizeof(ar)/sizeof(ar[0]);
    int n=size-1;
    int s=0;
    int k=0;
    int count=0;
    for(int i=0;i<=size-1;i++){
        int j=0;
        while(j<=i){
            if(check(ar,j,n-i+j)==k){
                count++;   
            }
            j++;  
        }   
    }
    cout<<count;
    return 0;
}

