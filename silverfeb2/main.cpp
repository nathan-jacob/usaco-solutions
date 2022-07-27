#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N = 0;
    int K = 0;
    cin >> N;
    cin >> K;
    vector<int> arr;
    vector<int> ar;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        arr.push_back(temp - (temp % 12));
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < N; ++i) {
        if (i == 0 or arr[i] == arr[i-1]) {
            ar.push_back(arr[i]);
        }
    }
//    for (int i : ar) {
//        cout << i << endl;
//    }
    cout << ar.size()*12 << endl;
    return 0;
}
