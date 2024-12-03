#include <iostream>
#include <cmath>

// напиши функцию для вывода массива А

int main()
{
    using namespace std;
    cout << "массив\n";
    float A[20];
    for (int i = 0; i < 8; i++)
    {
        if (i < 4)
        {
            A[i] = sin(i);
        }
        else
        {
            A[i] = cos(i);
        }
    }
    //тут должена быть функция для вывода
    // xnjj
}