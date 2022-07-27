#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool verify(vector<vector<string>> beside, vector<string> data) {
    bool result = true;
    for (int i = 0; i < beside.size(); ++i) {
        for (int j = 0; j < data.size(); ++j) {
            if (data[j] == beside[i][0]) {
                if (j == 0) {
                    if ((data[j + 1] != beside[i][1])) {
                        result = false;
                    }
                }
                if (j == 7) {
                    if ((data[j-1] != beside[i][1])) {
                        result = false;
                    }
                }
                else {
                    if ((data[j-1] != beside[i][1]) and (data[j+1] != beside[i][1])) {
                        result = false;
                    }
                }

            }
        }
    }
    return result;
}
int main() {
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    int N;
    cin >> N;
    vector<vector<string>> beside;
    for (int i = 0; i < N; ++i) {
        vector<string> temp;
        string kill;
        string tempp;
        cin >> tempp;
        temp.push_back(tempp);
        for (int j = 0; j < 4; ++j) {
            cin >> kill;
        }
        cin >> tempp;
        temp.push_back(tempp);
        beside.push_back(temp);
        temp.clear();
        tempp = "";
    }
//    for (int i = 0; i < beside.size(); ++i) {
//        for (int j = 0; j < beside[i].size(); ++j) {
//             cout << beside[i][j] << " ";
//        }
//        cout << endl;
//    }

    string cows[] = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
    vector<string> test;
    bool continued = true;
    int a,b,c,d,e,f,g, h;
    for(a=0; a<8; a++){
        for(b=0; b<8; b++){
            for(c=0; c<8; c++){
                for(d=0; d<8; d++){
                    for(e=0; e<8; e++) {
                        for (f = 0; f < 8; f++) {
                            for (int g = 0; g < 8; g++) {
                                for (int h = 0; h < 8; ++h) {
                                    if (continued) {
                                        if (!(a == b || a == c || a == d || a == e || a == f || a == g || a == h ||
                                              b == c || b == d || b == e || b == f || b == g || b == h || c == d ||
                                              c == e || c == f || c == g || c == h || d == e || d == f || d == g ||
                                              d == h || e == f || e == g || e == h || f == g || f == h || g == h)) {
                                            test.push_back(cows[a]);
                                            test.push_back(cows[b]);
                                            test.push_back(cows[c]);
                                            test.push_back(cows[d]);
                                            test.push_back(cows[e]);
                                            test.push_back(cows[f]);
                                            test.push_back(cows[g]);
                                            test.push_back(cows[h]);
                                            if (verify(beside, test)) {
                                                continued = false;
                                            }
                                            if (continued) {
                                                test.clear();
                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

        for (int j = 0; j < test.size(); ++j) {
            cout << test[j] << endl;
        }
    return 0;
}
/*
 * Beatrice
 * Belinda
 * Bella
 * Bessie
 * Betsy
 * Blue
 * Buttercup
 * Sue
 */
