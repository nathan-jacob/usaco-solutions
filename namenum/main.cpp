/*
ID: nathan.31
PROG: namenum
LANG: C++
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
int binarySearch(string arr[], string x,int n)
{
    int l = 0 ;
    int r = n - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        int res;
        if (x == (arr[m]))
            res = 0;
        if (res == 0)
            return m;
        if (x > (arr[m]))
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
string ConvertFrom10(long value, int base)
{
    if(base < 2 || base > 36)
        return "0";

    bool isNegative = (value < 0);
    if(isNegative)
        value *= -1;
    string output;

    do
    {
        char digit = value % base;
        if(digit < 10)
            digit += '0';
        else
            digit = digit + 'A' - 10;
        output += digit;

        value /= base;

    } while (value > 0);

    if(isNegative)
        output += '-';
    int len = output.size() - 1;
    for(int i = 0; i < len; ++i)
    {
        char temp = output[i];
        output[i] = output[len-i];
        output[len-i] = temp;
    }
    return output;
}

int main() {
    freopen("namenum.in", "r", stdin);
    freopen("namenum.out", "w", stdout);
    char M[8][3];
    string arr[4617];
    char l = 'A';
    long h;
    vector<int> N;
    vector<char> temp;
    vector<vector<char>> poss;
    for (int i = 0; i < sizeof(M)/sizeof(M[0]); ++i) {
        for (int j = 0; j < sizeof(M[0])/sizeof(M[0][0]); ++j) {
            if (l == 'Q' or l == 'Z') {
                l++;
                M[i][j] = l++;
            }
            else {
                M[i][j] = l++;
            }
        }
    }
    cin >> h;
    while (h > 0)
    {
        int digit = (int) h % 10;
        h /= 10;
        N.push_back(digit);
    }
    reverse(N.begin(), N.end());
//    for (int i = 0; i < N.size(); ++i) {
//        cout << N[i];
//    }
    ifstream din("dict.txt");
    for (int i = 0; i < 4617; ++i) {
        din >> arr[i];
    }
    for (int i = 0; i < N.size(); ++i) {
        for (int j = 0; j < 3; ++j) {
            temp.push_back(M[N[i]-2][j]);
        }
        poss.push_back(temp);
        temp.clear();
    }
//    for (int i = 0; i < poss.size(); ++i) {
//        for (int j = 0; j < poss[i].size(); ++j) {
//            cout << "i:" << i << " = " << poss[i][j] << " ";
//        }
//        cout << endl;
//    }

    vector<string> all;
    for (int i = 0; i < pow(3, N.size()); ++i) {
        string b3 = ConvertFrom10((long) i, 3);
        //reverse(b3.begin(), b3.end());
        string answer = "";
        while (b3.size() != N.size()) {
            b3.insert (0,"0");
        }
        //cout << b3 << " size: " << b3.size();
        for (int j = 0; j < N.size(); ++j) {
            answer += poss[j][(b3[j]-'0')];
            //cout << "poss[" << N.size()-1-j << "][" << (b3[j]-'0') << "] = " << answer << endl;
        }
        all.push_back(answer);
    }
//    for (int i = 0; i < all.size(); ++i) {
//        cout << i << ":" << all[i];
//        cout << endl;
//    }
//    cout << all.size() << endl;
    for (int i = 0; i < all.size(); ++i) {
        //cout << i << ":" << binarySearch(arr, all[i], 4617) << endl;
        int in = binarySearch(arr, all[i], 4617);
        if (in != -1) {
            cout << all[i] << endl;
        }
    }
    return 0;
}
