#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j = 0,count = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(i+2 < n && s[i] == 'A' &&
           s[i+1] == 'B' && s[i+2] == 'C'
        ){
            count++;
            i+=2;
        }
    }
    cout << count << endl;
    return 0;
}