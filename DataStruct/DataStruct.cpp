#include <iostream>

#define SIZE 5

using namespace std;
class Vector2
{
private:
    int x;
    int y;
public:
    Vector2(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    Vector2 operator+(const Vector2 &vector)
    {
        Vector2 clone(this->x + vector.x, this->y + vector.y);

        return clone;
    }

    Vector2 operator-(const Vector2& vector)
    {
        Vector2 clone(this->x - vector.x, this->y - vector.y);

        return clone;
    }

    Vector2 operator*(const Vector2& vector)
    {
        Vector2 clone(this->x * vector.x, this->y * vector.y);

        return clone;
    }

    Vector2 operator/(const Vector2& vector)
    {
        Vector2 clone(this->x / vector.x, this->y / vector.y);

        return clone;
    }

    int GetX()
    {
        return x;
    }

    int GetY()
    {
        return y;
    }
};
int main()
{
#pragma region 거품 정렬
    // 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘 입니다.

    // 시간 복잡도 O(n^2)

    /*int bubbleBuffer[SIZE] = { 3,5,4,1,2 };

    for (int i = 0; i < sizeof(bubbleBuffer) / sizeof(int); i++)
    {
        cout << bubbleBuffer[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < sizeof(bubbleBuffer) / sizeof(int); i++)
    {
        for (int j = 0; j < sizeof(bubbleBuffer) / sizeof(int) - 1 - i; j++)
        {
            if (bubbleBuffer[j] > bubbleBuffer[j + 1])
            {
                swap(bubbleBuffer[j], bubbleBuffer[j + 1]);
            }
        }
    }

    for (const int& element : bubbleBuffer)
    {
        cout << element << " ";
    }*/

#pragma endregion

#pragma region  연산자 오버로딩
   
    Vector2 UP(0, 1);
    Vector2 Right(1, 0);

    // clone 객체 (1,1)이 반환이 되서 들어감
    Vector2 sum = UP + Right;

    cout << sum.GetX() << endl;
    cout << sum.GetY() << endl;
#pragma endregion

    return 0;
}
