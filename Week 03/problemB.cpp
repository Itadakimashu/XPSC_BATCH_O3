#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int g[n][m];
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++)
                cin >> g[row][col];
        }
        long long int ans = 0;
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                long long int sum = g[row][col];

                for(int i = 1; row - i >= 0 && col - i >= 0; i++)
                    sum += g[row - i][col - i];

                for (int i = 1; row + i < n && col+ i < m; i++) 
                    sum += g[row + i][col + i];

                for (int i = 1; row + i < n && col- i >= 0; i++)
                    sum += g[row + i][col - i];

                for (int i = 1; row - i >= 0 && col+ i < m; i++) 
                    sum += g[row - i][col + i];
                
                ans = max(sum,ans);
            }
        }
        cout << ans << endl;
    }
    return 0;
}