#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,len;
    char str[102];
    while(scanf("%d",&t) && (t != 0)){
        scanf("%*c%s",str);
        len = strlen(str);
        n = len/t;
        for(int i = 0;i<len;i += n){
            for(int j = i+n-1;j>=i;j--){
                printf("%c",str[j]);
            }
        }
        cout << endl;
    }

    return 0;
}
