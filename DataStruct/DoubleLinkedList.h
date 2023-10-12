#pragma once
#include <iostream>
using namespace std;

template <typename T>
class DoubleLinkedList
{
private:
    struct Node
    {
        T data;
        Node* prev;
        Node* next;
    };

    Node* head = new Node;
    Node* tail = new Node;

    int size;

public:
    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;

        size = 0;
    }

    void PushFront(T data)
    {
        Node* newNode = new Node;
        newNode->data = data;

        if (head == nullptr && tail == nullptr) // 노드가 하나도 없을 때
        {
            head = newNode;
            tail = newNode;
            newNode->prev = nullptr;
            newNode->next = nullptr;
        }
        else
        {
            newNode->prev = nullptr;
            newNode->next = head->next;
            head = newNode;
        }
    }

    void PushBack(T data)
    {
        Node* newNode = new Node;
        newNode->data = data;

        if (head == nullptr && tail == nullptr) // 노드가 하나도 없을 때
        {
            head = newNode;
            tail = newNode;
            newNode->prev = nullptr;
            newNode->next = nullptr;
        }
        else
        {
            newNode->prev = tail->prev;
            newNode->next = nullptr;
            tail = newNode;
        }
    }

    void PopFront()
    {

    }

    void PopBack()
    {

    }

    void Show()
    {
        Node* showNode = new Node;
        
    }

    int Size()
    {
        return size;
    }

    ~DoubleLinkedList()
    {

    }
};

