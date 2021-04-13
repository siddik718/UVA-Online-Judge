#include<bits/stdc++.h>
using namespace std;
bool is_wonderfull(int n,char s[]){
    int x,sum = 0;
for(int i = 0;i<strlen(s);i++){
    x = s[i] - 48;
    sum = sum*10+x;
    sum = sum%n;
}
if(sum == 0) return true;
return false;
}
int main(){
int t,i,n,a,cnt;
char s[1005];
scanf("%d",&t);
while(t--){
        cnt=0;
    scanf("%s",s);
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a);
   if(is_wonderfull(a,s))
    cnt++;
}
if(cnt == n)
    printf("%s - Wonderful.\n",s);
else
    printf("%s - Simple.\n",s);
}
return 0;
}

