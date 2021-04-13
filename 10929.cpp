#include<bits/stdc++.h>
using namespace std;
int main(){
char str[1005];
int x,i,sum;
while(scanf("%s",str)){
        sum = 0;
    if(strlen(str) == 1 && str[0] == '0') break;
    for(i= 0;i<strlen(str);i++){
        x = str[i]-48;
        sum  = sum*10+x;
        sum = sum%11;
    }
    if(sum == 0)
    printf("%s is a multiple of 11.\n",str);
else
    printf("%s is not a multiple of 11.\n",str);

}
return 0;
}
