#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    freopen("photo.in", "r", stdin);
    freopen("photo.out", "w", stdout);
    int N;
    cin >> N;
    int arr[N-1];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int sol[N];
    bool work = true;

    for (int i = arr[0]-1; i > 0; --i) {

        for (int j = 0; j < N; ++j) {
            if (j == 0) {
                sol[0] = i;
            }
            else{
                sol[j] = abs(arr[j-1]) - abs(sol[j-1]);
            }
        }
        bool work = true;
        for(int k: sol) {
            if (k <= 0) {
                work = false;
            }
        }
        if (work)
            break;

    }


    for (int i = 0; i < N; ++i) {
        if (i == 0)
            cout << sol[i];
        else
            cout << " " << sol[i];
    }

    cout << endl;
    return 0;
}
