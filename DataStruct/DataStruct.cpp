#include <iostream>

using namespace std;

#pragma region 단일 연결 리스트

struct Node
{
    int data;
    Node* next;
};

#pragma endregion

void PushFront(Node* target, int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = target->next;
    target->next = newNode;

    return;
}

int main()
{
    Node* head = new Node;
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;

    head->data = NULL;
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    PushFront(head, 100);
    PushFront(head, 200);
    PushFront(head, 300);

    Node* currentPtr = head->next;

    while (currentPtr != nullptr)
    {
        cout << currentPtr->data << endl;
        currentPtr = currentPtr->next;
    }

    return 0;
}
