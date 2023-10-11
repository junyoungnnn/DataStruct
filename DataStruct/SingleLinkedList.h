#pragma once
#include <iostream>
using namespace std;

class SingleLinkedList
{
private:
    struct Node
    {
        int data;
        Node* next;
    };

    Node* head = new Node;
    Node* tail = new Node;

    int size;

public:

    SingleLinkedList()
    {
        head = nullptr;
        tail = nullptr;

        size = 0;
    }

    void PushFront(int data)
    {
        Node* newNode = new Node;
        newNode->data = data;

        if (head == nullptr && tail == nullptr)
        {
            head = newNode;
            tail = newNode;
            newNode->next = nullptr; // 해야하는가?
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }

        size++;
    }

    void PushBack(int data)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr && tail == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        size++;
    }

    void DeleteNode()
    {

    }

    int Size()
    {
        cout << "Node의 개수: " << size << endl;
        return 0;
    }

    void Show()
    {
        Node* showNode = new Node;
        showNode = head;

        while (showNode != nullptr)
        {
            cout << showNode->data << endl;
            showNode = showNode->next;
        }
    }
    
    ~SingleLinkedList()
    {

    }

};

