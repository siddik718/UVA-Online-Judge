#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
int i,j,item;
for(i=0;i<n;i++){
    item = arr[i];
    for(j= i;j>0 && arr[j-1] < item;j = j - 1){
        arr[j] = arr[j-1];
    }
    arr[j] = item;
}
}
int arr[1000];
double tmp,result;
int main(){
    int t,i,n,j;
    cin >> t;
    while(t--){
i = 0;arr[1000] = {};
j = 1;result = 0;
        while((scanf("%d",&n)), !(n==0)){
            arr[i++] = n;
        }
        insertion_sort(arr,i);
for(int k= 0;k<i;k++){
    tmp = 2*pow(arr[k],j);
    result += tmp;
    j++;
}
if(result> 5000000)
    printf("Too expensive\n");
else
    cout << result << endl;
    }
    return 0;
}
