#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
vector<pair<int, int>> place;
vector<vector<pair<int, int>>> results;

int square(int N) {
    return pow(N, 2);
}
int diff(pair<int, int> n, pair<int, int> m) {
    return ((square(n.first) + square(n.second)) - (square(m.first) + square(m.second)));
}

bool isValid(vector<pair<int, int>> arr) {
    int diff1 =  diff(arr[2], arr[1]);
    if (arr.size() == 1 or arr.size() == 2)
        return true;
    if (diff1 == 0)
        return false;
    for (int i = 1; i < arr.size(); ++i)
        if (diff(arr[i], arr[i-1]) != diff1)
            return false;
    return true;
}

void printArr(vector<vector<pair<int, int>>> arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            cout << arr[i][j].first << " " << arr[i][j].second << endl;
        }
        cout << endl;
    }
}
void printArr(vector<pair<int, int>> arr) {
    for (int i = 0; i < arr.size(); ++i) {
            cout << arr[i].first << " " << arr[i].second << endl;
    }
}
void solve(int N, int M, int row) {
    if(place.size() == N) {
        results.push_back(place);
        cout << "finally" << endl;
    }
    else {
        for (int col = 0; col < M; ++col) {
            place.push_back(make_pair(row, col));
            cout << place.size() << endl;
            printArr(place);
            cout << endl;
            if (isValid(place)) {
                cout << "closer" << endl;
                solve(N, M, row+1);
            }
            cout << "nah" << endl;
            place.pop_back();
        }
    }
}
int main() {
    int N, M = 0;
    string space = " ";
    freopen("airprog.in", "r", stdin);
    cin >> N >> M;
    solve(N, M+1, 0);
    cout << endl;
    cout << "this is it:" << endl;
    printArr(results);
    return 0;
}
