/*
ID: nathan.31
PROG: sprime
LANG: C++
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int start[] = {2,3,5,7};
int mend[] = {1,3,5,7,9};

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
bool isRib(int n) {
    string m = to_string(n);
    for (int i = 0; i < m.size(); ++i) {
        if (!isPrime(stoi(m.substr(0, i+1))))
            return false;
    }
    return true;
}
int genPrime(int k[], int n) {
    string number;
    for (int i = 0; i < n; ++i) {
        number += to_string(k[i]);
    }
    return stoi(number);
}
vector<int> generate(int n) {
    vector<int> ans;
    int pivot[n];
    if (n == 0)
        return ans;
    else if (n == 1) {
        for (int i = 0; i < 4; ++i) {
            ans.push_back(start[i]);
        }
        return ans;
    }
    else if (n == 2) {
        for (int i = 0; i < 4; ++i) {
            pivot[0] = start[i];
            for (int j = 0; j < 5; ++j) {
                pivot[1] = mend[j];
                ans.push_back(genPrime(pivot, n));
            }
        }
        return ans;
    }
    else if (n == 3) {
        for (int i = 1; i < 4; ++i) {
            pivot[0] = start[i];
            for (int j = 0; j < 5; ++j) {
                pivot[1] = mend[j];
                for (int k = 0; k < 5; ++k) {
                    pivot[2] = mend[k];
                    ans.push_back(genPrime(pivot, n));
                }
            }
        }
    }
    else if (n == 4) {
        for (int i = 0; i < 4; ++i) {
            pivot[0] = start[i];
            for (int j = 0; j < 5; ++j) {
                pivot[1] = mend[j];
                for (int k = 0; k < 5; ++k) {
                    pivot[2] = mend[k];
                    for (int l = 0; l < 5; ++l) {
                        pivot[3] = mend[l];
                        ans.push_back(genPrime(pivot, n));
                    }
                }
            }
        }
    }
    else if (n == 5) {
        for (int i = 0; i < 4; ++i) {
            pivot[0] = start[i];
            for (int j = 0; j < 5; ++j) {
                pivot[1] = mend[j];
                for (int k = 0; k < 5; ++k) {
                    pivot[2] = mend[k];
                    for (int l = 0; l < 5; ++l) {
                        pivot[3] = mend[l];
                        for (int m = 0; m < 5; ++m) {
                            pivot[4] = mend[m];
                            ans.push_back(genPrime(pivot, n));
                        }
                    }
                }
            }
        }
    }
    else if (n == 6) {
        for (int i = 0; i < 4; ++i) {
            pivot[0] = start[i];
            for (int j = 0; j < 5; ++j) {
                pivot[1] = mend[j];
                for (int k = 0; k < 5; ++k) {
                    pivot[2] = mend[k];
                    for (int l = 0; l < 5; ++l) {
                        pivot[3] = mend[l];
                        for (int m = 0; m < 5; ++m) {
                            pivot[4] = mend[m];
                            for (int i1 = 0; i1 < 5; ++i1) {
                                pivot[5] = mend[i1];
                                ans.push_back(genPrime(pivot, n));
                            }
                        }
                    }
                }
            }
        }
    }
    else if (n == 7) {
        for (int i = 0; i < 4; ++i) {
            pivot[0] = start[i];
            for (int j = 0; j < 5; ++j) {
                pivot[1] = mend[j];
                for (int k = 0; k < 5; ++k) {
                    pivot[2] = mend[k];
                    for (int l = 0; l < 5; ++l) {
                        pivot[3] = mend[l];
                        for (int m = 0; m < 5; ++m) {
                            pivot[4] = mend[m];
                            for (int i1 = 0; i1 < 5; ++i1) {
                                pivot[5] = mend[i1];
                                for (int k1 = 0; k1 < 5; ++k1) {
                                    pivot[6] = mend[k1];
                                    ans.push_back(genPrime(pivot, n));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if (n == 8) {
        for (int i = 0; i < 4; ++i) {
            pivot[0] = start[i];
            for (int j = 0; j < 5; ++j) {
                pivot[1] = mend[j];
                for (int k = 0; k < 5; ++k) {
                    pivot[2] = mend[k];
                    for (int l = 0; l < 5; ++l) {
                        pivot[3] = mend[l];
                        for (int m = 0; m < 5; ++m) {
                            pivot[4] = mend[m];
                            for (int i1 = 0; i1 < 5; ++i1) {
                                pivot[5] = mend[i1];
                                for (int k1 = 0; k1 < 5; ++k1) {
                                    pivot[6] = mend[k1];
                                    for (int l1 = 0; l1 < 5; ++l1) {
                                        pivot[7] = mend[l1];
                                        ans.push_back(genPrime(pivot, n));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return ans;
}
int main() {
    int N;
    freopen("sprime.in", "r", stdin);
    freopen("sprime.out", "w", stdout);
    cin >> N;
    vector<int> what = generate(N);
    for (int i = 0; i < what.size(); ++i) {
        if(isRib(what[i]))
            cout << what[i] << endl;
    }
    return 0;
}
