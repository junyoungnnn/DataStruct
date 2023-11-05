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
		if (Find(root, data))
		{
			cout << "중복 값입니다" << endl;
			return;
		}

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

		/*void Insert(T data, Node * root)
		{
			if (root == nullptr)
			{
				root = new Node;
				root->data = data;
				root->left = nullptr;
				root->right = nullptr;
			}
			else if (root->data > data)
			{
				Insert(data, root->left);
			}
			else if (root->data < data)
			{
				Insert(data, root->right);
			}
		}*/


	}

	T& MinValue(Node* root)
	{
		if (root == nullptr)
		{
			cout << "Binary Search Tree is Empty" << endl;
			exit(1);
		}
		
		if (root->left == nullptr)
		{
			return root->data;
		}
		else
		{
			return MinValue(root->left);
		}
	}

	T& MaxValue(Node* root)
	{
		if (root == nullptr)
		{
			cout << "Binary Search Tree is Empty" << endl;
			exit(1);
		}

		if (root->right == nullptr)
		{
			return root->data;
		}
		else
		{
			return MaxValue(root->right);
		}
	}

	void In_order(Node* root)
	{

		if (root != nullptr)
		{
			In_order(root->left);
			cout << root->data << " ";
			In_order(root->right);
		}
	}

	bool Find(Node* root, T data)
	{
		if (data == root->data)
		{
			return true;
		}
		else if (root->left == nullptr)
		{
			return false;
		}
		else if (root->right == nullptr)
		{
			return false;
		}
		else if (data < root->data)
		{
			Find(root->left, data);
		}
		else if (data > root->data)
		{
			Find(root->right, data);
		}
	}

	Node* MinMaxValue(Node* root)
	{
		if (root->right != nullptr)
		{
			return MinMaxValue(root->right);
		}
	}

	Node* Delete(Node* root, T data)
	{
		if (root == nullptr)
		{
			cout << "삭제할 데이터가 없습니다" << endl;
			return root;
		}
		
		if (data < root->data)
		{
			root->left = Delete(root->left, data);
		}
		else if (data > root->data)
		{
			root->right = Delete(root->right, data);
		}
		else // 삭제 할 노드를 찾았다.
		{
			Node* tempNode;

			if (root->left == nullptr && root->right == nullptr) // 자식노드가 없을때
			{
				delete root;
				return nullptr;
			}
			else if (root->left == nullptr) // 자식 노드가 하나일때
			{
				tempNode = root->right;
				delete root;
				return tempNode;
			}
			else if (root->right == nullptr) 
			{
				tempNode = root->left;
				delete root;
				return tempNode;
			}
			else // 자식노드가 두개일때
			{
				tempNode = MinMaxValue(root->left); // 왼쪽 트리에서 최댓값 찾고
				root->data = tempNode->data; // 복사
				root->left = Delete(root->left, tempNode->data); // 왼쪽 트리에서 삭제할 노드 찾아서 삭제
			}
		}
		return root;
	}
};