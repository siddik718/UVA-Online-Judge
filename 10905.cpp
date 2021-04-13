#include<bits/stdc++.h>
using namespace std;
bool cmp(string x,string y){
if((x+y)>(y+x))return true;
return false;
}
int main(){
    int n;
    string a[55];
    while(scanf("%d",&n),n){
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n,cmp);
        for(int i= 0;i<n;i++)
            cout << a[i];
        printf("\n");
    }
    return 0;
}
