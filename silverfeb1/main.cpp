#include <iostream>
using namespace std;
int chess[3000][3000] = {0};
int sat = 0;
void printarr() {
    cout << endl;
    for (int i = 20; i > 0; --i) {
        for (int j = 0; j < 20; ++j) {
            cout << chess[i][j];
        }
        cout << endl;
    }
}
int sim(int x, int y) {
    //cout << "simmy runny" << endl;
    if (chess[x][y] != 0) {
        sat--;
        return 0;
    }

    chess[x][y]++;
    if (chess[x][y+1] != 0) {
        chess[x][y+1]++;
        chess[x][y]++;
        if (chess[x][y+1] == 4) {
            if (chess[x][y+1+1] == 0) {
                sat = 1 + sim(x, y+1+1);
            }
            else if (chess[x][y+1-1] == 0) {
                sat = 1 + sim(x, y+1-1);
            }
            else if (chess[x+1][y+1] == 0) {
                sat = 1 + sim(x+1, y+1);
            }
            else if (chess[x-1][y+1] == 0) {
                sat = 1 + sim(x-1, y+1);
            }
        }
    }
    if (chess[x][y-1] != 0) {
        chess[x][y-1]++;
        chess[x][y]++;
        if (chess[x][y-1] == 4) {
            //cout << "somethings not working right" << endl;
            if (chess[x][y-1+1] == 0) {
                sat = 1 + sim(x, y-1+1);
            }
            else if (chess[x][y-1-1] == 0) {
                sat = 1 + sim(x, y-1-1);
            }
            else if (chess[x+1][y-1] == 0) {
                sat = 1 + sim(x+1, y-1);
            }
            else if (chess[x-1][y-1] == 0) {
                sat = 1 + sim(x-1, y-1);
            }
        }
    }
    if (chess[x+1][y] != 0) {
        chess[x+1][y]++;
        chess[x][y]++;
        if (chess[x+1][y] == 4) {
            if (chess[x+1][y+1] == 0) {
                sat = 1 + sim(x+1, y+1);
            }
            else if (chess[x+1][y-1] == 0) {
                sat = 1 + sim(x+1, y-1);
            }
            else if (chess[x+1+1][y-1] == 0) {
                sat = 1 + sim(x+1+1, y-1);
            }
            else if (chess[x-1+1][y-1] == 0) {
                sat = 1 + sim(x-1+1, y-1);
            }
        }
    }
    if (chess[x-1][y] != 0) {
        chess[x-1][y]++;
        chess[x][y]++;
        if (chess[x-1][y] == 4) {
            //cout << "somethings not working right" << endl;
            if (chess[x-1][y+1] == 0) {
                sat = 1 + sim(x-1, y+1);
            }
            else if (chess[x-1][y-1] == 0) {
                sat = 1 + sim(x-1, y-1);
            }
            else if (chess[x-1+1][y-1] == 0) {
                sat = 1 + sim(x+1+1, y-1);
            }
            else if (chess[x-1-1][y-1] == 0) {
                sat = 1 + sim(x-1-1, y-1);
            }
        }
    }
    if (chess[x][y] == 4) {
        if (chess[x][y+1] == 0) {
            sat = 1 + sim(x, y+1);
        }
        else if (chess[x][y-1] == 0) {
            sat = 1 + sim(x, y-1);
        }
        else if (chess[x+1][y] == 0) {
            sat = 1 + sim(x+1, y);
        }
        else if (chess[x-1][y] == 0) {
            sat = 1 + sim(x-1, y);
        }
    }
    if (sat > 0)
        return sat;
    else
        return 0;
}
int main() {
    int N = 0;
    int sat = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int x = 0;
        int y = 0;
        cin >> x >> y;
        cout << sim(y+10,x+10)<<endl;
        //printarr();
    }

    return 0;
}
