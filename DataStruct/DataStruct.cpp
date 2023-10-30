#include <iostream>
#include "CIrcleQueue.h"

using namespace std;

int main()
{
#pragma region 스택

    /*STACK<int> stack;
    stack.Push(100);
    stack.Push(200);
    stack.Push(300);
    stack.Push(400);
    stack.Push(500);

    cout << stack.Size() << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << stack.Top() << endl;
        stack.Pop();
    }
    cout << stack.Top() << endl;
    stack.Pop();*/
#pragma endregion

#pragma region  선형 큐
    // 배열의 공간에 들어간 데이터가 고정되어 데이터를 
    // 빼내더라도 초기화하지 않으며 원래 데이터가
    // 있던 배열의 자리에 더 이상 다른 값이 들어갈 수 없는 큐 입니다.

    /*LinearQueue<int> arr;
    arr.Enqueue(10);
    arr.Enqueue(20);
    arr.Enqueue(30);
    arr.Enqueue(40);
    arr.Enqueue(50);
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr.Front() << endl;
        arr.Dequeue();
    }
    arr.Dequeue();*/

#pragma endregion

#pragma region 계수 정렬
    // 데이터의 값을 직접 비교하지 않고, 단순하게 각 숫자가
    // 몇 개 있는지 갯수를 세어 저장한 다음 정렬하는 알고리즘입니다.

    // 시간 복잡도 O(n + k)

    /*int arr[] = {2,4,5,1,4,3,2,1,5,4};

    int count[5] = { 0 };

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        count[arr[i] - 1]++;
    }

    for (int j = 0; j < sizeof(count) / sizeof(int); j++)
    {
        cout << count[j] << endl;
    }*/

#pragma endregion

#pragma region 원형 큐
    // 물리적으로는 선형 구조를 가지고 있으며,
    // 큐의 시작점과 끝점을 연결한 큐입니다.

    CircleQueue<int> CQ;
    CQ.DeQueue();
    CQ.EnQueue(10);
    CQ.EnQueue(20);
    CQ.EnQueue(30);

    cout << CQ.Front() << endl;

    CQ.Show();
    
    
#pragma endregion

    return 0;
}
