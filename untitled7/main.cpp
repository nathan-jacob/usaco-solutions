#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main() {
    int M = 0;
    cin >> M;
    vector<pair<int,int>> E;
    vector<pair<bool,int>> Ei;
    vector<pair<int,int>> N;
    vector<pair<bool,int>> Ni;

    vector<pair<char, pair<int,int>>> pri;
    int b = 0;
    for (int i = 0; i < M; ++i) {
        char t;
        int te;
        int tem;
        cin >> t >> te >> tem;
        if (t == 'N') {
            N.push_back(make_pair(te, tem));
            Ni.push_back(make_pair(false, 0));
            pri.push_back(make_pair('N', make_pair(te, tem)));
        }
        else {
            E.push_back(make_pair(te, tem));
            Ei.push_back(make_pair(false, 0));
            pri.push_back(make_pair('E', make_pair(te, tem)));
        }
    }
    sort(E.begin(), E.end(), sortbysec);
    sort(N.begin(), N.end());
    //cout << boolalpha << Ni[0].first << " " << boolalpha << (E[1].first > N[0].first) << endl;
    for (int i = 0; i < E.size(); ++i) {
        for (int j = 0; j < N.size(); ++j) {
            if (Ni[j].first or (E[i].first > N[j].first)) {
                //cout << "testing " << i << " against " << j << " is impossible" << endl;
            }
            else {
                //cout << "testing " << i << " against " << j << endl;
                int etime = N[j].first - E[i].first;
                int ntime = E[i].second - N[j].second;

                if (etime < ntime) {
                    Ni[j].first = true;
                    Ni[j].second = ntime;
                    //cout << "n got there last with " << ntime << endl;
                }
                if (etime > ntime) {
                    Ei[i].first = true;
                    Ei[i].second = etime;
                    // << "e got there last with " << etime << endl;
                    break;
                }
            }
        }
    }

//    for (int i = 0; i < E.size(); ++i) {
//        cout << E[i].first << " " << E[i].second << " " <<  boolalpha << Ei[i].first << " " << Ei[i].second << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < N.size(); ++i) {
//        cout << N[i].first << " " << N[i].second << " " <<  boolalpha << Ni[i].first << " " << Ni[i].second << endl;
//    }

    for (int i = 0; i < M; ++i) {
        if (pri[i].first == 'E') {
            for (int j = 0; j < E.size(); ++j) {
                if (E[j] == pri[i].second) {
                    if (Ei[j].first)
                        cout << Ei[j].second << endl;
                    else
                        cout << "Infinity" << endl;
                }
            }
        }
        else{
            for (int j = 0; j < N.size(); ++j) {
                if (N[j] == pri[i].second) {
                    if (Ni[j].first)
                        cout << Ni[j].second << endl;
                    else
                        cout << "Infinity" << endl;
                }
            }
        }
    }

    return 0;
}
