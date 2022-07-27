#include <iostream>
using namespace std;

int N,a,b;


int main()
{
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);
    cin >> N;
    int d[N+3];
    for(int i=1;i<N;i++)
    {
        cin >> a >> b;
        d[--a]++, d[--b]++;
    }
    int* D = max_element(d, d+100000);
    cout << *D+1 << '\n';
}