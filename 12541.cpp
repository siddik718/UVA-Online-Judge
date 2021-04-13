#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,d,m,y,i = 0,j = 1000000000;
    long long int ans = 0;
    char str[20],str_big[20],str_smll[20];
    cin >> t;
    while(t--){
scanf("%*c%s %d %d %d",str,&d,&m,&y);
ans = y*10000+m*100+d;
/**
If you want to semantically encode the year, month, and day,
one way to do it is to multiply those components by order-of-magnitude
 values large enough to juxtapose them within the integer digits:
2012-06-13 --> 20120613 = 10,000 * (2012) + 100 * (6) + 1*(13)
**/
if(ans> i ){
    i = ans;
    strcpy(str_big,str);
}
if(ans<j){
    j = ans;
    strcpy(str_smll,str);
}
}
printf("%s\n%s\n",str_big,str_smll);
    return 0;
}
