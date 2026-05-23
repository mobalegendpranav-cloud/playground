#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={1,2,2,3,3,3,4,5};
    int size=sizeof(ar)/sizeof(ar[0]);
    vector<int> temp;
    temp.emplace_back(ar[0]);
    for(int i=0;i<=size-2;i++){
        if(ar[i]!=ar[i+1]){
            temp.emplace_back(ar[i+1]);

        }
    }
    int s=temp.size();
  
    for(int i =0;i<=s-1;i++){
        ar[i]=temp[i];

    }
    for(int i=s;i<=size-1;i++){
        ar[i]=0;
    }

    for(auto it :ar){
        
        cout<<it<<" ";
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={1,2,3,3,5,5,5,8,9,9,9};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     int i=0;
//     for(int j=0;j<=size-1;j++){
//         if(ar[j]!=ar[i]){
//             ar[i+1]=ar[j];
//             i++;
//         }
        
//     }
//     cout<<i+1<<endl;
//     for(auto it:ar){
//         cout<<it<<" ";
//     }
    
    
//     return 0;
// }
