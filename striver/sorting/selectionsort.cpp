#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={3,2,5,9,3,1,5};
    for (int i=0;i<=5;i++){
        
        int mini=i;
        for(int j=i;j<=6;j++){
            if (arr[j]<=arr[mini]){
               
                mini=j;
            }
        }
        int l=arr[i];
        arr[i]=arr[mini];
        arr[mini]=l;


    }
    for (int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}