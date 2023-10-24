#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        priority_queue<pair<int,int>> pq;
        int n; cin >> n;
        string s; cin >> s;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            long long x = (s[i] == 'R' ? n-(i+1): i);
            sum += x;
            pq.push({n-x-1,x});
        }

        while(!pq.empty()){
            pair<int,int> x = pq.top();
            if(sum - x.second + x.first > sum){
                sum -= x.second;
                sum += x.first;
            }
            pq.pop();
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}