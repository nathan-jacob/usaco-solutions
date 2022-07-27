/*
ID: nathan.31
PROG: milk
LANG: C++
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    freopen("milk.in", "r", stdin);
    freopen("milk.out", "w", stdout);
    int N;
    int M;
    cin >> N >> M;
    int T = N;
    int total = 0;
    vector<pair <int,int>> O;
    for (int i = 0; i < M; ++i) {
        int tempo;
        int tempt;
        cin >> tempo >> tempt;
//        cout << tempo << " " << tempt << endl;
        O.push_back(make_pair(tempo, tempt));
    }

    // print out all the values from O
//    for (int i = 0; i < O.size(); ++i) {
//            cout << O[i].first << " " << O[i].second << endl;
//    }
    sort(O.begin(), O.end());
    int i = 0;
    while (T != 0) {
        if (O[i].second <= T) {
            T -= O[i].second;
            total += O[i].first * O[i].second;
            i++;
        }
        else if(O[i].second > T) {
            total += O[i].first * T;
            T -= T;
        }
    }
    cout << total << endl;
    return 0;
}
