#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    vector<int>ara;
    cin >> n >> x;
    for(int i = 0 ; i < n; i++){
        int num; cin >> num;
        if(num != x) ara.push_back(num);
    }
    for(int i = 0; i < ara.size(); i++){
        if(i == ara.size())
            cout << ara[i];
        else cout << ara[i] << " ";
    }
    return 0;
}