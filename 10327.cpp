#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[1000],cnt,i,j,tmp;
    while(scanf("%d",&t)!=EOF){
            cnt = 0;
        for(i=0;i<t;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<t;i++){
            for(j=0;j<t-i-1;j++){
                if(arr[j]>arr[j+1]){
                        cnt++;
                    tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]=tmp;
                }
            }
        }
    printf("Minimum exchange operations : %d\n",cnt);
    }
    return 0;
}
