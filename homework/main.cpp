#include <iostream>
#include <vector>

using namespace std;

int getMin(vector<int> arr)
{
    int n = arr.size();
    int res = arr[0];
    int in = 0;
    for (int i = 1; i < n; i++) {
        in = (res < arr[i]) ? in : i;
        res = min(res, arr[i]);
    }
    return in;
}
double wavg(int arr[], int n, int N) {
    vector<int> k;
    for (int i = n; i < N; ++i)
        k.push_back(arr[i]);

    k.erase(k.begin() + getMin(k));
    double avg = 0;
    for (int i = 0; i < k.size(); ++i)
        avg += k[i];
//        cout << " " << k[i];

    avg /= k.size();
    return avg;

}
int main() {
    int N, G;
    freopen("homework.in", "r", stdin);
    freopen("homework.out", "w", stdout);
    cin >> N;
    int T[N];
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
    }

//    for (int i = 0; i < sizeof(T)/sizeof(T[0]); ++i) {
//        cout << T[i];
//    }

    double max = 0;
    //cout << "max: " << max;
    //cout << "\n";
    vector<int> k;
    for (int i = 1; i < N-2; ++i) {
        double wavy = wavg(T, i, N);
        if (wavy > max) {
            k.clear();
            max = wavy;
            k.push_back(i);
            //cout << "cleared. new max is " << max << "; k is now " << i << "\n";
        }
        else if (wavy == max) {
            k.push_back(i);
            //cout << i  <<  " has been added to the function because it gave us " << max << "\n";
        }
        else if (wavy < max) {
            max = max;
            //cout << i  <<  " tried but wasn't added to the function" << "\n";
        }
    }
    for (int i = 0; i < k.size(); ++i) {
        cout << k[i] << "\n";
    }
    return 0;
}
