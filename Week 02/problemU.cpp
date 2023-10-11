#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int count = 0;
        int ara[4];
        for(int i = 0; i < 4; i++){
            cin >> ara[i];
            if(i > 0 && ara[i] > ara[0]) count++;
        }
        cout << count << endl;
    }
    return 0;
}