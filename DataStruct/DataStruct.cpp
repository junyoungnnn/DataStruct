#include <iostream>

using namespace std;

int main()
{
#pragma region 선택 정렬
    // 정렬되지 않은 데이터들에 대한 가장 작은 데이터를
    // 찾아서 가장 데이터를 찾아서 가장 앞에 있는 데이터와
    //  교환하는 알고리즙 입니다.
    // 시간 복잡도 O(n^2)

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
