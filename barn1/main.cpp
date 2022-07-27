/*
ID: nathan.31
PROG: barn1
LANG: C++
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int M, S, C, T;
    vector<int> stalls;
    vector<int> diff;

    freopen("barn1.in", "r", stdin);
    freopen("barn1.out", "w", stdout);

    cin >> M >> S >> C;
    T = S;
    for (int i = 0; i < C; ++i) {
        int temp;
        cin >> temp;
        stalls.push_back(temp);
    }
    sort(stalls.begin(), stalls.end());
    for (int i = 0; i < C; ++i) {
        if (i == 0) {
            T -= stalls[0] - 1;
        } else if (i == C - 1) {
            diff.push_back(stalls[i] - stalls[i - 1]);
            T -= (S - stalls.back());
        } else {
            diff.push_back(stalls[i] - stalls[i - 1]);
        }
    }

//    for (int i = 0; i < stalls.size(); ++i) {
//        cout << stalls[i] << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < diff.size(); ++i) {
//        cout << diff[i] << endl;
//    }
//    cout << endl;
    sort(diff.begin(), diff.end(), greater <>());
    if (C <= M) {
        cout << C << endl;
    }
    else {
        for (int i = 0; i < M - 1; ++i) {
            T -= diff[i] - 1;
        }
        cout << T << endl;
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
