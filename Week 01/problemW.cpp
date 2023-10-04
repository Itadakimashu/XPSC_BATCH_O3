#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y;
    cin >> x >> y;
    long long int len = 1; 
    while(x <= y){
        x *= 2;
        if(x <= y) len++;
    }
    cout << len << endl;
    return 0;
}