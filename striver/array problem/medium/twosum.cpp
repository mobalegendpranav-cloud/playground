#include <bits/stdc++.h>
using namespace std;
//approach 1 brute force
int main(){
    int ar[]={2,5,6,8,11};
    int k=14;
    string ans="no";
    int i1=-1;
    int j1=-1;
    int size=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<=size-2;i++){
        for(int j=i+1;j<=size-1&&j!=i;j++){
            if(ar[i]+ar[j]==k){
                ans= "yes";
                i1=i;
                j1=j;
                break;

            }
        }
        if(ans=="yes"){
            break;
        }
    }
    cout<<ans<<endl;
    cout<<i1<<" "<<j1;


    return 0;
}


//aproach two hashing

//could be optimized by just storing a[i] and index i
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={2,5,6,8,11};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     int k=14;
//     string ans="no";
//     int i1=-1;
//     int j1=-1;
//     map<int,pair<int,int>> temp;
//     for(int i=0;i<=size-1;i++){
//         temp[ar[i]]={k-ar[i],i};
//         if(temp.find(k-ar[i])!=temp.end()){
//             ans="yes";
//             i1=i;
//             j1=temp[k-ar[i]].second;
//         }

//     }
//     cout<<ans<<endl;
//     cout<<i1<<" "<<j1;

    
//     return 0;
// }

//approach 3 two pointers approach  involves sorting can only give yes on no , for indexes we have to make a new data structure
//with value and sort it which will have more space complexity so we avoid it

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// //approach 1 brute force
// int main(){
//     int ar[]={2,5,6,8,11};
//     int k=14;
//     string ans="no";
//     int size=sizeof(ar)/sizeof(ar[0]);
//     sort(ar,ar+size);
//     int i=0;
//     int j=size-1;
//     while(i<=j){
//         if(ar[i]+ar[j]==k){
//             ans="yes";
//             break;
//         }
//         if((ar[i]+ar[j])<k){
//             i++;
//             continue;

//         }
//         if((ar[i]+ar[j])>k){
//             j--;
//             continue;

//         }
//     }
//     cout<<ans;
//     return 0;
// }
