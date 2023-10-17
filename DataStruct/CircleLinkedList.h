#pragma once
#include <iostream>
using namespace std;

template <typename T>
class CircleLinkedList
{
private:
    struct Node
    {
        T data;

        Node* next;
    };

    Node* head = new Node;

    int size;

public:
    CircleLinkedList()
    {
        head = nullptr;

        size = 0;
    }

    void PushFront(T data)
    {
        Node* newNode = new Node;

        newNode->data = data;

        if (head == nullptr)
        {
            head = newNode;
            head->next = newNode;
        }
        else
        {
            /*Node* newTail = new Node;
            newTail = head;
            while (true) 
            {
                if (newTail->next == head)
                {
                    break;
                }
                newTail = newTail->next;
            }
            newNode->next = head;
            newTail->next = newNode;*/

            // ***********************
            newNode->next = head->next;
            head->next = newNode;
            head = newNode;
        }

        size++;
    }

    void PushBack(T data)
    {
        Node* newNode = new Node;

        newNode->data = data;

        if (head == nullptr)
        {
            head = newNode;
            head->next = newNode;
        }
        else
        {
            newNode->next = head->next;
            head->next = newNode;
            head = newNode;

        }

        size++;
    }

    void PopBack()
    {
        Node* deleteNode = new Node;
        deleteNode = head;

        if (head == nullptr)
        {
            cout << "삭제할 노드가 없습니다." << endl;
            return;
        }
        else if (deleteNode->next == head)
        {
            head->next = head;
        }
        else
        {
            deleteNode = deleteNode->next;
            head->next = deleteNode->next;
        }
        size--;
    }

    void PopFront()
    {
        Node* deleteNode = new Node;
        deleteNode = head;

        if (head == nullptr)
        {
            cout << "삭제할 노드가 없습니다." << endl;
            return;
        }
        else if (deleteNode->next == head)
        {
            head->next = head;
        }
        else
        {
            while (true)
            {
                if (deleteNode->next->next == head)
                {
                    break;
                }
                deleteNode = deleteNode->next;
            }
            deleteNode->next = head;
        }
        
        size--;
    }

    void Show()
    {
        if (head == nullptr)
        {
            return;
        }
        Node* showNode = new Node;

        showNode = head;
        
        cout << "head: " << head->data << endl;
        for(int i =0; i<size; i++)
        {
            cout << showNode->data << endl;
            showNode = showNode->next;
        }

        delete showNode;
    }

    int Size()
    {
        return size;
    }

    ~CircleLinkedList()
    {
        Node* deleteNode = new Node;

        while (deleteNode == nullptr)
        {
            deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
        cout << "소멸자 호출로 모든 노드를 삭제했습니다." << endl;
    }
};
