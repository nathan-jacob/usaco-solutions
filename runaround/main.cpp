/*
ID: nathan.31
PROG: runround
LANG: C++
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cmath>
//#include <set>
//
//using namespace std;
//bool isRun(int N) {
//    string n = to_string(N);
//    int length = n.size();
//    vector<int> bob;
//    set<int> uni;
//    for (int i = 0; i < length; ++i) {
//        uni.insert(n[i] - 48);
//        bob.push_back(n[i] - 48);
//    }
//    if (uni.size() != length)
//        return false;
//    int start = 0;
//    int end = 0;
//    set<int> visit;
//    for (int i = 0; i < length; ++i) {
////        cout << "end was " << end << "(" << bob[end] << ")";
//        visit.insert(end);
//        end = (end + bob[end]) % length;
//        visit.insert(end);
////        cout << " but it's now " << end << "(" << bob[end] << ")" << endl;
//    }
//    return ((visit.size() == length) and (start == end));
//}
//
//int main() {
//    freopen("runround.in", "r", stdin);
//    freopen("runround.out", "w", stdout);
//    int N;
//    cin >> N;
//    while (!isRun(N))
//        N++;
//    cout << N << endl;
//    return 0;
//}
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
#define trace(x) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<endl;

bool runround(uint32_t num) {

    string numstr = to_string(num);

    int i=0, c=1;
    int mark[255] = {0};
    mark[numstr[0]] = true;

    while(true) {

        i = (i + numstr[i]-'0') % numstr.length(); // wrap round in-case over limit

        if(mark[numstr[i]] == true)
            return i == 0 && c == numstr.length();
        else
            mark[numstr[i]] = true; c++;
    }
}

int main() {

#ifndef STDIN
    freopen("runround.out", "w", stdout);
    freopen("runround.in", "r", stdin);
#endif

    uint32_t N;
    cin >> N;
    N++;
    while(!runround(N)) N++;
    cout << N << endl;
    return 0;
}