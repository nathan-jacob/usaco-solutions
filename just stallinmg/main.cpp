#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    long long c[N];
    long long b[N];
    long long u[N];
    for (int i = 0; i < N; ++i) {
        cin >> c[i];
        u[i] = 0;
    }
    for (int i = 0; i < N; ++i) {
        cin >> b[i];
    }
    sort(c, c + N, greater<int>());
    sort(b, b + N, greater<int>());



    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (b[j] < c[i]){
                break;
            }
            else {
                u[i]++;
            }
        }
    }

//    for (long long i : c)
//        cout << i << " ";
//    cout << endl;
//    for (long long i : b)
//        cout << i << " ";
//    cout << endl;
//    for (long long i : u)
//        cout << i << " ";
//    cout << endl;

    long long total = u[0];
    long long sub = 1;
    for (int i = 1; i < N; ++i) {
        total = total * (u[i] - sub);
        sub++;
    }
    cout << total << endl;
    return 0;
}
