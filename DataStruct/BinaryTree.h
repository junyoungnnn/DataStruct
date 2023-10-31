//#pragma once
//#include <iostream>
//#include "TREE.h"
//
//using namespace std;
//
//#pragma region Ʈ��
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
//// ���� ��ȸ
//// 1. ��Ʈ ��带 �湮�մϴ�.
//// 2. ���� ���� Ʈ���� ���� ��ȸ �մϴ�.
//// 3. ������ ���� Ʈ���� ���� ��ȸ �մϴ�.
//
//// ���� ��ȸ
//
//// ���� ��ȸ
//#pragma endregion
//
//int main()
//{
//#pragma region Ʈ��
//    // �׷����� �������� ������ ������
//    // �̿��Ͽ� �������� ��ġ ���¸� �߻�ȭ�� �ڷ� �����Դϴ�.
//
//    Node* node7 = CreateNode(7, nullptr, nullptr);
//    Node* node6 = CreateNode(6, nullptr, nullptr);
//    Node* node5 = CreateNode(5, nullptr, nullptr);
//    Node* node4 = CreateNode(4, nullptr, nullptr);
//    Node* node3 = CreateNode(3, node6, node7);
//    Node* node2 = CreateNode(2, node4, node5);
//    Node* node1 = CreateNode(1, node2, node3);
//
//    cout << "����" << endl;
//    Pre_order(node1);
//
//    cout << "����" << endl;
//    In_order(node1);
//
//    cout << "����" << endl;
//    Post_order(node1);
//#pragma endregion
//
//    return 0;
//}
