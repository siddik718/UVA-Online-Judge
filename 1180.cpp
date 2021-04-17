#include<bits/stdc++.h>
using namespace std;
bool Perfect(int p){
    return (p == 2 || p == 3 || p == 5 || p == 7 || p == 13 || p == 17);
}
int main(){
int t;
cin >> t;
char c;
for(int i = 0;i<t;i++){
        int x;
cin >> x >> c;
   if(Perfect(x))
    cout << "Yes\n";
   else
    cout << "No\n";
}
return 0;
}

