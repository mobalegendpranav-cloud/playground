#include <bits/stdc++.h>
using namespace std;
int main(){
    // approach 1--> brute force
    int ar[3][3]={{0,1,2},{3,4,5},{1,3,1}};
    int size=3;
    
    int temp[size][size]={0};
    for(int i=0;i<=size-1;i++){
        for(int j=0;j<=size-1;j++){
            temp[i][j]=ar[size-1-j][i];

          
        }
    }

    // printing the matrix output
     for(int i=0;i<=size-1;i++){
        for(int j=0;j<=size-1;j++){
            cout<<temp[i][j]<<" ";
        
        }
        cout<<endl;
    }
    
    
    return 0;
}
//aproach 2 -- O(1) space complexity using transpose and reverse