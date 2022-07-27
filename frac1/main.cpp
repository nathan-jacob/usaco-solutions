/*
ID: nathan.31
PROG: frac1
LANG: C++
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
double value(pair<int, int> frac) { return (((double) frac.first) / ((double) frac.second)); }
pair<int,int> reduce(pair<int, int> frac) {
    int d = gcd(frac.first, frac.second);
    frac.first = frac.first / d;
    frac.second = frac.second / d;
    return frac;
}
void printvect(vector<pair<pair<int,int>, double>> sorter) {
    for (int i = 0; i < sorter.size(); ++i) {
        if (sorter[i].second != sorter[i-1].second)
            cout << sorter[i].first.first << "/" << sorter[i].first.second << endl;
    }
}
bool sortbysec(const pair<pair<int,int>, double> &a,
               const pair<pair<int,int>, double> &b)
{
    return (a.second < b.second);
}
int main() {
    freopen("frac1.in", "r", stdin);
    freopen("frac1.out", "w", stdout);
    vector<pair<pair<int,int>, double>> sorter;
    sorter.push_back(make_pair(make_pair(0,1), value(make_pair(0,1))));
    sorter.push_back(make_pair(make_pair(1,1), value(make_pair(1,1))));
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j < i; ++j) {
            pair<pair<int,int>, double> temp = make_pair(reduce(make_pair(j,i)), value(make_pair(j,i)));
            if(std::find(sorter.begin(), sorter.end(), temp) != sorter.end()) {
                /* v contains x */
            } else {
                sorter.push_back(temp);
            }
        }
    }




    sort(sorter.begin(), sorter.end(), sortbysec);
    printvect(sorter);


    return 0;
}
