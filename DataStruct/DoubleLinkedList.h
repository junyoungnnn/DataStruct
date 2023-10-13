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
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        size++;
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
            newNode->prev = tail;
            newNode->next = nullptr;
            tail->next = newNode;
            tail = newNode;
        }

        size++;
    }

    void PopFront()
    {
        Node* deleteNode = new Node;

        if (head == nullptr && tail == nullptr)
        {
            cout << "삭제할 노드가 없습니다." << endl;
            return;
        }
        else if(head->next == nullptr)
        {
            deleteNode = head;
            head = nullptr;
            tail = nullptr;
            delete deleteNode;
        }
        else
        {
            deleteNode = head;
            head = deleteNode->next;
            head->prev = nullptr;
            delete deleteNode;
        }

        size--;
    }

    void PopBack()
    {
        Node* deleteNode = new Node;

        if (head == nullptr && tail == nullptr)
        {
            cout << "삭제할 노드가 없습니다." << endl;
            return;
        }
        else
        {
            deleteNode = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete deleteNode;
        }

        size--;
    }

    void Insert(int position, T data)
    {

        if (position <= 1)
        {
            PushFront(data);
            return;
        }
        if (position >= size + 1)
        {
            PushBack(data);
            return;
        }

        Node* curNode = new Node;
        curNode = head;

        Node* newNode = new Node;
        newNode->data = data;

        for (int i = 0; i < position-1; i++)
        {
            curNode = curNode->next;
        }
  
        newNode->next = curNode;

        curNode->prev->next = newNode;

        newNode->prev = curNode->prev;

        curNode->prev = newNode;
       
        size++;
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

    int Size()
    {
        return size;
    }

    ~DoubleLinkedList()
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

