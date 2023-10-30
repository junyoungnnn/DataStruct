#pragma once

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
		capacity = 1;
		bufferPointer = nullptr;
	}

	T& operator[] (const int value)
	{
		return T[value];
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
			cout << "���Ͱ� ����ֽ��ϴ�" << endl;
		}
		else
		{
			bufferPointer[size--] = nullptr;
		}
	}

	void Resize(int newSize)
	{
		// 1. capacity�� ���ο� size���� �����մϴ�.
		capacity = newSize;

		// 2. ���ο� ������ ������ �����ؼ� ���Ӱ� �������
		//	  �޸� ������ ����Ű���� �����մϴ�.
		T* tempBuffer = new T[capacity];

		// 3. ���ο� �޸� ������ ���� �ʱ�ȭ �մϴ�.
		for (int i = 0; i < capacity; i++)
		{
			tempBuffer[i] = NULL;
		}

		// 4. ���� �迭�� �ִ� ���� �����ؼ� ���ο� �迭�� �־��ݴϴ�.
		for (int i = 0; i < size; i++)
		{
			tempBuffer[i] = bufferPointer[i];
		}

		// bufferPointer�� �޸� �ּҸ� �����մϴ�.
		if (bufferPointer != nullptr)
		{
			delete[] bufferPointer;
		}
		
		bufferPointer = tempBuffer;
	}

	int& Size()
	{
		return size;
	}

	~VECTOR()
	{
		delete[] bufferPointer;
	}
	
};

