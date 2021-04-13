#include<bits/stdc++.h>
using namespace std;
int is_square_root(long long int x,long long int n){
return (x*x == n)? 1 : 0;
}
int main()
{long long int x,n;
while(scanf("%lld",&n)){
      if(n == 0)break;
    x = sqrt(n);
    if(is_square_root(x,n))
        cout << "yes\n";
    else
        cout << "no\n";
}
    return 0;
}

