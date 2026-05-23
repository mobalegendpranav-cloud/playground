#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={2,2,3,2,2,2,4};
    int size=sizeof(ar)/sizeof(ar[0]);
    int ans=0;
    map<int,int>temp;
    for(int i=0;i<=size-1;i++){
        if(temp[ar[i]]>size/2){
            ans=ar[i];
            break;
        }
       temp[ar[i]]++;

    }
    cout<<ans;
    return 0;
}
//approach 2-- sort the array and check the midle element , verify if necessary

//appoach 3--moore's voting algorithm  and verify

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={1,2,2};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     int element=ar[0];
//     int count=1;
//     for(int i=1;i<=size-1;i++){
        
//         if(count==0){
//             if(i==size-1){
//                 element=ar[i];
//                 break;
//             }
//             element=ar[i+1];
//             count=1;
//             i++;
//             continue;
//         }
//         if(element==ar[i]){
//             count++;
//         }
//         else{count--;}

//     }
//     cout<<element;
//     return 0;
// }


// optimized code 
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={1,2,2};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     int element;
//     int count=0;
//     for(int i=0;i<=size-1;i++){
        
//         if(count==0){
            
//             element=ar[i];
//             count=1;
            
//         }
//         else if(element==ar[i]){
//             count++;
//         }
//         else{count--;}

//     }
//     cout<<element;
//     return 0;
// }
