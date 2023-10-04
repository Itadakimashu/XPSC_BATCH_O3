#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x > i) mx = max(mx,x-i-1); 
        }
        cout << mx << endl;
    }
    return 0;
}