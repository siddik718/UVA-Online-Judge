#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,arr[50],cnt = 0,temp;
scanf("%d",&t);
while(t--){
        cnt = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                    cnt++;
                temp = arr[j];
                arr[j] = arr[j+1] ;
                arr[j+1] = temp;
            }
        }
    }
printf("Optimal train swapping takes %d swaps.\n",cnt);

}

return 0;
}
