#pragma once
#include "SLList.h"

template <class T>
class myStack
{
public:
    myStack() :
        m_data()
    {
    }

    void push(T const& input )
    {
        m_data.push_back(input);
    }

    T & top() /*const*/
    {
        return m_data.top();
    }

    void pop()
    {
        m_data.pop();
    }


private:
    SLList<T> m_data;
};
