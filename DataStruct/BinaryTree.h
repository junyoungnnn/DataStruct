//#pragma once
//#include <iostream>
//#include "TREE.h"
//
//using namespace std;
//
//#pragma region 트리
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
//// 전위 순회
//// 1. 루트 노드를 방문합니다.
//// 2. 왼쪽 서브 트리를 전위 순회 합니다.
//// 3. 오른쪽 서브 트리를 전위 순회 합니다.
//
//// 중위 순회
//
//// 후위 순회
//#pragma endregion
//
//int main()
//{
//#pragma region 트리
//    // 그래프의 일종으로 정점과 간선을
//    // 이용하여 데이터의 배치 형태를 추상화한 자료 구조입니다.
//
//    Node* node7 = CreateNode(7, nullptr, nullptr);
//    Node* node6 = CreateNode(6, nullptr, nullptr);
//    Node* node5 = CreateNode(5, nullptr, nullptr);
//    Node* node4 = CreateNode(4, nullptr, nullptr);
//    Node* node3 = CreateNode(3, node6, node7);
//    Node* node2 = CreateNode(2, node4, node5);
//    Node* node1 = CreateNode(1, node2, node3);
//
//    cout << "전위" << endl;
//    Pre_order(node1);
//
//    cout << "중위" << endl;
//    In_order(node1);
//
//    cout << "후위" << endl;
//    Post_order(node1);
//#pragma endregion
//
//    return 0;
//}
