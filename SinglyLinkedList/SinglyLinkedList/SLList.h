#pragma once
#include <vector>

template <class T>
class SLList
{
private:
    template <class T>
    class Node
    {
    public:
        Node(T data) :
            m_next(),
            m_data(data)
        {
        }

        Node() :
            m_next(),
            m_data()
        {
        }

        Node<T>* m_next;
        T        m_data;
    };

public:
    SLList() :
        m_head()
    {
    }

    void push_back(T data)
    {
        Node<T>* newNode = new Node<T>(data);
        if(!m_head)
            m_head = newNode;
        else
        {
            Node<T>* cur = m_head;
            while(cur->m_next)
                cur = cur->m_next;
            cur->m_next = newNode;
        }
    }

    std::vector<T> flatten()
    {
        std::vector<T> output;
        Node<T>* tmp = m_head;
        while(tmp)
        {
            output.push_back(tmp->m_data);
            tmp = tmp->m_next;
        }

        return output;
    }

    void clear()
    {
        while(m_head)
        {
            Node<T>* tmp = m_head->m_next;
            delete m_head;
            m_head = tmp;
        }
    }

    Node<T>* m_head;
};