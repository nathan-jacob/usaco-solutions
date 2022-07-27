#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string alph;
    string word;
    bool complete = false;
    cin >> alph >> word;
    int loc[word.size()];
    int its = 1;
    for (int i = 0; i < word.size(); ++i) {
        for (int j = 0; j < 26; ++j) {
            if (word[i] == alph[j])
                loc[i] = j;
        }
    }
    for (int i = 1; i < word.size(); ++i) {
        if (loc[i-1] >= loc[i]){
            its++;
        }
    }

    cout << its << endl;
//    for( int j : loc){
//        cout << j << endl;
//    }



//    int a = 0;
//    int w = 0;
//    int i = 1;
//    int j = 0;
//    while (w != (word.size())) {
//        if(alph[a] == word[w]) {
//            //cout << "WORK it: " << j << " alph: " << alph[a] << " a: " << a << " word: " << word[w] << " w: " << w << endl;
//            w++;
//            a++;
//        }
//        else if(alph[a] != word[w]) {
//            //cout << "it: " << j << " alph: " << alph[a] << " a: " << a << "word: " << word[w] << " w: " << w << endl;
//            a++;
//        }
//        if (a == 25) {
//            //cout << "CYCLE i:" << i << " a:" << a << endl;
//            i++;
//            a = 0;
//        }
//        j++;
//    }
//    cout << i << endl;
    return 0;
}
