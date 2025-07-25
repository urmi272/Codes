#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(23);
    stack.push(24);
    stack.push(25);

    cout<<"Current top element in stack::"<<stack.top()<<endl;
    stack.pop();
    cout<<"\nCurrent top element in stack::"<<stack.top()<<endl;
    stack.pop();
    cout<<"\nCurrent top element in stack::"<<stack.top()<<endl;

    cout<<"\nSize of stack::"<<stack.size()<<endl;

    while (!stack.empty())
    {
        cout << "\n" << stack.top();
        stack.pop();
    }
}
