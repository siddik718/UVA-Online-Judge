#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c,p,m;
while(cin >>  n && n){
        int err = 0,arr[10005] ={};
    for(int i = 0;i<n;i++){
        scanf("%d %d",&c,&p);
        m = i+p; // index+position earn
        if(m<0 || m>=n) err = 1; // m can't be 0 or greter then n
        if(!err && arr[m]) err = 1; // !err = 0 && arr[m] = 1 == err
        if(err) continue;
        arr[m] = c;
    }
if(err){
    cout << "-1\n";
}else{
for(int i = 0;i<n-1;i++){
    printf("%d ",arr[i]);
}printf("%d",arr[n-1]);
cout << endl;
}
}
    return 0;
}
