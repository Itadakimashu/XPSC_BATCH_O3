#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<pair<int,int>> pq;
    int n; cin >> n;
    int ara[n];
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        mx = max(mx,ara[i]);
    }
    for(int i = 2; i <= mx; i++){
        int cc = 0;
        for(int j = 0; j < n; j++){
            if(ara[j] % i == 0) cc++;
        }
        pq.push({cc,i});
    }
    cout << pq.top().second << endl;
    return 0;
}