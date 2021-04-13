#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[100],sum,stick,ans,cnt = 1;
    while(1){
            sum = 0;;
        cin >> n;
        if(n == 0) break;
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
    stick = sum/n;ans = 0;
    for(int i = 0;i<n;i++){
                if(arr[i]>stick)
                    ans += arr[i] - stick;
            }
printf("Set #%d\n",cnt++);
printf("The minimum number of moves is %d.\n\n",ans);
    }
    return 0;
}
