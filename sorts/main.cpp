#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    freopen("sort.in", "r", stdin);
    freopen("sort.out", "w", stdout);

    int N = 0;
    cin >> N;
    vector<pair<int,int>> arr;
    for (int i = 0; i < N; ++i) {
        int temp = 0;
        cin >> temp;
        arr.push_back(make_pair(temp, i));
    }
    sort(arr.begin(), arr.end());
    int max = 0;
    for (int i = 0; i < N; ++i) {
        max = (abs(arr[i].second - i) > max) ? (abs(arr[i].second - i)) : max;
    }
    cout << ++max << endl;


    return 0;
}
