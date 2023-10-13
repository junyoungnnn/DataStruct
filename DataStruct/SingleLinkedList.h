#pragma once
#include <iostream>
using namespace std;

template <typename T>
class SingleLinkedList
{
private:
    struct Node
    {
        T data;
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

    void PushFront(T data)
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

    void PushBack(T data)
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

    void PopFront()
    {
        Node* deleteNode = new Node;

        if (head == nullptr && tail == nullptr) // 노드가 없을 때
        {
            cout << "삭제할 노드가 없습니다." << endl;
            return;
        }
        else
        {
            deleteNode = head;
            
            if (deleteNode->next == nullptr) // 노드가 하나밖에 없을 때
            {
                head = nullptr;
                tail = nullptr;

                delete deleteNode;
            }
            else // 노드 여러개 있을 때
            {
                head = deleteNode->next;

                delete deleteNode;
            }
        }

        size--;
    }

    void PopBack()
    {

    }

    int Size()
    {
        return size;
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
        
        delete showNode;
    }
    
    ~SingleLinkedList()
    {
        Node* deleteNode = new Node;

        for (int i = 0; i < size; i++)
        {
            deleteNode = head;
            head = deleteNode->next;
            delete deleteNode;
        }
        cout << "소멸자 호출로 모든 노드를 삭제했습니다." << endl;
    }
};

