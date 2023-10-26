#pragma once
#include <iostream>

using namespace std;

int main()
{
#pragma region ���� ����
    // �� ��° �ڷ���� �����Ͽ� �� ��(������)
    // �ڷ��� ���Ͽ� ������ ��ġ�� ������ ��
    // �ڷḦ �ڷ� �ű�� ������ �ڸ��� �ڷḦ �����Ͽ�
    // �����ϴ� �˰��� �Դϴ�.

    // �ð� ���⵵ O(n^2)

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

#pragma region ���� ó��

    // ���߿� c#���� �ϴ°ɷ�

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

#pragma region �ð� ���⵵
    // ��ǻ�� ���α׷��� �Է� ���� ���� ���� �ð���
    // ������踦 ��Ÿ���� ô�� �Դϴ�.

    // Big-O ǥ���
    // �Է°��� ��ȭ�� ���� ������ ������ ��,
    // ���� Ƚ���� ���� �ð��� �󸶸�ŭ �ɸ��� �� ��Ÿ���� ô�� �Դϴ�.

    // �־��� ��츦 ����ϹǷ�, ���α׷��� ����Ǵ�
    // �������� �ҿ�Ǵ� �־��� �ð����� ����� �� �ֱ� �����Դϴ�.

    // O(1) ��� �ð� ���⵵
    // �Է°��� �����ϴ��� �ð��� �þ�� �ʴ� �ð� ���⵵ �Դϴ�.

    // ex) �迭�� �ε��� ����
    // int buffer[10]
    // cout << buffer[5];

    // O(n) ���� �ð� ���⵵
    // �Է°��� �����Կ� ���� �ð� ���� ���� ������
    // �����ϴ� �ð� ���⵵ �Դϴ�.

    // ��ǥ���� ����: for��

    // O(log n) �α� �ð� ���⵵
    // �Է� �������� ũ�Ⱑ Ŀ������ ó�� �ð��� log n��ŭ
    // ª������ �ð� ���⵵ �Դϴ�.
#pragma endregion




    return 0;
}
