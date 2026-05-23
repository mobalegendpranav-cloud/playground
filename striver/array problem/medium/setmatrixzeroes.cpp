#include <bits/stdc++.h>
using namespace std;
int main(){
    // approach 1--> brute force
    int ar[3][4]={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int sizerow=3;
    int sizecolumn=4;
    for(int i=0;i<=sizerow-1;i++){
        for(int j=0;j<=sizecolumn-1;j++){
            if(ar[i][j]==0){
                // make row -1
                for(int k=0;k<=sizerow-1;k++){
                    if(ar[k][j]!=0){
                        ar[k][j]=-1;
                    }
                }
                //make column-1
                for(int k=0;k<=sizecolumn-1;k++){
                    if(ar[i][k]!=0){
                        ar[i][k]=-1;
                    }
                }
            }
        }
    }
    for(int i=0;i<=sizerow-1;i++){
        for(int j=0;j<=sizecolumn-1;j++){
            if(ar[i][j]==-1){
                ar[i][j]=0;
            }
        }
    }
     for(int i=0;i<=sizerow-1;i++){
        for(int j=0;j<=sizecolumn-1;j++){
            cout<<ar[i][j]<<" ";
        
        }
        cout<<endl;
    }
    
    
    return 0;
}
//approach 2  --> marking row and column and then iterrating thorugh matrix to check and mark
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     
//     int ar[3][4]={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
//     int sizerow=3;
//     int sizecolumn=4;
//     int arrow[sizerow]={0};
//     int arcol[sizecolumn]={0};
//     for(int i=0;i<=sizerow-1;i++){
//         for(int j=0;j<=sizecolumn-1;j++){
//             if(ar[i][j]==0){
//                 // mark row
//                 arrow[i]=-1;
//                 //mark column
//                 arcol[j]=-1;
//             }
//         }
//     }
//     for(int i=0;i<=sizerow-1;i++){
//         for(int j=0;j<=sizecolumn-1;j++){
//             if(arrow[i]==-1){
//                 ar[i][j]=0;
//             }
//             if(arcol[j]==-1){
//                 ar[i][j]=0;
//             }
//         }
//     }
//      for(int i=0;i<=sizerow-1;i++){
//         for(int j=0;j<=sizecolumn-1;j++){
//             cout<<ar[i][j]<<" ";
        
//         }
//         cout<<endl;
//     }
    
    
//     return 0;
// }

// approach 3 optimal-- having O(1) space complexity
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int ar[3][4]={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
//     int sizerow=3;
//     int sizecolumn=4;
//     int col=1;
//     for(int i=0;i<=sizerow-1;i++){
//         for(int j=0;j<=sizecolumn-1;j++){
//             //mark row and column
//             if(j==0){
//                 if(ar[i][j]==0){
//                     col=0;
//                 }
//             }else{
//                 if(ar[i][j]==0){
//                     ar[i][0]=0;
//                     ar[0][j]=0;
//                 }
//             }

//         }
//     }
//     for(int i=1;i<=sizerow-1;i++){
//         for(int j=1;j<=sizecolumn-1;j++){
//             //mark row and column
//             if(ar[0][j]==0||ar[i][0]==0){
//                 ar[i][j]=0;
//             }
//         }
//     }
//     if(ar[0][0]==0){
//         for(int i=0;i<=sizecolumn-1;i++){
//             ar[0][i]=0;
//         }
//     }
//     if(col==0){
//         for(int i=0;i<=sizerow-1;i++){
//             ar[i][0]=0;
//         }
//     }

//     for(int i=0;i<=sizerow-1;i++){
//         for(int j=0;j<=sizecolumn-1;j++){
//             cout<<ar[i][j]<<" ";
        
//         }
//         cout<<endl;
//     }
    
    
    
    
//     return 0;
// }
