#pragma once
#include <iostream>
#define SIZE 5

using namespace std;

template <typename K, typename V>
class HashTable
{
private:
	
	struct Node
	{
		K key;
		V value;

		Node* next;
	};

	struct Bucket
	{
		int count;
		Node* head;
	};


	int HashValue;
	Bucket bucket[SIZE];
public:

	HashTable()
	{
		
		for (int i = 0; i < SIZE; i++)
		{
			bucket[i].count = 0;
			bucket[i].head = nullptr;
		}
	}

	int HashFunction(K key)
	{
		int sumVaule = 0;
		for (const char &element : key)
		{
			sumVaule += element;
		}
		int hashIndex = sumVaule % SIZE;

		return hashIndex;
	}

	Node* CreateNode(K key, V value)
	{
		Node* newNode = new Node;
		newNode->key = key;
		newNode->value = value;
		newNode->next = nullptr;

		return newNode;
	}

	void Insert(K key, V value)
	{
		// �ؽ� �Լ��� ���ؼ� ���� �޴� �ӽ� ����
		int hashIndex = HashFunction(key);

		// ���ο� ��带 �����մϴ�.
		Node * newNode = CreateNode(key, value);

		// ��尡 1���� �������� �ʴ´ٸ�

		if (bucket[hashIndex].count == 0)
		{
			bucket[hashIndex].head = newNode;
			bucket[hashIndex].count++;
		}
		else // ��尡 �Ѱ��� �����Ѵٸ�
		{
			newNode->next = bucket[hashIndex].head;

			bucket[hashIndex].head = newNode;

			bucket[hashIndex].count++;
		}

	}




};