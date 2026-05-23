#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={1,1,1,2,2,3,3,3};
    int size=sizeof(ar)/sizeof(ar[0]);
    // approach 1 using hashing
    map<int ,int>temp;
    for(int i =0;i<=size-1;i++){
        temp[ar[i]]++;
    }
    for(auto it:temp){
        if(it.second>size/3){
            cout<<it.first<<" ";
        }
    }

    return 0;
}

// using boore voting algorithm extended --> for a number to be greater than N/k times it can have at max k-1 majority elements

// include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={1,1,1,2,2,3,3,3};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     int ele1;
//     int ele2;
//     int count1=0;
//     int count2=0;
//     for(int i=0;i<=size-1;i++){
//         if(count1==0 && ar[i]!=ele2){
//             ele1=ar[i];
//             count1=1;
//         }
//         else if(count2==0 && ar[i]!=ele1){
//             ele2=ar[i];
//             count2=1;
//         }
//         else if(ar[i]==ele1){
//             count1++;
//         }
//         else if(ar[i]==ele2 ){
//             count2++;
//         }
//         else{
//             count1--;
//             count2--;
//         }
//     }
//     count1=0;
//     count2=0;
//     for(int i=0;i<=size-1;i++){
//         if(ar[i]==ele1){
//             count1++;
//         }
//         if(ar[i]==ele2){
//             count2++;
//         }
//     }
//     if(count1>size/3)cout<<ele1;
//     if(count2>size/3)cout<<ele2;

//     return 0;
// }