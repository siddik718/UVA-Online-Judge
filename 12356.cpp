#include<bits/stdc++.h>
using namespace std;
int main(){
int s,b,l,r;
while((cin >> s >> b) , s && b ){
    int left[100005],right[100005];
    for(int i = 1;i<=s;i++){
        left[i] = i-1;
        right[i] = i+1;
    }
    left[1] = -1;
    right[s] = -1;
    for(int i = 0;i<b;i++){
        cin >> l >> r;
        left[right[r]] = left[l];
        right[left[l]] = right[r];
        if(left[l] != -1){
            printf("%d",left[l]);
        }else
        printf("*");
        if(right[r] != -1){
            printf(" %d\n",right[r]);
        }else
        printf(" *\n");
    }
        printf("-\n");
}
    return 0;
}

