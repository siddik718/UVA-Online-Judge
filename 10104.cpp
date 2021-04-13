#include<stdio.h>
long long int egcd(long long int a,long long int b,int *x,int *y){
if(a == 0){
    *x = 0;*y = 1;
    return b;
}
int x1,y1;
long long int d = egcd(b%a,a,&x1,&y1);
*x = y1 - (b/a) * x1;
*y = x1;
return d;
}
int main(){
long long int a,b;int x,y;
while(scanf("%lld %lld",&a,&b)!=EOF){
long long int GCD = egcd(a,b,&x,&y);
        if(a == b){
            int tmp=x;
            x = y;y = tmp;
        }
printf("%d %d %lld\n",x,y,GCD);
}
return 0;
}
