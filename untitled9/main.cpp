#include <iostream>
#include "PQueue.cpp"
#include <string>
using namespace std;
int main() {
    char* hello = "hello";
    char* next = "hello1";
    std::cout << "Hello, World!" << std::endl;
    PQueue *lis = new PQueue();
    lis->push(hello, 7);
    cout << lis->top() << endl;
    lis->push(next, 8);
    cout << lis->top() << endl;
    return 0;

}
