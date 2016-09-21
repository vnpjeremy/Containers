#pragma once
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

        Node() //Needed?
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

    void clear()
    {
        Node<T>* cur = m_head;
        while(cur)
        {

        }
    }

    Node<T>* m_head;
};