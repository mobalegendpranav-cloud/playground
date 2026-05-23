#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={5};
    int size=sizeof(ar)/sizeof(ar[0]);
    int min1,smin=INT_MAX;
    
    for(int i=0;i<=size-1;i++){
        if (ar[i]<min1){
            int t=ar[i];
            int s=min1;
            min1=t;
            smin=s;
            continue;

        }
        if(ar[i]<smin&&ar[i]!=min1){
            smin=ar[i];
        }
    }
    cout<<smin;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={5};
    int size=sizeof(ar)/sizeof(ar[0]);
    int min1=ar[0];
    for(int i=0;i<=size-1;i++){
        if (ar[i]<min1){
            min1=ar[i];
        }
    }
    
    int min2=ar[0];
    for(int i=0;i<=size-1;i++){
        if (min2>ar[i]&& ar[i]>min1){
            min2=ar[i];
        }
    }
    cout<<min2;


    
    return 0;
}
*/