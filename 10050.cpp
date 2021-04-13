#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,a,b,j,k,h = 0,cnt = 0,ab,ac;
    cin >> t;
    while(t--){
            int New[3650] = {};
            int arr[3650] = {};
            j = 0;ab = 0;
        cin >> n;
        cin >> m;
        for(int i = 0;i<m;i++){
            scanf("%d",&a);
            k = 1;
                j = a;
            while(a<=n){
                a = j*k++;
                if(a<=n)
                New[h++] = a;
            }
        }
    sort(New,New+h);b=0;
for(int i = 0;i<h;i++){
    if(New[i] != New[i+1]){
        New[b++] = New[i];
    }
}cnt = 0 ;ac = 0;
for(int i = 0;i<b;i++){
        if(New[i] != 0){
            New[ac++] = New[i];
    cnt++;
        }
}
        for(int i = 6;i<=n;i = i+7){
        arr[ab++] = i;
    }
      for(int i = 7;i<=n;i = i+7){
        arr[ab++] = i;
    }
    for(int i = 0;i<ab;i++){
        for(int j = 0;j<ac;j++){
            if(arr[i] == New[j])
                cnt--;
        }
    }
printf("%d\n",cnt);
    }

    return 0;
}

