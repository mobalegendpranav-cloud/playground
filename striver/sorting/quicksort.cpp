#include <bits/stdc++.h>
using namespace std;
//time complexity is NlogN
int piv(int ar[], int low, int high){
    int piv=ar[low];
    int i=low;
    int j=high;
    while(i<j){
        while(ar[i]<=piv&& i<high){
            i++;
        }
        while(ar[j]>piv&& j>low){
            j--;
         }
         if (i<j){
            int t=ar[j];
            ar[j]=ar[i];
            ar[i]=t;
        }
    }
    int s=ar[j];
    ar[j]=piv;
    ar[low]=s;
    return j;

}

void quicksort(int ar[],int low, int high){
    if(low<high){
        int pivoti= piv(ar,low,high);
        quicksort(ar,low,pivoti-1);
        quicksort(ar,pivoti+1,high);
        cout<<"runs";

    }

}
int main(){
    int ar[7]={2,3,4,1,6,4,3};
    quicksort(ar,0,6);
    for (int i=0; i<=6;i++){
        cout<<ar[i]<<" ";

    }
    return 0;
}