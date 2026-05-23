#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={5,90,3,3,0,5,0,2,0,1};
    int size = sizeof(ar)/sizeof(ar[0]);
    int j=0;
    for(int i =0;i<=size-1;i++){
        if(ar[i]!=0){
            ar[j]=ar[i];
            
            j++;
        }

    }
    
    for(int i=j;i<=size-1;i++){
        ar[i]=0;
    }

    for(auto it:ar){
        cout <<it<<" ";
    }
    return 0;
}

//method 2
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={2,3,0,1,0,0,1,2};
//     int size = sizeof(ar)/sizeof(ar[0]);
//     int j=0;
//     for(int i=0;i<=size-1;i++){
//         if(ar[i]==0){
//             j=i;
//             break;
//         }
//     }
//     cout<<j<<endl;
//     for(int i=j+1;i<=size-1;i++){
//         if(ar[i]!=0){
//             ar[j]=ar[i];
//             ar[i]=0;
//             j++;

//         }
//     }
   
    
  
//     for(auto it:ar){
//         cout <<it<<" ";
//     }
//     return 0;
// }