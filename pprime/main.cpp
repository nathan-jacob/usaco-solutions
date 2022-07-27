/*
ID: nathan.31
PROG: pprime
LANG: C++
*/
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;

    return true;
}
int genPal(int pivot[], int n, int pivots) {

    string number = "";
    for (int i = 0; i < pivots; ++i) {
        string temp = to_string(pivot[i]);
        number += temp;
    }
    string rnum = "";
    for (int i = 0; i < (pivots-(n%2)); ++i) {
        string temp = to_string(pivot[i]);
        rnum += temp;
    }
    reverse(rnum.begin(), rnum.end());
    number += rnum;
    return stoi(number);
}
bool isPalindrome(int n) {
    string j = to_string(n);
    string k = to_string(n);
    reverse(k.begin(), k.end());
    if (j == k)
        return true;
    else
        return false;
}
vector<int> generate(int n) {
    vector<int> ans;
    if (n == 0)
        return ans;
    else if (n == 1) {
        for (int i = 1; i < 10; ++i) {
            ans.push_back(i);
        }
        return ans;
    }
    else if (n == 2) {
        for (int i = 11; i < 100; i = i + 11) {
            ans.push_back(i);
        }
        return ans;
    }
    else if (n == 3 or n == 4){
        int pivots = (n-(2-(n % 2))) / 2 + 1;
        int pivot[pivots];
        for (int i = 0; i < 10; ++i) {
            pivot[0] = i;
            for (int j = 0; j < 10; ++j) {
                pivot[1] = j;
                ans.push_back(genPal(pivot, n, pivots));
            }
        }
    }
    else if (n == 5 or n == 6){
        int pivots = (n-(2-(n % 2))) / 2 + 1;
        int pivot[pivots];
        for (int i = 0; i < 10; ++i) {
            pivot[0] = i;
            for (int j = 0; j < 10; ++j) {
                pivot[1] = j;
                for (int k = 0; k < 10; ++k) {
                    pivot[2] = k;
                    ans.push_back(genPal(pivot, n, pivots));
                }
            }
        }
    }
    else if (n == 7){
        int pivots = (n-(2-(n % 2))) / 2 + 1;
        int pivot[pivots];
        for (int i = 1; i < 10; ++i) {
            pivot[0] = i;
            for (int j = 0; j < 10; ++j) {
                pivot[1] = j;
                for (int k = 0; k < 10; ++k) {
                    pivot[2] = k;
                    for (int l = 0; l < 10; ++l) {
                        pivot[3] = l;
                        ans.push_back(genPal(pivot, n, pivots));
                    }
                }
            }
        }
    }
    return ans;
}
vector<int> combine(vector<int> a, vector<int> b) {
    vector<int> comb = a;
    comb.insert( comb.end(), b.begin(), b.end() );
    return comb;
}
int main() {
    freopen("pprime.in", "r", stdin);
    freopen("pprime.out", "w", stdout);
    int N, M;
    cin >> N >> M;
    int NL, ML;
    NL = to_string(N).length();
    ML = to_string(M).length();
//    for (int i = N; i < M; ++i) {
//        if (isPrime(i) and isPalindrome(i)) {
//            cout << i << endl;
//        }
//    }
    vector<int> pals;
    for (int i = NL; i < (ML+1); ++i) {
        pals = combine(pals, generate(i));
    }

    for (int i = 0; i < pals.size(); ++i) {
        if (N <= pals[i]and pals[i] <= M)
            if (isPrime(pals[i]) and isPalindrome(pals[i]))
                cout << pals[i] << endl;
    }

    return 0;
}
