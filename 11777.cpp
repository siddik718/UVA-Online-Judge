#include<bits/stdc++.h>
using namespace std;
int main(){
int t,t1,t2,f,a,c1,c2,c3,c,cnt = 1,x;
scanf("%d",&t);
while(t--){
double result = 0;
    scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&c1,&c2,&c3);
    x = min(c1,min(c2,c3));
   c = c1+c2+c3-x;
    result = (double)t1+t2+f+a+((double)c/2.0);
    printf("Case %d: ",cnt++);
    if(result>=90){
        printf("A\n");
    }else if(result>=80){
        printf("B\n");
    }else if(result>=70){
        printf("C\n");
    }else if(result>=60){
        printf("D\n");
    }else{
        printf("F\n");
    }
}
return 0;
}



