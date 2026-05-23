#include <bits/stdc++.h>
using namespace std;
int check(int ar[],int start,int end){
    int sum=0;
    for(int i=start;i<=end;i++){
        sum=sum+ar[i];
    }
    return sum;
}
int main(){
    int ar[]={10,1,-1,-10};
    int size=sizeof(ar)/sizeof(ar[0]);
    int n=size-1;
    int s=0;
    int k=0;
    for(int i=0;i<=size-1;i++){
        int j=0;
        while(j<=i){
            if(check(ar,j,n-i+j)==k){
                s=size-i;
                
                break;
            }
        
            j++;
            
        }
        if(s!=0){
            break;
        }
    }
    cout<<s;
  

    return 0;
}


//approach 2--using two pointers work only for positive numbers


// #include <bits/stdc++.h>
// using namespace std;
// int check(int ar[],int start,int end){
//     int sum=0;
//     for(int i=start;i<=end;i++){
//         sum=sum+ar[i];
//     }
//     return sum;
// }
// int main(){
//     int ar[]={15,1,2};
//     int size =sizeof(ar)/sizeof(ar[0]);
//     int i=0;
//     int j=0;
//     int maxi=0;
//     int count=0;
//     int k=15;
//     while(j<=size-1){
//         if(check(ar,i,j)==k){
//             maxi=max(j-i+1,maxi);
//             i++;
//             j++;

//         }
//         if(check(ar,i,j)<k){
//             j++;
//         }
//         if(check(ar,i,j)>k){
//             i++;
//         }
//     }
//     cout<<maxi;
//     return 0;
// }

//approach two using hashing works for both negative and zero
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int ar[]={10,5,0,-5};
//     int size =sizeof(ar)/sizeof(ar[0]);
//     int k=0;
//     int maxi=0;
//     int sum=0;
//     map<int,int> temp;
//     for(int i=0;i<=size-1;i++){
//         sum=sum+ar[i];
//         if(sum==k){
//             maxi=max(maxi,i+1);
//         }
//         if(temp.find(sum-k)!=temp.end()){
//             maxi=max(maxi,i-temp[sum-k]);
            
//         }
//         if(!(temp.find(sum)!=temp.end())){
//             temp[sum]=i;
//         }

//     }
//     cout<<maxi<<endl;
//     return 0;
// }
