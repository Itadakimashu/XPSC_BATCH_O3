#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        map<char,int> k;
        int n; cin >> n;
        string s;
        bool flag = false;
        cin >> s;
        
        if(n == 5){
            for(char c: s){
                k[c]++;
            }
            if(k['T'] == 1 && k['i'] == 1 && k['m'] == 1 &&
                k['u'] == 1 && k['r'] == 1)
                flag = true;
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}