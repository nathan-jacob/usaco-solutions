/*
ID: nathan.31
PROG: preface
LANG: C++
*/
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> ans;
void printans() {
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << endl;
    }
    cout << endl;
}
int countFreq(string pat, char txt)
{
    int res;
    for (int i = 0; i < pat.size(); ++i) {
        if (pat[i] == txt)
        res++;
    }
    return res;
}
bool finstr(string str, string str1) {
    // Find first occurrence of "geeks"
    size_t found = str.find(str1);
    if (found != string::npos)
        return true;
    else
        return false;
}
string calc(int n) {
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int N = 12;
    string ans;
    while(n>0)
    {
        int div = n/num[N];
        n = n%num[N];
        while(div--)
        {
            ans += sym[N];
        }
        N--;
    }
    return ans;
}
void recursion(int n) {
    if (n != 1) {
        string an = calc(n);
        ans[0] += countFreq(an, 'I');
        ans[1] += countFreq(an, 'V');
        ans[2] += countFreq(an, 'X');
        ans[3] += countFreq(an, 'L');
        ans[4] += countFreq(an, 'C');
        ans[5] += countFreq(an, 'D');
        ans[6] += countFreq(an, 'M');
        recursion(n-1);
    }
    else {
        ans[0]++;
    }
}
int main() {
    ans.push_back(0);
    ans.push_back(0);
    ans.push_back(0);
    ans.push_back(0);
    ans.push_back(0);
    ans.push_back(0);
    ans.push_back(0);
    freopen("preface.in", "r", stdin);
    freopen("preface.out", "w", stdout);
    int N;
    cin >> N;
    recursion(N);
    if (ans[0] != 0)
        cout << "I " << ans[0] << endl;
    if (ans[1] != 0)
        cout << "V " << ans[1] << endl;
    if (ans[2] != 0)
        cout << "X " << ans[2] << endl;
    if (ans[3] != 0)
        cout << "L " << ans[3] << endl;
    if (ans[4] != 0)
        cout << "C " << ans[4] << endl;
    if (ans[5] != 0)
        cout << "D " << ans[5] << endl;
    if (ans[6] != 0)
        cout << "M " << ans[6] << endl;
    return 0;
}
