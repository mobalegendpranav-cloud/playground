#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    //approach 1 --brute force
    // iterate through every element and find if x+1 exist if yes chang it to x+1 update the counter and search for x+2


    // approach 2-- using sorting 



    int ar[]={100,200,1,4};
    int size=sizeof(ar)/sizeof(ar[0]);
    sort(ar,ar+size);
    int count=1;
    int maxi=0;
    for(int i=1;i<=size-1;i++){
        if(ar[i]==ar[i-1]+1){
            count++;
        }
        else{
            maxi=max(maxi,count);
            count=1;
        }
    }
    cout<<maxi;
    return 0;
}
// approach 3 using set data structure
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={100,200,2,3,4,1};
//     int size=sizeof(ar)/sizeof(ar[0]);
//     unordered_set<int> temp;
//     for(int i=0;i<=size-1;i++){
//         temp.emplace(ar[i]);
//     }
//     int maxi=0;
//     while(!temp.empty()){
//         int start=*temp.begin();
//         int count=0;
//         temp.erase(start);
//         int x=0;
//         for(int i=1;i<=size;i++){
//             if(temp.find(start-i)!=temp.end()){
//                 temp.erase(start-i);
//             }
//             else{
//                 x=i-1;
//                 break;
//             }
//         }
//         count=x+1;
//         for(int i=1;i<=size;i++){
//             if(temp.find(start+i)!=temp.end()){
//                 temp.erase(start+i);
//                 count++;
                
//             }else{
//                 break;
//             }
//         }
//         maxi=max(maxi,count);
//     }
//     cout<<maxi;
// return 0;
// }
// approach 4-- using set but no erase() required
