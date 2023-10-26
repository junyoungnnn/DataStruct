#pragma once
#include <iostream>

using namespace std;

int main()
{
#pragma region 삽입 정렬
    // 두 번째 자료부터 시작하여 그 앞(왼쪽의)
    // 자료들과 비교하여 삽일할 위치를 지정한 후
    // 자료를 뒤로 옮기고 지정한 자리에 자료를 삽입하여
    // 정렬하는 알고리즘 입니다.

    // 시간 복잡도 O(n^2)

    /*int insertArr[] = { 9,1,5,3,7,123,112,6788,234,11235,23,64,86,1979};

    int size = sizeof(insertArr) / sizeof(int);

    int key = 0;

    for (int i = 1; i < size; i++)
    {+
        key = insertArr[i];

        for (int j = i-1; j > -1; j--)
        {

            if (key < insertArr[j])
            {
                insertArr[j+1] = insertArr[j];
            }

            if (j==0  && key < insertArr[j])
            {
                insertArr[j] = key;
            }
            else if (key > insertArr[j])
            {
                insertArr[j+1] = key;
                break;
            }
        }
    }
    for (const int& element : insertArr)
    {
        cout << element << " ";
    }*/


    /*int j = 0;
    for (int i = 1; i < size; i++)
    {
        key = insertArr[i];

        for (j = i - 1; j >= 0 && insertArr[j] > key; j--)
        {
            insertArr[j + 1] = insertArr[j];
        }

        insertArr[j + 1] = key;
    }*/


#pragma endregion

#pragma region 예외 처리

    // 나중에 c#에서 하는걸로

    /*int value = 0;

    try
    {
        cin >> value;
        int result = 10 / value;

        throw result;
    }
    catch(std::exception error)
    {
        cout << error.what();
    }*/


#pragma endregion

#pragma region 시간 복잡도
    // 컴퓨터 프로그램의 입력 값과 연산 수행 시간의
    // 상관관계를 나타내는 척도 입니다.

    // Big-O 표기법
    // 입력값의 변화에 따라 연산을 수행할 때,
    // 연산 횟수에 비해 시간이 얼마만큼 걸리는 지 나타내는 척도 입니다.

    // 최악의 경우를 고려하므로, 프로그램이 실행되는
    // 과정에서 소요되는 최악의 시간까지 고려할 수 있기 때문입니다.

    // O(1) 상수 시간 복잡도
    // 입력값이 증가하더라도 시간이 늘어나지 않는 시간 복잡도 입니다.

    // ex) 배열의 인덱스 접근
    // int buffer[10]
    // cout << buffer[5];

    // O(n) 선형 시간 복잡도
    // 입력값이 증가함에 따라 시간 또한 같은 비율로
    // 증가하는 시간 복잡도 입니다.

    // 대표적인 예시: for문

    // O(log n) 로그 시간 복잡도
    // 입력 데이터의 크기가 커질수록 처리 시간이 log n만큼
    // 짧아지는 시간 복잡도 입니다.
#pragma endregion




    return 0;
}
