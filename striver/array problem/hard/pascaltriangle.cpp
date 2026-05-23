#include <bits/stdc++.h>
using namespace std;
int ncr(int n, int r){
    int ans=1;
    r=min(r,n-r);
    for(int i=n;i>=n-r+1;i--){
        if(i>=(n-r+1)){
            ans=ans*i;
            ans=ans/(n-i+1);
        }
        
    }
    return ans;
}
int main(){
    //print nth row rth element --> n-1Cr-1
    int n=5;
    int r=3;
    int ans=ncr(n-1,r-1);
    cout<<ans<<endl;
    
    // print nth row-- nth row have nth element 
    for(int i=1;i<=n;i++){
        cout<<ncr(n-1,i-1)<<" ";
    }
    cout<<endl;
    // print full trirangle till nth row
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ncr(i-1,j-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}