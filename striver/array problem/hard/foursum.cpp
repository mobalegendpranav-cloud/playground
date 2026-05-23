#include <bits/stdc++.h>
using namespace std;
int main(){
    // approach 1-- brute force find all the combinaition and check the condition
    int ar[]={1,0,-1,0,-2,2};
    int size=sizeof(ar)/sizeof(ar[0]);
    int num=0;
    set<vector<int>> temp;
    for(int i=0;i<=size-1;i++){
        for(int j=i+1;j<=size-1;j++){
            for(int k=j+1;k<=size-1;k++){
                for(int l=k+1;l<=size-1;l++){
                    if(ar[i]+ar[j]+ar[k]+ar[l]==num){
                        vector<int>s={ar[i],ar[j],ar[k],ar[l]};
                        sort(s.begin(),s.end());
                        temp.insert(s);


                    }
                }
            }

        }
    }
    for(auto it:temp){
        cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<" "<<it[3]<<endl;
    }
    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     // approach 2 using hashing have time complexity O(N^3) also have space complexity(n)
//     long long int ar[]={1,0,-1,0,-2,2};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     long long int num=0;
//     set<vector<long long int>> temp;
//     for(int i=0;i<=size-1;i++){
//         for(int j=i+1;j<=size-1;j++){
//             unordered_set <long long> hashset;
//             for(int k=j+1;k<=size-1;k++){
//                 long long int m=ar[i]+ar[j]+ar[k];
                
//                 if(hashset.find(num-m)!=hashset.end()){
//                 vector<long long> s={ar[i],ar[j],ar[k],num-m};
//                 sort(s.begin(),s.end());
//                 temp.emplace(s);
//             }

//             hashset.emplace(ar[k]);
                
//             }

//         }
//     }
//     for(auto it:temp){
//         cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<" "<<it[3]<<endl;
//     }
    
//     return 0;
// }

// approach 3-- using two pointers approach 

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// int main(){
//     long long int ar[]={1,0,-1,0,-2,2};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     sort(ar,ar+size);
//     long long int num=0;
//     vector<vector<long long int>> temp;
//     int k=2;
//     int l=size-1;
//     for(int i=0;i<=size-1&&ar[i]!=ar[i-1];i++){
//         if(i>0&& ar[i]==ar[i-1]){continue;}
//         for(int j=i+1;j<=size-1;j++){
//             if(j!=i+1 && ar[j]==ar[j-1]){continue;}
//             k=j+1;
//             l=size-1;
            
//             while(k<l ){
//                 if(ar[i]+ar[j]+ar[k]+ar[l]==num){
//                     vector<long long int> s={ar[i],ar[j],ar[k],ar[l]};
//                     temp.emplace_back(s);
//                     k++;
//                     l--;
//                     while(ar[k]==ar[k-1]){k++;}
//                     while(ar[l]==ar[l+1]){l--;}
//                 }
//                 else if(ar[i]+ar[j]+ar[k]+ar[l]<num){
//                     k++;
//                 }
//                 else{
//                     l--;
//                 }
//             }        
//     }
// }
//     for(auto it:temp){
//         cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<" "<<it[3]<<endl;
//     }
    
//     return 0;
// }
