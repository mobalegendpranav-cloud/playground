#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[3][4]={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int sizerow=3;
    int sizecolumn=4;
    int left=0;
    int right=sizecolumn-1;
    int up=0;
    int bottom=sizerow-1;
    while(left<=right && up<=bottom){
        //print left to right
        for(int i=left;i<=right;i++){
            cout<<ar[up][i]<<" ";

            
        }
        up++;
        //print up to bottom
        for(int i=up;i<=bottom;i++){
            cout<<ar[i][right]<<" ";

           
        }
        right--;
        //print right to left
        if(up<=bottom){
        for(int i=right;i>=left;i--){
            cout<<ar[bottom][i]<<" ";
           
            
        }}
        bottom--;
        //print bottom to up
        if(left<=right){
        for(int i=bottom;i>=up;i--){
            cout<<ar[i][left]<<" ";
        
        }}
        left++;

    }  
    return 0;
}