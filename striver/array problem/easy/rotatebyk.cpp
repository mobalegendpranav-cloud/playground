#include <bits/stdc++.h>
using namespace std;

//approach 1
int main(){
    int ar[]={34,6,3,67,2,65,6};
    
    int size =sizeof(ar)/sizeof(ar[0]);
    int r=8%size;
    int t[r];
    for(int i=0;i<=r-1;i++){
        t[i]=ar[i];
    }
    for(int i=0;i<=size-2;i++){
        ar[i]=ar[i+r];
    }
    for(int i=0;i<=r-1;i++){
        ar[size-r+i]=t[i];
    }
   
    for(auto it:ar){
        cout<<it<<" ";
    }
    return 0;
}
//aproach 2
// by reverse method
// #include <bits/stdc++.h>
// using namespace std;
// void reverse(int ar[],int start, int end){
//     if(start>=end){
//         return;
//     }
//     int t=ar[start];
//     ar[start]=ar[end];
//     ar[end]=t;
//     reverse(ar,start+1,end-1);
// }
// int main(){
//     int ar[]={3,5,6,4,2,6,7,2};
//     int size= sizeof(ar)/sizeof(ar[0]);
//     string s="right";
//     int d= 2;
//     int r=d%size;
//     if (s=="left"){
//         reverse(ar,0,r-1);
//         reverse(ar,r,size-1);
//         reverse(ar,0,size-1);
   
//     }
//     if(s=="right"){
//         reverse(ar,0,size-r-1);
//         reverse(ar,size-r,size-1);
//         reverse(ar,0,size-1);

//     }

//     for(auto it :ar){
//         cout<<it<<" ";
//     }


// }