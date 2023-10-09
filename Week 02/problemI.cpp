#include<bits/stdc++.h>
using namespace std;
int main(){
    int year; cin >> year;
    for(int i = year+1;;i++){
        //int n = to_string(year).size();
        bool freq[10],flag = true;
        for(int j = 0; j < 10;j++) freq[j] = false; 
        for(char c:to_string(i)){
            if(freq[c-'0']){
                flag = false;
                break;
            }
            freq[c-'0'] = true;
        }

        if(flag){
            cout << i << endl;
            break;
        }
        
    }
    return 0;
}