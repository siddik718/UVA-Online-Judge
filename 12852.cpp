#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b){
return (a%b==0)?b:gcd(b,a%b);
}
long long int arr_lcm(long long int arr[],int n){
   long long  int result = ((arr[0]*arr[1])/(gcd(arr[0],arr[1])));
for(int i = 2;i<n;i++){
    result = ((arr[i]/(gcd(arr[i],result)))*result);
}
return result;
}
int main(){
    int t,n;long long int arr[105];
    scanf("%d",&t);
    for(int i = 1;i<=t;i++){
        scanf("%d",&n);
        for(int j = 0;j<n;j++){
            scanf("%lld",&arr[j]);
        }
cout << "Case " << i <<": "<< arr_lcm(arr,n)*35 << endl;//(5+10+20) == 35
    }
return 0;
}
