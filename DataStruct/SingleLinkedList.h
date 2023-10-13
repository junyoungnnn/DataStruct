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
            newNode->next = nullptr; // �ؾ��ϴ°�?
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

        if (head == nullptr && tail == nullptr) // ��尡 ���� ��
        {
            cout << "������ ��尡 �����ϴ�." << endl;
            return;
        }
        else
        {
            deleteNode = head;
            
            if (deleteNode->next == nullptr) // ��尡 �ϳ��ۿ� ���� ��
            {
                head = nullptr;
                tail = nullptr;

                delete deleteNode;
            }
            else // ��� ������ ���� ��
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
        cout << "�Ҹ��� ȣ��� ��� ��带 �����߽��ϴ�." << endl;
    }
};

