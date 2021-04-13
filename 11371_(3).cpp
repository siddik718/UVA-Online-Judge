#include<bits/stdc++.h>
using namespace std;
long long a = 0,b = 0;
int main(){
char n[20005],m[20005];
while(scanf("%s",n)!=EOF){
int x = strlen(n),k= 0;
sort(n,n+x);
for(int i = strlen(n)-1;i>=0;i--){
    m[k++] =n[i];
}
m[k] = '\0';
for(int i = 0;i<x;i++){
    if(n[i] != '0'){
        swap(n[0],n[i]);
    break;
    }
}
sscanf(n,"%lld",&a);
sscanf(m,"%lld",&b);
printf("%lld - %lld = %lld = 9 * %lld\n",b,a,(b-a),(b-a)/9);
}
return 0;
}
