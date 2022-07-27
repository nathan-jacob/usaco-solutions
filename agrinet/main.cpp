/*
ID: nathan.31
LANG: C++
TASK: agrinet
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define space " "
void printmat(vector<vector<int>> adjmat) {
    for (int i = 0; i < adjmat.size(); ++i) {
        for (int j = 0; j < adjmat[i].size(); ++j) {
            cout << adjmat[i][j] << space;
        }
        cout << endl;
    }
}
int prim(vector<vector<int>> adjmat) {
    vector<int> enc;
    vector<int> costs;

    int current = 0;
    enc.push_back(0);
    costs.push_back(0);

    for (int i = 0; i < adjmat.size()-1; ++i) {

        int min = 100001;
        int minind = current;

        for (int j = 0; j < adjmat[current].size(); ++j) {
            if (j != current) {
                //cout << j << " is not equal to " << current << endl;
                if(std::find(enc.begin(), enc.end(), j) != enc.end()) {
                    //cout << j << " is already used to " << current << space;
                } else {
                    if (adjmat[current][j] < min) {
                        minind = j;
                        min = adjmat[current][j];
                    }
                }
            }
        }

        if (minind == current) {
            //cout << "fuck me" << endl;
        }
        //cout << "final min is  " << min << ":" << minind << endl;
        enc.push_back(minind);
        costs.push_back(min);
        current = minind;
    }





    int sum = 0;
    for (int i = 0; i < costs.size(); ++i) {
        sum += costs[i];
    }
    return sum;
}
int main() {
    freopen("agrinet.in", "r", stdin);
    freopen("agrinet.out", "w", stdout);
    int N = 0;
    cin >> N;
    vector<vector<int>> adjmat;
    vector<int> temper;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int temp = 0;
            cin >> temp;
            temper.push_back(temp);
        }
        adjmat.push_back(temper);
        temper.clear();
    }


    //printmat(adjmat);
    //cout << endl;
    cout << prim(adjmat) << endl;
    return 0;

}
