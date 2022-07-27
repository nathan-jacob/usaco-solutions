#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

long rec(long prev, long current) {
    if (current == prev) {
        return current;
    }

    if (prev == 0) {
        long inc = 0;
        bool doe = true;
        long N = current;
        if (N < 3) {
            doe = false;
        }
        if (N >= 3) {
            inc += ((N - (N % 3)) / 3);
        }
        if (N >= 5) {
            inc += ((N - (N % 5)) / 5);

        }
        if (N >= 15) {
            inc -= ((N - (N % 15)) / 15);
        }
        //cout << "it1: " << current << " has " << inc << " multiples" << endl;
        if (doe)
            return rec(current, current+inc);
        else
            return N;
    }
    else {
        long inc = 0;
        long inc2 = 0;

        if (current >= 3) {
            inc += ((current - (current % 3)) / 3);
        }
        if (current >= 5) {
            inc += ((current - (current % 5)) / 5);
        }
        if (current >= 15) {
            inc -= ((current - (current % 15)) / 15);
        }
        //cout << current << " has " << inc << " multiples" << endl;

        if (prev >= 3) {
            inc2 += ((prev - (prev % 3)) / 3);
        }
        if (prev >= 5) {
            inc2 += ((prev - (prev % 5)) / 5);
        }
        if (prev >= 15) {
            inc2 -= ((prev - (prev % 15)) / 15);
        }
        //cout << prev << " has " << inc2 << " multiples" << endl;

        inc = inc - inc2;
        if (inc < 0) {
            //cout << "fuck" << endl;
            return 0;
        }
        //cout << "jumping by " << inc << endl;

        return rec(current, current+inc);
    }
}

int main () {
    long N, J;
    freopen("moobuzz.in","r",stdin);
    freopen("moobuzz.out","w",stdout);
    cin >> N;
    //cout << N << endl;
    cout << rec(0, N) << endl;
    //cout << "1863484";
    return 0;
}
