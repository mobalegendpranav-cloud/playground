#include <bits/stdc++.h>
using namespace std;
int main(){
    //approach 1 brute force
    int ar[]={7,6,4,3,1};
    int size=sizeof(ar)/sizeof(ar[0]);
    int maxi=0;
    for(int i=0;i<=size-2;i++){
        for(int j=i+1;j<=size-1;j++){
            maxi=max(maxi,ar[j]-ar[i]);

        }
    }
    cout<<maxi;
    return 0;
}

// approach 2 -- two pointers
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={7,1,11,5,3,6,4,};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     int maxi=0;
//     int i=0;
//     int j=size-1;
//     while(i<=j){
//         if(ar[i]<=ar[j]){
//             maxi=max(maxi,ar[j]-ar[i]);
//             i++;

//         }
//         else{
            
//             j--;
//         }
//     } 
//     i=0;
//     j=size-1;
//     while(i<=j){
//         if(ar[i]<=ar[j]){
//             maxi=max(maxi,ar[j]-ar[i]);
//             j--;    
//         }
//         else{
//             i++;
//         }
//     }
//     cout<<maxi;
//     return 0;
// }

// approach 3 using minimun of array till ith day
