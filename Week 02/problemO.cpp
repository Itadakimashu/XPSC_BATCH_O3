#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    string ans = "";
    while(n != 0){
        ans += to_string(n%k);
        n = n/k;
    }
    cout << ans.size() << endl;
    return 0;
}