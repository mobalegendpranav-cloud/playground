#include <bits/stdc++.h>
using namespace std;
int main(){
    //approach 1 
    // use any sorting algorithm and it will take time complexity of nlogn

    // approach 2 using hasing count all the digits i, count no of 0,1,2 and then change first element to zero then to 1 and then to 2 
    // this takes time complexity of 2n

    // approach 3 dutch national flag algorithm 

    int ar[]={1,0,2,0,2,1,0,1,1,2,0};
    int size= sizeof(ar)/sizeof(ar[0]);
    int low=0;
    int mid=0;
    int high=size-1;
    while(mid<=high){
        if(ar[mid]==0){
            swap(ar[mid],ar[low]);
            low++;
            mid++;
            continue;

        }
        if(ar[mid]==1){
            mid++;
            continue;
        }
        if(ar[mid]==2){
            swap(ar[mid],ar[high]);
            high--;
            continue;
        }
        

    }
    for(auto it:ar){
        cout<<it<<" ";
    }
    return 0;
}