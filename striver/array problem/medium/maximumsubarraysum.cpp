#include <bits/stdc++.h>
using namespace std;
int main(){
    // approach 1 brute force through all subarray and find sum compare with max
     
    //approach 2 kadane's algorithm
    int ar[]={-4,-1,3,-2,4,5,2};
    int size=sizeof(ar)/sizeof(ar[0]);
    int maxi= INT_MIN;
    int sum=0;
    int start=0;
    int end;
    for(int i=0;i<=size-1;i++){
        if(sum==0){
            start=i;
            
        }
        sum=sum+ar[i];
        
        if(sum>maxi){
            maxi=sum;
            end=i;
            
        }
        if(sum<0){
            sum=0;
            
        }

    }
    cout<<maxi<<endl;
    cout<<start<<" "<<end;
    

    return 0;
}