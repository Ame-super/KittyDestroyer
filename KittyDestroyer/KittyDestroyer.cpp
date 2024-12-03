#include <iostream>
#include <cmath>
using namespace std;

// напиши функцию для вывода массива А
void print_1d_8el(float* massiv)
{
    for (int i{}; i < 8; ++i)
    {
        cout << massiv[i] << " ";
    }
}

int main()
{

    cout << "massiv\n";
    float A[8];
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
    print_1d_8el(A);

    //тут должена быть функция для вывода
    // xnjj
}