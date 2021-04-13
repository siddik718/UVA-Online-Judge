#include<bits/stdc++.h>
using namespace std;
int main(){
char str[1001];
string s;
int x,sum,i;
while(scanf("%s",str)){
        sum = 0;
    if(strcmp(str,"0")==0) break;
for(i=0;i<strlen(str);i++){
    x = str[i] - 48 ;
    sum += x;
}
if(sum%9 != 0)
printf("%s is not a multiple of 9.\n",str);
else{
int degree = 1;
while(sum>=10){
    s = to_string(sum);
    sum = 0;
    for(int i =0;i<s.size();i++)
        sum += s[i] - 48;
    degree++;
}
printf("%s is a multiple of 9 and has 9-degree %d.\n",str,degree);
}
}
return 0;
}
