#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool didbetter(int n, int m, vector<vector<int>> data) {
    int indexofn = 0;
    int indexofm = 0;
    bool result = true;

    for (int i = 0; i < data.size(); ++i) {
        for (int j = 0; j < data[i].size(); ++j) {
            if (data[i][j] == n)
                indexofn = j;
            if (data[i][j] == m)
                indexofm = j;
            //cout << indexofn << " " << indexofm << endl;
        }
        if (indexofm < indexofn)
            result = false;
        if (n == m)
            result = false;
    }

    return result;


}

int main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int K = 0;
    int N = 0;
    cin >> K >> N;
    vector<vector<int>> data;
    vector<int> temp;
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < N; ++j) {
            int tem = 0;
            cin >> tem;
            temp.push_back(tem);
        }
        data.push_back(temp);
        temp.clear();
    }
    int value = 0;
    for (int i = 1; i < N+1; ++i) {
        for (int j = 1; j < N+1; ++j) {
            if (j != i)
                if (didbetter(i, j, data)) {
                    value++;
                    //cout << "horse " << i << " did better than horse " << j << endl;
                }

        }
    }
    //cout << boolalpha << didbetter(1,0, data) << endl;
    cout << value << endl;
}

