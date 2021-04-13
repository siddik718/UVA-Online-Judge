#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{if(b == 0)return a;
return gcd(b,a%b);
}
int main(){
int arr[105],n,i,mx,sum;
string s;
scanf("%d",&n);
getchar();
while(n--){
i = 0;sum= 0;
getline(cin,s);
for(int j = 0;j<s.size();j++){
    if(s[j] == ' ')continue;
    else{
        int x = s[j] - 48;
        sum = sum*10 + x;
    }
    if(s[j+1] == ' ' || s[j+1] == '\0'){
        arr[i++] = sum;
        sum = 0;
    }
}
mx = 0;
for(int j = 0;j<i-1;j++){
        for(int k = j+1;k<i;k++){
        if(gcd(arr[j],arr[k])> mx){
            mx = gcd(arr[j],arr[k]);
        }
}
}
printf("%d\n",mx);
}
return 0;
}
