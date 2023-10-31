#pragma once
#include <iostream>
using namespace std;

#pragma region 이진 탐색 트리 (BST)
// 임의의 키를 가진 원소를 삽입, 삭제, 검색하는데
// 효율적인 알고리즘 입니다.

// 편향 이진 트리
// 하나의 차수로 이루어져 있는 트리

// 포화 이진 트리
// 리프노드를 제외한 모든 노드의 차수가 2개로 이루어져 있는 트리

// 완전 이진 트리
// 모든 노드가 왼쪽 노드부터 차례대로 생성되는 트리

#pragma endregion

template <typename T>
class BinarySearchTree
{
private:
	struct Node
	{
		T data;
		Node* left;
		Node* right;
	};

	Node* rootNode;

public:
	BinarySearchTree()
	{
		rootNode = nullptr;
	}

	Node* GetRoot()
	{
		return rootNode;
	}

	void CreateRoot(T data)
	{
		if (rootNode == nullptr)
		{
			rootNode = new Node;
			rootNode->data = data;
			rootNode->left = nullptr;
			rootNode->right = nullptr;
		}
	}
	void Insert(T data, Node* root)
	{
		
		if (data < root->data)
		{
			if (root->left == nullptr)
			{
				Node* newNode = new Node;
				newNode->data = data;
				newNode->left = nullptr;
				newNode->right = nullptr;

				root->left = newNode;
				return;
			}
			else
			{
				Insert(data, root->left);
			}
		}
		else if (data > root->data)
		{
			if (root->right == nullptr)
			{
				Node* newNode = new Node;
				newNode->data = data;
				newNode->left = nullptr;
				newNode->right = nullptr;

				root->right = newNode;
				return;
			}
			else
			{
				Insert(data, root->right);
			}
		}


	}

	T& MinValue()
	{

	}

	T& MaxValue()
	{

	}

	void In_order(Node* root)
	{

    if (root != nullptr)
    {
        In_order(root->left);
        cout << root->data << endl;
        In_order(root->right);
    }
}

	bool Find()
	{

	}

};