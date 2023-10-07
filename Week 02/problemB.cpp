#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int h = -1;
        map<int,int> k;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            k[x]++;
            if(k[x] >= 3) h = x;
        }
        cout << h << endl;
    }
    return 0;
}