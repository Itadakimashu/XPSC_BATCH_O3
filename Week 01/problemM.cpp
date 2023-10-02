#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,count = 0;
        string s;
        int freq[26];
        cin >> n >> s;
        for(int i = 0; i < 26; i++) freq[i] = 0;
        for(int i = 0; i < n; i++){
            if(freq[s[i] - 'A'])
                count++;
            else{
                count += 2;
                freq[s[i]-'A'] = 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}