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

	// string을 제외한 값만 받음
	template <typename T>
	int HashFunction(T key)
	{
		int hashIndex = (int)key % SIZE;

		return hashIndex;
	}

	// template 특수화 string 값만 받음
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
		// 해시 함수를 통해서 값을 받는 임시 변수
		int hashIndex = HashFunction(key);

		// 새로운 노드를 생성합니다.
		Node* newNode = CreateNode(key, value);

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

	void Remove(K key)
	{

		int hashIndex = HashFunction(key);

		Node* currentNode = bucket[hashIndex].head;

		Node* traceNode = nullptr;

		if (currentNode == nullptr) // 삭제할 노드가 없음
		{
			cout << "HashTable is Empty" << endl;
			return;
		}

		while (currentNode != nullptr)
		{

			if (currentNode->key == key) // 키 값을 찾았다
			{
				// 삭제하고자 하는 노드가 head노드라면
				if (currentNode == bucket[hashIndex].head)
				{
					bucket[hashIndex].head = currentNode->next;
					cout << currentNode->key << "을 삭제했습니다." << endl;
				}
				else
				{
					traceNode->next = currentNode->next;
					cout << currentNode->key << "을 삭제했습니다." << endl;
				}

				bucket[hashIndex].count--;

				delete currentNode;

				return;
			}
			traceNode = currentNode;
			currentNode = currentNode->next;
		}

		cout << "Not key Found" << endl;
		// 찾고자 하는 키가 마지막일때, nullptr과 연결

		// 찾고자 하는 키가 마지막이 아닐때, 뒤와 연결

		// 찾는 키가 없을 때

		// count--;
	}

	//void Find(K key)
	//{
	//	int hashIndex = HashFunction(key);

	//	Node* currentNode = bucket[hashIndex].head;

	//	Node* traceNode = nullptr;

	//	if (currentNode == nullptr) // 삭제할 노드가 없음
	//	{
	//		cout << "HashTable is Empty" << endl;
	//		return;
	//	}

	//	while (currentNode != nullptr)
	//	{

	//		if (currentNode->key == key)
	//		{
	//			cout << "찾고자 하는 키값을 찾았다"<< currentNode->key << currentNode->value << endl;
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