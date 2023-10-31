#pragma once
#include <iostream>
using namespace std;

#pragma region ���� Ž�� Ʈ�� (BST)
// ������ Ű�� ���� ���Ҹ� ����, ����, �˻��ϴµ�
// ȿ������ �˰��� �Դϴ�.

// ���� ���� Ʈ��
// �ϳ��� ������ �̷���� �ִ� Ʈ��

// ��ȭ ���� Ʈ��
// ������带 ������ ��� ����� ������ 2���� �̷���� �ִ� Ʈ��

// ���� ���� Ʈ��
// ��� ��尡 ���� ������ ���ʴ�� �����Ǵ� Ʈ��

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