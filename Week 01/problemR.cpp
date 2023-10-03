#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        map<string,int[3]> mp;
        int n; cin >> n;
        int x1=0,x2=0,x3=0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                string s; cin >> s;
                mp[s][i]++;
            }
        }

        for(auto it = mp.begin(); it != mp.end(); it++){
            string s = it->first;
            int *ara = it->second;
            
            if(ara[1] > 0 && ara[2] > 0)
                x1 += 0;
            else if(ara[1] > 0 || ara[2] > 0)
                x1 += ara[0];
            else
                x1 += ara[0]*3;

            if(ara[0] > 0 && ara[2] > 0)
                x2 += 0;
            else if(ara[0] > 0 || ara[2] > 0)
                x2 += ara[1];
            else
                x2 += ara[1]*3;   

            if(ara[0] > 0 && ara[1] > 0)
                x3 += 0;
            else if(ara[0] > 0 || ara[1] > 0)
                x3 += ara[2];
            else
                x3 += ara[2]*3;             
        }
        printf("%d %d %d\n",x1,x2,x3);
    }
    return 0;
}