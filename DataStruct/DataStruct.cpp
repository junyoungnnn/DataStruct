#include <iostream>
#include "SingleLinkedList.h"
#include "DoubleLinkedList.h"

using namespace std;


#pragma region 단일 연결 리스트
//
//struct Node
//{
//    int data;
//    Node* next;
//};
//
//void PushFront(Node* target, int data)
//{
//    Node* newNode = new Node;
//    newNode->data = data;
//    newNode->next = target->next;
//    target->next = newNode;
//
//    return;
//}
//// 삭제 하고 클래스 만들기
//
//void RemoveNext(Node* target)
//{
//    Node* deleteNode = target->next;
//    
//    target->next = deleteNode->next;
//
//    delete deleteNode;
//
//    return;
//}
#pragma endregion

int main()
{
#pragma region 단일 연결 리스트

    /*Node* head = new Node;
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

    RemoveNext(head);

    Node* currentPtr = head->next;

    while (currentPtr != nullptr)
    {
        cout << currentPtr->data << endl;
        currentPtr = currentPtr->next;
    }*/

#pragma endregion

#pragma region 단방향 연결리스트 클래스
    /*SingleLinkedList<int> list;

    list.PushFront(10);
    list.PushFront(20);
    list.PushFront(30);
    list.PushFront(40);
    list.PushBack(100);
    list.PushBack(200);
    list.PushBack(300);

    cout << "노드의 개수: " << list.Size() << endl;
    list.Show();

    SingleLinkedList<double> dlist;

    dlist.PushFront(3.14);
    dlist.PushBack(1.592);

    cout << "노드의 개수: " << dlist.Size() << endl;
    dlist.Show();*/
#pragma endregion

#pragma region 양방향 연결리스트

    DoubleLinkedList<int> doubleList;

    doubleList.PushBack(10);
    doubleList.PushBack(20);
    doubleList.PushBack(30);

    doubleList.PushFront(100);
    doubleList.PushFront(200);
    doubleList.PushFront(300);
    doubleList.Insert(6, 1000);
    cout << "노드의 개수: " << doubleList.Size() << endl;

    doubleList.Show();
#pragma endregion

    

    return 0;
}
