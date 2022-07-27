/*
ID: nathan.31
PROG: transform
LANG: C++
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<vector<char>> rotate90(vector<vector<char>> a, int N)
{

    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
            char temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
    return a;
}

vector<vector<char>> reflect(vector<vector<char>> a, int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N/2; ++j) {
            char temp = a[i][N-j-1];
            a[i][N-j-1] = a[i][j];
            a[i][j] = temp;
        }
    }
    return a;
}


void printMatrix(vector<vector<char>> arr, int N)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
    cout << endl;
}

// Driver code
int main()
{
    freopen("transform.in", "r", stdin);
    freopen("transform.out", "w", stdout);
    int N;
    cin >> N;
    vector<vector<char>> ini;
    vector<vector<char>> fin;
    vector<char> temp;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            char value;
            cin >> value;
            temp.push_back(value);
        }
        ini.push_back(temp);
        temp.clear();
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char value;
            cin >> value;
            temp.push_back(value);
        }
        fin.push_back(temp);
        temp.clear();
    }
    if (fin == rotate90(ini, N)) {
        cout << 1;
    }
    else if (fin == rotate90(rotate90(ini, N), N)) {
        cout << 2;
    }
    else if (fin == rotate90(rotate90(rotate90(ini, N), N), N)) {
        cout << 3;
    }
    else if (fin == reflect(ini, N)) {
        cout << 4;
    }
    else if (fin == rotate90(reflect(ini, N), N)) {
        cout << 5;
    }
    else if (fin == rotate90(rotate90(reflect(ini, N), N), N)) {
        cout << 5;
    }
    else if (fin == rotate90(rotate90(rotate90(reflect(ini, N), N), N), N)) {
        cout << 5;
    }
    else if (ini == fin) {
        cout << 6;
    }

    else {
        cout << 7;
    }
    cout << endl;
    return 0;
}