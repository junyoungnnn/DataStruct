#pragma once
#include <iostream>
using namespace std;

template <typename T>
class VECTOR
{
private:
	int size;
	int capacity;
	T* bufferPointer;

public:
	VECTOR()
	{
		size = 0;
		capacity = 0;
		bufferPointer = nullptr;
	}

	T& operator[] (const int& value)
	{
		return bufferPointer[value];
	}

	void PushBack(T data)
	{
		if (capacity == 0)
		{
			Resize(1);
		}
		else if (size >= capacity)
		{
			capacity = capacity * 2;
			Resize(capacity);
		}
		bufferPointer[size++] = data;
	}


	void PopBack()
	{
		if (size <= 0)
		{
			cout << "벡터가 비어있습니다" << endl;
		}
		else
		{
			bufferPointer[--size] = NULL;
		}
	}

	void Resize(int newSize)
	{
		// 1. capacity에 새로운 size값을 설정합니다.
		capacity = newSize;

		// 2. 새로운 포인터 변수를 생성해서 새롭게 만들어진
		//	  메모리 공간을 가리키도록 설정합니다.
		T* tempBuffer = new T[capacity];

		// 3. 새로운 메모리 공간의 값을 초기화 합니다.
		for (int i = 0; i < capacity; i++)
		{
			tempBuffer[i] = NULL;
		}

		// 4. 기존 배열에 있는 값을 복사해서 새로운 배열에 넣어줍니다.
		for (int i = 0; i < size; i++)
		{
			tempBuffer[i] = bufferPointer[i];
		}

		// bufferPointer의 메모리 주소를 해제합니다.
		if (bufferPointer != nullptr)
		{
			delete[] bufferPointer;
		}
		
		bufferPointer = tempBuffer;
	}

	void Reserve(int newSize)
	{
		if (newSize < capacity)
		{
			return;
		}

		Resize(newSize);
	}

	int& Size()
	{
		return size; // 변수 size -> 그 자체가 넘어감
	}

	~VECTOR()
	{
		delete[] bufferPointer;
	}
	
};

