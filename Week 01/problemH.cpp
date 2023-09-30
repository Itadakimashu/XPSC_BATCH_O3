#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int d[10002];

int dp(int c){
    if(c == 0) return 1;
    if(c < 0) return 0;
    if(d[c] != -1) return d[c];
    return d[c] = dp(c-a) || dp(c-b);
}

void init(){
    for(int i = 0; i < 10002; i++){
        d[i] = -1;
    }
}

int main(){
    cin >> a >> b >> c;
    init();
    if(dp(c)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
