#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
class Solution {
public:
    int longestRepeatingSubstring(string S) {
        int n = S.size();
        S = " " + S;
        int ret = 0;
        vector < vector <int> > dp(n + 1, vector <int> (n + 1));
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                if(S[i] == S[j]){
                    dp[i][j] = max(dp[i][j], 1 + dp[i - 1][j - 1]);
                    ret = max(ret, dp[i][j]);
                }
            }
        }
        return ret;
    }
};
int main(){
    Solution ob;
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out","w", stdout);
    string what;
    int N;
    cin >> N >> what;
    cout << (ob.longestRepeatingSubstring(what) + 1) << endl;
    return 0;
}