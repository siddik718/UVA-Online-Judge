#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,arr[12],arr2[12],sum,help[12],cnt = 1;
    while(1){
           sum = 0; help[12] = {0};
        cin >> t;
            sum = t;
        if(t<0) break;
        for(int i = 0;i<12;i++){
            scanf("%d",&arr[i]);
        }
        for(int i = 0;i<12;i++){
            scanf("%d",&arr2[i]);
        }
        for(int i = 0;i<12;i++){
            help[i] = sum;
           sum += arr[i];
           if(help[i] >= arr2[i])
            sum  -=arr2[i];
        }
        printf("Case %d:\n",cnt++);
        for(int i = 0;i<12;i++){
            if(help[i] >= arr2[i]){
            cout << "No problem! :D" << endl;
            }
            else
            cout << "No problem. :(" << endl;
        }
    }
    return 0;
}

