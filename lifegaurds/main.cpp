#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, O, P;
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);
    cin >> N;
    vector<pair<int,int>> nums;
    vector<pair<int,int>> inp;

    for (int i = 0; i < N; ++i) {
        cin >> O >> P;
        nums.push_back(make_pair( O ,P));

    }


    return 0;
}
