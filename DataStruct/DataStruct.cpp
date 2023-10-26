#include <iostream>
#include "STACK.h"

using namespace std;



int main()
{
    STACK<int> stack;
    stack.Push(100);
    stack.Push(200);
    stack.Push(300);
    stack.Push(400);
    stack.Push(500);

    cout << stack.Size() << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << stack.Top() << endl;
        stack.Pop();
    }
    cout << stack.Top() << endl;
    stack.Pop();

    return 0;
}
