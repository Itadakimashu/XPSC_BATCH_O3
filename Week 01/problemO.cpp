#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int freq[26],flag = 0;
    cin >> s;
    for(int i = 0; i < 26; i++) freq[i] = 0;
    for(int i = 0; i < s.size(); i++){
        freq[s[i] - 'a'] = 1; 
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] == 0){
            char x = 'a' + i;
            cout << x << endl;
            flag = 1;
            break;
        }
    }

    if(!flag) cout << "None" << endl;
    return 0;
}