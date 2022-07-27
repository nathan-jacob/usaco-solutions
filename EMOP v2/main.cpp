#include <iostream>
using namespace std;
int main() {
    int odds = 0;
    int evens = 0;
    int temp = 0;
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        if (temp % 2 == 0)
            evens++;
        else
            odds++;
    }
    int ret = 0;
    if ((evens == (odds+1)) or evens==odds) {
        ret= (evens+odds);
    }
    else if (evens > (odds)) {
        ret = (odds*2+1);
    }
    else if (evens == 0) {
        ret = (odds / 2);
    }
    else if ((odds - evens) % 2 == 0) {
        ret = evens*2+1;
    }
    else if ((odds - evens) % 2 == 1) {
        ret = evens*2-1;
    }
    if (ret < 2) {
        ret = 2;
    }
    cout << ret << endl;
    return 0;
}
