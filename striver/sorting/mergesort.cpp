#include <bits/stdc++.h>
using namespace std;
void mergesort(int arr[],int low,int high){
    if(low>=high){
        return;
    }

    int mid= (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);

    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }

    }
    while(left<=mid){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.emplace_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];

    }



}


int main(){
    int a[6]={3,5,2,6,2,5};
    mergesort(a,0,5);

    for(int i=0;i<=5;i++){
        cout<<a[i]<<" ";

    }

    return 0;
}