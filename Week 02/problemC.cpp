#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,mn = INT_MAX; cin >> n;
        int ara[n];
        long long int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> ara[i];
            mn = min(mn,ara[i]);
        }

        for(int i = 0; i < n; i++) sum += ara[i]-mn;
        cout << sum << endl;

    }
    return 0;
}