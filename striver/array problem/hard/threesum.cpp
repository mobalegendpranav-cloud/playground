#include <bits/stdc++.h>
using namespace std;
int main(){
    // approach 1-- brute force approach -- look for all the possible combination and if sum is 0 put in set after sorting 
    // approach 2--> using hashset 
    int ar[]={-1,0,1,2,-1,-4};
    int size=sizeof(ar)/sizeof(ar[0]);
    set<vector<int>> temp;
    for(int i=0;i<=size-1;i++){
        set <int> hashset;
        for(int j=i+1;j<=size-1;j++){
            if(hashset.find(-(ar[i]+ar[j]))!=hashset.end()){
                vector<int> s={ar[i],ar[j],-(ar[i]+ar[j])};
                sort(s.begin(),s.end());
                temp.emplace(s);
            }

            hashset.emplace(ar[j]);
            
        }
        
    }
    for(auto it:temp){
        cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
    }
    
    return 0;
}

// approach 3
// #include <bits/stdc++.h>
// #include <algorithm>

// using namespace std;
// int main(){
//     int ar[]={-1,0,1,2,-1,-4};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     sort(ar,ar+size);
//     set<vector<int>> temp;
//     int j=1;
//     int k=size-1;
//     for(int i=0;i<=size-1;i++){
//         j=i+1;
//         k=size-1;
//         while (j<k){
    
//         if(ar[i]+ar[j]+ar[k]==0){
//             vector<int> s={ar[i],ar[j],ar[k]};
//             sort(s.begin(),s.end());
//             temp.emplace(s);
//             j++;
//             k--;
//         }
//         else if(ar[i]+ar[j]+ar[k]<0){
//             j++;
//         }
//         else{
//             k--;
//         }}
//     }
   
//     for(auto it:temp){
//         cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
//     }
    
//     return 0;
// }