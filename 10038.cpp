#include<bits/stdc++.h>
using namespace std;
void sorted(int arr[],int n){
int d = 0;
for(int i = 0;i<n-1;i++){
    if(arr[i]<arr[i+1])d++;
}
if(d == 0)cout << "Jolly\n";
else cout << "Not jolly\n";
}
int main()
{
    int t,n[3005],siz = 0,diff[3005],j;
    while(scanf("%d",&t) != EOF){
            j=0;
        for(int i = 0;i<t;i++){
            scanf("%d",&n[i]);
            siz++;
        }
           for(int i = 0;i<siz-1;i++){
            diff[j++] =abs(n[i+1] - n[i]);
        }
        sorted(diff,j-1);
    }
    return 0;
}
