#include <bits/stdc++.h>
using namespace std;
int main(){
    //approach 1 using set
    int ar1[]={2,4,4,5,6,7,7,7,8};
    int ar2[]={1,2,3,3,5,6,6};
    int size1=sizeof(ar1)/sizeof(ar1[0]);
    int size2=sizeof(ar2)/sizeof(ar2[0]);
    set<int> temp;
    for(int i=0;i<=size1-1;i++){
        temp.insert(ar1[i]);
    }
    for(int i=0;i<=size2-1;i++){
        temp.insert(ar2[i]);
    }

    for(auto it:temp){
        cout<<it<<" ";
    }

    // // approach 2 using map

    // int ar1[]={2,4,4,5,6,7,7,7,8};
    // int ar2[]={1,2,3,3,5,6,6,9};
    // int size1=sizeof(ar1)/sizeof(ar1[0]);
    // int size2=sizeof(ar2)/sizeof(ar2[0]);
    // map<int,int> temp;
    // for(int i=0;i<=size1-1;i++){
    //     temp[ar1[i]]++;
    // }
    // for(int i=0;i<=size2-1;i++){
    //     temp[ar2[i]]++;
    // }
    // for(auto it:temp){
    //     cout<<it.first<<" ";
    // }

    //approach 3 using pointers
//  int ar1[]={1,1,1,2};
//     int ar2[]={1,1,4,4};
//     int size1=sizeof(ar1)/sizeof(ar1[0]);
//     int size2=sizeof(ar2)/sizeof(ar2[0]);
//     int i=0;
//     int j=0;
//     vector<int> temp;
//     while(i<=size1-1 & j<=size2-1 ){
//         if(ar1[i]==ar1[i+1] & i<=size1-2){
//             i++;
//             continue;
//         }
//         if(ar2[j]==ar2[j+1] and j<=size2-2){
//             j++;
//             continue;
//         }
//         if(ar1[i]==ar2[j]){
//             temp.emplace_back(ar1[i]);
//             i++;
//             j++;  
//         }
//         else{
//             if(ar1[i]<ar2[j]){
//                 temp.emplace_back(ar1[i]);
//                 i++;
//             }
//             if(ar1[i]>ar2[j]){
//                 temp.emplace_back(ar2[j]);
//                 j++;
//             }
//         }
//     }
//    for(int s=i-1;s<=size1-2;s++){
//         if(ar1[s]!=ar1[s+1]){
//             temp.emplace_back(ar1[s+1]);

//         }
//     }
//     for(int s=j-1;s<=size2-2;s++){
//         if(ar2[s]!=ar2[s+1]){
//             temp.emplace_back(ar2[s+1]);

//         }
//     }
//     for(auto it:temp){
//         cout<<it<<" ";
//     }

    

    return 0;
}
