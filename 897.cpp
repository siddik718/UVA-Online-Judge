#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int permutable_arr[] = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71,
73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};
int siz = 22;
bool permute_arr[1000];
void solve(){
    memset(permute_arr,false,sizeof(permute_arr));
for(int i = 2;i<=1000;i++){
    for(int j = 0;j<siz;j++){
        if(permutable_arr[j] == i)
            permute_arr[i] = true;
    }
}
}
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    solve();
int t,limit,cnt;
while((cin >> t),!(t==0)){
        if(t>991){cout << "0\n";}
        else{
        cnt= 0;
if(t<10)limit = 10;
if(t>=10 && t<100)limit = 100;
if(t>=100)limit = 1000;

for(int i = t+1;i<=limit;i++){
 if(permute_arr[i]){
        cnt++;
    cout << i << endl;
    break;
 }
}
if(cnt ==0)cout << "0\n";
        }
}
return 0;
}
