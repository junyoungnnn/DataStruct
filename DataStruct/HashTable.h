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
		// 해시 함수를 통해서 값을 받는 임시 변수
		int hashIndex = HashFunction(key);

		// 새로운 노드를 생성합니다.
		Node * newNode = CreateNode(key, value);

		// 노드가 1개라도 존재하지 않는다면

		if (bucket[hashIndex].count == 0)
		{
			bucket[hashIndex].head = newNode;
			bucket[hashIndex].count++;
		}
		else // 노드가 한개라도 존재한다면
		{
			newNode->next = bucket[hashIndex].head;

			bucket[hashIndex].head = newNode;

			bucket[hashIndex].count++;
		}

	}




};