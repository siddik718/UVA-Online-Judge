#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,arr[105][105] = {},col_sum[105] = {};
   int row_sum[105] = {};
   while(scanf("%d",&n),n){
    for(int i = 0;i<n;i++)
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(i == 0) col_sum[j] = arr[i][j];
            else col_sum[j] += arr[i][j];
            if(j == 0) row_sum[i] = arr[i][j];
            else row_sum[i] += arr[i][j];
        }
   int r_ans = 0,c_ans = 0,r,c;
    for(int i = 0;i<n;i++){
        if(row_sum[i]%2==1) r_ans++;
        if(col_sum[i]%2==1) c_ans++;
        for(int j = 0;j<n;j++){
            if(row_sum[i]%2==1 && col_sum[j]%2==1){
                r  = i+1,c = j+1;
            }
        }
    }
    if(r_ans>1 || c_ans>1)
        printf("Corrupt\n");
    else if(r_ans == 0 && c_ans  == 0)
        printf("OK\n");
    else if(r_ans == 1 && c_ans == 1)
    printf("Change bit (%d,%d)\n",r,c);
   }
    return 0;
}
