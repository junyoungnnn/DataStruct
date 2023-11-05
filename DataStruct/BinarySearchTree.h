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
		if (Find(root, data))
		{
			cout << "�ߺ� ���Դϴ�" << endl;
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
			cout << "������ �����Ͱ� �����ϴ�" << endl;
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
		else // ���� �� ��带 ã�Ҵ�.
		{
			Node* tempNode;

			if (root->left == nullptr && root->right == nullptr) // �ڽĳ�尡 ������
			{
				delete root;
				return nullptr;
			}
			else if (root->left == nullptr) // �ڽ� ��尡 �ϳ��϶�
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
			else // �ڽĳ�尡 �ΰ��϶�
			{
				tempNode = MinMaxValue(root->left); // ���� Ʈ������ �ִ� ã��
				root->data = tempNode->data; // ����
				root->left = Delete(root->left, tempNode->data); // ���� Ʈ������ ������ ��� ã�Ƽ� ����
			}
		}
		return root;
	}
};