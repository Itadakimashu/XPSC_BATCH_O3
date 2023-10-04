#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    bool freq[n+1];
    for(int i = 1; i <= n; i++) freq[i] = false;
    for(int i = 0; i < n-1; i++){
        int x; cin >> x;
        freq[x] = true;
    }
    for(int i = 1; i <= n; i++){
        if(!freq[i]) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}