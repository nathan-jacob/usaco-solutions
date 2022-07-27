#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int what[7];
    int max = 0;
    int smal1 = 1000000000;
    int smal1i = 0;
    int smal2i = 0;
    int smal2 = 1000000000;

    for (int i = 0; i < 7; ++i) {
        cin >> what[i];
    }
    for (int i : what) {
        if (i > max) {
            max = i;
        }
    }
    //cout << max << endl;

    for (int i = 0; i < 7; ++i) {
        if (what[i] < smal1) {
            smal1i = i;
            smal1 = what[i];
        }
    }
    //cout << smal1 << endl;
    for (int i = 0; i < 7; ++i) {
        if ((what[i] < smal2) and (i != smal1i)) {
            smal2i = i;
            smal2 = what[i];
        }
    }
    cout << smal1 << " " << smal2 << " " << (max - (smal1 + smal2)) << endl;
//    for(int i : what)
//        cout << i << endl;
    return 0;
}
