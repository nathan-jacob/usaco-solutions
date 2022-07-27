#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int tot (int i, int j, int arr[]) {
    int total = 0;
    for (int k = i; k <= j; ++k) {
        total += arr[k];
    }
    return total;
}
bool search(int i, int j, int find, int arr[]) {
    for (int k = i; k < (j+1); ++k) {
        if (arr[k] == find)
            return true;
    }
    return false;
}
int main() {
    int N = 0;
    int total = 0;
    int p[N];
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> p[i];
    }


    cout << tot(0, 2, p) << endl;

    for (int i = 0; i < N; ++i) {
        for (int j = i+1; j < (N - i); ++j) {
            int to = tot(i, j, p);
            cout << "trying (" << i << "," << j << ") totalling up to " << to;
            if (to % (j - i + 1) == 0) {
                if (search(i,j,(to / (j - i + 1)),p)) {
                    total++;
                    cout << " and it worked!";
                }
            }
            cout << endl;
        }
    }


    cout << (N + total) << endl;

    cout << N << endl;
    for (int i = 0; i < N; ++i) {
        cout << p[i] << " ";
    }

    return 0;
}
