#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int N = 0;
    int L = 0;
    freopen("meetings.in", "r", stdin);
    //freopen("meetings.out", "w", stdout);
    cin >> N >> L;
    int arr[N][3];
    double need = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
            if (j == 0)
                need += arr[i][j];
        }
    }
    need /= 2;
    int tot = 0;
    int meetings = 0;

    vector<pair<int, int>> Left;
    vector<pair<int, int>> Right;

    for (int i = 0; i < N; ++i) {
        if (arr[i][2] == -1)

    }


    return 0;
}
