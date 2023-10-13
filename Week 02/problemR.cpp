#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ara[n];
        for(int i = 0; i < n; i++) cin >> ara[i];
        for(int i = 0; i < n; i++){
            int sz;
            string s;
            cin >> sz >> s;
            int move = 0;
            for(char c: s){
                if(c == 'U') move--;
                else move++;
            }
            ara[i] += move;
            if(ara[i] > 9) ara[i] = ara[i] % 10;
            if(ara[i] < 0) 
            ara[i] = (ara[i] % 10) == 0 ? ara[i]%10:(ara[i]%10)+10;
        }

        for(int i = 0; i < n; i++) cout << ara[i] << " ";
        cout << endl;

    }
    return 0;
}