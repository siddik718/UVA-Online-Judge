#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,G,L,a,b;
scanf("%d",&t);
   while(t--){
    scanf("%d %d",&G,&L);
    a = G;
    if(L%G != 0){
        printf("-1\n");
        continue;
    }
    b = L;
    printf("%d %d\n",a,b);
   }

return 0;
}
