/*
ID: nathan.31
LANG: C++
TASK: milk2
*/
#include <iostream>
#include <climits>
using namespace std;

int main() {
    bool* array = new bool[1000000];
    int N;
    int maxi = 0;
    int mini = INT_MAX;

    int maxt = 0;
    int maxf = 0;

    int tempt = 0;
    int tempf = 0;
    freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int S, E;
        cin >> S >> E;
        maxi = max(maxi, E);
        mini = min (mini, S);
        for (int j = S; j < E; ++j) {
            array[j] = true;
            //maxt++;
        }
        //array[E] = (array[E] != true) ? false : true;
    }
    //cout << mini << " " << maxi << endl;

    for (int i = mini; i < maxi; ++i) {
        // << array[i];
        if (i == mini) {
            if (array[i])
                tempt++;
            else
                tempf++;
        }
        else if (array[i] == array[i-1]) {
            if (array[i])
                tempt++;
            else
                tempf++;
        }
        else {
            maxt = max(tempt, maxt);
            maxf = max(tempf, maxf);
            tempt = 1;
            tempf = 1;
        }
        maxt = max(tempt, maxt);
        maxf = max(tempf, maxf);
    }
    //cout << endl;
    cout << maxt << " " << maxf << endl;
    //std::cout << "Hello, World!" << std::endl;
    delete[] array;

    return 0;
}
