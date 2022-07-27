#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;
double wordcount(string str) {
    double wc = 0;
    for (int i = 0; i < str.size(); ++i)
        if(str[i] == ' ')
            wc = ++wc;
    return ++wc;
}
double sentcount(string str) {
    double wc = 0;
    for (int i = 0; i < str.size(); ++i)
        if(str[i] == '.')
            wc = ++wc;
    return wc;
}
double freq(string str)
{
    set<string> s1;
    double start = 0;
    double end = 0;
    for (double i = 0; i < str.size(); ++i) {
        if(str[i] == ' ') {
            end = i - 1;
            s1.insert(str.substr(start,end));
            start = i + 1;
        }
    }
    return s1.size();
}
double avgwords(string str) {
    double n = wordcount(str);
    double m = sentcount(str);
    return (n / m);
}
double lexical(string str) {
    return freq(str) / wordcount(str) * 100;
}
double fin(string str) {
    double ans = 0;
    for (double i = 0; i < str.size(); ++i) {
        if (str[i] == 'i')
            if(str[i+1] == 's')
                ans++;
    }
    return ans;
}
int main() {
    string source = ("I was born in Lousiana down on the ol bayou raised on shrimps and catfish mamas good gumbo. I got the ramblin fever. Said goodbye to ma and pa. Crossed that ol red river and this is what I saw. I saw miles and miles of Texas 1000 stars up in the sky. I saw miles and miles of Texas gonna live here till I die.");
    cout << fin(source) << endl;
    cout << wordcount(source) << endl;
    cout << sentcount(source) << endl;
    cout << avgwords(source) << endl;
    cout << lexical(source) << endl;

    return 0;
}
