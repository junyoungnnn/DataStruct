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

		Node* currentNode = bucket[hashIndex].head;

		Node* traceNode = nullptr;

		if (currentNode == nullptr) // ������ ��尡 ����
		{
			cout << "HashTable is Empty" << endl;
			return;
		}

		while (currentNode != nullptr)
		{

			if (currentNode->key == key) // Ű ���� ã�Ҵ�
			{
				// �����ϰ��� �ϴ� ��尡 head�����
				if (currentNode == bucket[hashIndex].head)
				{
					bucket[hashIndex].head = currentNode->next;
					cout << currentNode->key << "�� �����߽��ϴ�." << endl;
				}
				else
				{
					traceNode->next = currentNode->next;
					cout << currentNode->key << "�� �����߽��ϴ�." << endl;
				}

				bucket[hashIndex].count--;

				delete currentNode;

				return;
			}
			traceNode = currentNode;
			currentNode = currentNode->next;
		}

		cout << "Not key Found" << endl;
		// ã���� �ϴ� Ű�� �������϶�, nullptr�� ����

		// ã���� �ϴ� Ű�� �������� �ƴҶ�, �ڿ� ����

		// ã�� Ű�� ���� ��

		// count--;
	}

	//void Find(K key)
	//{
	//	int hashIndex = HashFunction(key);

	//	Node* currentNode = bucket[hashIndex].head;

	//	Node* traceNode = nullptr;

	//	if (currentNode == nullptr) // ������ ��尡 ����
	//	{
	//		cout << "HashTable is Empty" << endl;
	//		return;
	//	}

	//	while (currentNode != nullptr)
	//	{

	//		if (currentNode->key == key)
	//		{
	//			cout << "ã���� �ϴ� Ű���� ã�Ҵ�"<< currentNode->key << currentNode->value << endl;
	//			break;
	//		}
	//	}
	//}

	void Display()
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (bucket[i].head != nullptr)
			{
				Node* currentNode = bucket[i].head;
				for (int j = 0; j < bucket[i].count; j++)
				{
					cout<< "[" << i << "]: " << "Key : " << currentNode->key << " " << "Value : " << currentNode->value << " ";
					currentNode = currentNode->next;
				}
			}
			cout << endl;
		}
	}

	~HashTable()
	{

	}
};