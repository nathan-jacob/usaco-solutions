#include <iostream>
#include <string>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int N = 0;
    int K = 0;
    cin >> N >> K;
    string line[100];
    int ln = 0;
    int length = K;

    for (int i = 0; i < N; ++i) {
        string nw;
        cin >> nw;

        if (length == K) {
            line[ln] = nw;
            length -= nw.size();
        }
        else if (length >= nw.size()) {
            line[ln] = line[ln] + " " + nw;
            length -= nw.size();
        }
        else if (length < nw.size()) {
            line[++ln] = nw;
            length = K - nw.size();
        }
    }

    for (string j : line) {
        if (j.size() > 0)
            cout << j << endl;
    }
}
