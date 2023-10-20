#pragma once
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

    Vector2 operator+(const Vector2& vector)
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

    Vector2 operator++()
    {
        this->x++;
        this->y++;

        return *this;
    }

    Vector2 operator++(int)
    {
        Vector2 clone = *this;

        ++(*this);

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
#pragma region ��ǰ ����
    // ���� ������ �� ���Ҹ� �˻��Ͽ� �����ϴ� �˰��� �Դϴ�.

    // �ð� ���⵵ O(n^2)

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

#pragma region  ������ �����ε�

    Vector2 UP(0, 1);
    Vector2 Right(1, 0);

    // clone ��ü (1,1)�� ��ȯ�� �Ǽ� ��

    UP++;
    cout << UP.GetX() << endl;
    UP++;
    cout << UP.GetX() << endl;
    UP++;
    cout << UP.GetX() << endl;

    Vector2 sum = UP + Right;

    ++sum;
    cout << sum.GetX() << endl;
    ++sum;
    cout << sum.GetY() << endl;

#pragma endregion

    return 0;
}
