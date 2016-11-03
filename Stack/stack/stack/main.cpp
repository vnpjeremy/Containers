#include "myStack.h"
#include <stack>
int main()
{
    myStack<int> stack1;
    for(size_t ii = 0; ii < 6; ++ii)
        stack1.push(ii);

    int tp1 = stack1.top();
    stack1.pop();

    //std::stack<int> defStack;
    //int arg = defStack.top();

    int dummy = 0;
}