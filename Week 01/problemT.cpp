#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ara[n];
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        sum += ara[i];
    }
    sort(ara,ara+n,greater<int>());
    if(sum % 2 == 0) cout << sum << endl;
    else{
        for(int i = n-1; i >= 0; i--){
            if(ara[i] % 2 != 0){
                sum -= ara[i];
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}