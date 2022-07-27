/*
ID: nathan.31
PROG: combo
LANG: C++
*/


#include <iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

//Checks to see if the combination is close enough
//Accounts for wrap arounds
bool check(int num, int c1, int c2, int c3, int r1, int r2, int r3)
{
    return (abs(c1-r1) <= 2 || abs(c1-r1) >= num-2) && (abs(c2-r2) <= 2 || abs(c2-r2) >= num-2) && (abs(c3-r3) <= 2 || abs(c3-r3) >= num-2);
}

int main()
{
    ifstream fin("combo.in");
    ofstream fout("combo.out");
    int num, j1, j2, j3, m1, m2, m3;
    fin >> num >> j1 >> j2 >> j3 >> m1 >> m2 >> m3;
    int counter = 0;
    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= num; j++)
        {
            for(int k = 1; k <= num; k++)
            {
                if(check(num, i, j, k, j1, j2, j3) || check(num, i, j, k, m1, m2, m3))
                {
                    counter++;
                }
            }
        }
    }
    fout << counter << endl;
    return 0;
}
