#pragma once
#include <iostream>

using namespace std;

int main()
{
#pragma region ���� ����
    // ���ĵ��� ���� �����͵鿡 ���� ���� ���� �����͸�
    // ã�Ƽ� ���� �����͸� ã�Ƽ� ���� �տ� �ִ� �����Ϳ�
    //  ��ȯ�ϴ� �˰��� �Դϴ�.
    // �ð� ���⵵ O(n^2)

    int selectArr[] = { 5,4,9,1,7 };

    int size = sizeof(selectArr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        int min = selectArr[i];
        int index = i;

        for (int j = i + 1; j < size; j++)
        {
            if (min > selectArr[j])
            {
                min = selectArr[j];
                index = j;
            }
        }
        swap(selectArr[index], selectArr[i]);
    }

    for (const int& element : selectArr)
    {
        cout << element << " ";
    }

#pragma endregion


    return 0;
}
