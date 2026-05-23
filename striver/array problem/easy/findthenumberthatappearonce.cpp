#include <bits/stdc++.h>
using namespace std;
int main(){
    //method 1 using hashing
    int ar[]={3,5,6,5,6,2,4,1,4,2,1};
    int size=sizeof(ar)/sizeof(ar[0]);
    map<int,int> temp;
    for(int i=0;i<=size-1;i++){
        temp[ar[i]]++;
    }
    for(auto it:temp){
        if(it.second==1){
            cout<<it.first;
            break;
        }
    }

    
    return 0;
}

// method two using nested loop iteration 

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={3,5,6,5,6,2,4,1,4,2,1};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     for(int i=0;i<=size-1;i++){
//         int count=0;
//         for(int j=0;j<=size-1;j++){
//             if(ar[i]==ar[j]){
//                 count++;
//             }

//         }
//         if(count==1){
//             cout<<ar[i];
//             break;
//         }
//     }
   
//     return 0;

// }


// approach 3 using XOR 
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={3,5,6,5,6,2,4,1,4,2,1};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     int ans=0;
//     for(int i =0; i<=size-1;i++){
//         ans=ans^ar[i];

//     }
//     cout<<ans;
    
   
//     return 0;

// }