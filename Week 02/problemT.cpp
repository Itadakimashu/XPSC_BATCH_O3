#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    map<int,int> mp;
    while(t--){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto pairs: mp){
        if(pairs.second == 1){
            cout << pairs.first << endl;
            break;
        }
    }
    return 0;
}