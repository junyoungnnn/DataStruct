#pragma once
#include <iostream>
#include <string>

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

	// string�� ������ ���� ����
	template <typename T>
	int HashFunction(T key)
	{
		int hashIndex = (int)key % SIZE;

		return hashIndex;
	}

	// template Ư��ȭ string ���� ����
	template<>
	int HashFunction(std::string key)
	{
		int sumVaule = 0;

		for (const char& element : key)
		{
			sumVaule += (int)element;
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
		Node* newNode = CreateNode(key, value);

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

	void Remove(K key)
	{

		int hashIndex = HashFunction(key);

		Node* currentNode;

		Node* traceNode = nullptr;


		currentNode = bucket[hashIndex].head;

		if (currentNode == nullptr) // ������ ��尡 ����
		{

		}
		else
		{
			while(currentNode->next != nullptr)
			{
				currentNode = currentNode->next;
				if (currentNode->key == key)
				{
					cout << "ã���� �ϴ� Ű���� ã�Ҵ�" << endl;
					break;
				}
				traceNode = currentNode;
			}

			if (currentNode->next == nullptr)
			{
				traceNode->next = nullptr;
			}
			else
			{
				traceNode->next = currentNode->next;
			}

			delete currentNode;
		}

		// ã���� �ϴ� Ű�� �������϶�, nullptr�� ����

		// ã���� �ϴ� Ű�� �������� �ƴҶ�, �ڿ� ����

		// ã�� Ű�� ���� ��

		// count--;
	}

};