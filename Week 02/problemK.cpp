#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int ara[n],freq[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        if(i == 0)freq[i] = ara[i];
        else freq[i] = ara[i] + freq[i-1];
    }
    int t; cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        if(l == 0) 
            cout << freq[r] << endl;
        else
            cout << freq[r]-freq[l-1] << endl;
    }
    return 0;
}