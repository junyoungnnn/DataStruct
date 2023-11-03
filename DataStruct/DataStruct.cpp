#include <iostream>
#include "TREE.h"
#include "CircleQueue.h"
#include "BinarySearchTree.h"
#include "HEAP.h"

using namespace std;

#pragma region 트리
//struct Node
//{
//    int data;
//    Node* left;
//    Node* right;
//};
//
//Node* CreateNode(int data, Node* left, Node* right)
//{
//    Node* newNode = new Node;
//    newNode->data = data;
//    newNode->left = left;
//    newNode->right = right;
//
//    return newNode;
//}
//
//void Pre_order(Node* root)
//{
//    
//    if (root != nullptr)
//    {
//        cout << root->data << endl;
//        Pre_order(root->left);
//        Pre_order(root->right);
//    }
//}
//
//void In_order(Node* root)
//{
//    
//    if (root != nullptr)
//    {
//        In_order(root->left);
//        cout << root->data << endl;
//        In_order(root->right);
//    }
//}
//
//void Post_order(Node* root)
//{
//    
//    if (root != nullptr)
//    {
//        Post_order(root->left);
//        Post_order(root->right);
//        cout << root->data << endl;
//    }
//}
// 전위 순회
// 1. 루트 노드를 방문합니다.
// 2. 왼쪽 서브 트리를 전위 순회 합니다.
// 3. 오른쪽 서브 트리를 전위 순회 합니다.

// 중위 순회

// 후위 순회
#pragma endregion

int main()
{
#pragma region 스택

    /*STACK<int> stack;
    stack.Push(100);
    stack.Push(200);
    stack.Push(300);
    stack.Push(400);
    stack.Push(500);

    cout << stack.Size() << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << stack.Top() << endl;
        stack.Pop();
    }
    cout << stack.Top() << endl;
    stack.Pop();*/
#pragma endregion

#pragma region  선형 큐
    // 배열의 공간에 들어간 데이터가 고정되어 데이터를 
    // 빼내더라도 초기화하지 않으며 원래 데이터가
    // 있던 배열의 자리에 더 이상 다른 값이 들어갈 수 없는 큐 입니다.

    /*LinearQueue<int> arr;
    arr.Enqueue(10);
    arr.Enqueue(20);
    arr.Enqueue(30);
    arr.Enqueue(40);
    arr.Enqueue(50);
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr.Front() << endl;
        arr.Dequeue();
    }
    arr.Dequeue();*/

#pragma endregion

#pragma region 계수 정렬
    // 데이터의 값을 직접 비교하지 않고, 단순하게 각 숫자가
    // 몇 개 있는지 갯수를 세어 저장한 다음 정렬하는 알고리즘입니다.

    // 시간 복잡도 O(n + k)

    /*int arr[] = {2,4,5,1,4,3,2,1,5,4};

    int count[5] = { 0 };

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        count[arr[i] - 1]++;
    }

    for (int j = 0; j < sizeof(count) / sizeof(int); j++)
    {
        cout << count[j] << endl;
    }*/

#pragma endregion

#pragma region 원형 큐
    // 물리적으로는 선형 구조를 가지고 있으며,
    // 큐의 시작점과 끝점을 연결한 큐입니다.

    /*CircleQueue<int> CQ;
    
    CQ.EnQueue(10);
    CQ.EnQueue(20);
    CQ.EnQueue(30);
    CQ.DeQueue();

    cout << CQ.Front() << endl;

    CQ.Show();*/
    
#pragma endregion

#pragma region 벡터

    /*VECTOR<int> VT;
    VT.PushBack(10);
    VT.PushBack(20);
    VT.PushBack(30);
    VT.PushBack(40);
    cout << VT[3] << endl;*/

#pragma endregion

#pragma region 트리
    // 그래프의 일종으로 정점과 간선을
    // 이용하여 데이터의 배치 형태를 추상화한 자료 구조입니다.

    /*Node* node7 = CreateNode(7, nullptr, nullptr);
    Node* node6 = CreateNode(6, nullptr, nullptr);
    Node* node5 = CreateNode(5, nullptr, nullptr);
    Node* node4 = CreateNode(4, nullptr, nullptr);
    Node* node3 = CreateNode(3, node6, node7);
    Node* node2 = CreateNode(2, node4, node5);
    Node* node1 = CreateNode(1, node2, node3);

    cout << "전위" << endl;
    Pre_order(node1);

    cout << "중위" << endl;
    In_order(node1);

    cout << "후위" << endl;
    Post_order(node1);*/
#pragma endregion

#pragma region 이진 탐색 트리

//BinarySearchTree<int> BST;
//BST.CreateRoot(15);
//BST.Insert(14, BST.GetRoot());
//BST.Insert(12, BST.GetRoot());
//BST.Insert(11, BST.GetRoot());
//BST.Insert(19, BST.GetRoot());
//cout << BST.MinValue(BST.GetRoot()) << endl;
//cout << BST.MaxValue(BST.GetRoot()) << endl;

#pragma endregion

#pragma region 힙

HEAP<int> heap;
heap.Insert(13);
heap.Insert(15);
heap.Insert(20);
heap.Insert(12);
heap.Insert(30);
heap.Insert(50);
heap.Insert(45);
heap.Display();

#pragma endregion

    return 0;
}
