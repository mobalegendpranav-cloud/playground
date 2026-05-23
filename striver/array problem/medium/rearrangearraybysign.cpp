#include <bits/stdc++.h>
using namespace std;
int main(){
    // approach 1 --> brute force approach make two new vectors storing positive and negative integers from array place them alternately later

    //approach 2--> two pointer method----not correct error in relative positioning and cant handle 0 in the matrix
    int ar[]={1, 2, 5, 1, 4, -1, -2, -3, -4, -5};
    int size=sizeof(ar)/sizeof(ar[0]);
    int j=1;
    int i=0;
    while(j<=size-1){
        if(ar[i]*ar[j]>0){
            j++;
        }
        else{
            swap(ar[i+1],ar[j]);
            i++;
            
        }
    }
    for(auto it:ar){
        cout<<it<<" ";
    }
    return 0;
}
//approach 3-
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={1,2,-3,-1,-2,3};
    
//     int size=sizeof(ar)/sizeof(ar[0]);
//     int temp[size]={0};
//     int j=1;
//     int k=0;
//     for(int i=0;i<=size-1;i++){
//         if(ar[i]>0){
//             temp[k]=ar[i];
//             k=k+2;
//         }
//         else{
//             temp[j]=ar[i];
//             j=j+2;  
//         }
//     }
//     for(auto it:temp){
//         cout<<it<<" ";
//     }
    
// return 0;
// }
