

#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int size;
    cout << "input size -- ";
    cin >> size;
    int* ptr = new int[size];

    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 41 - 20;
        cout << ptr[i] << "\t";
    }
    cout << endl;

    int a = 0, b = 0, c = 0;
    int* negativ = new int[size];
    int* positiv = new int[size];
    int* zero = new int[size];

    for (int i = 0; i < size; i++)
    {
        if (ptr[i] < 0)
            negativ[a++] = ptr[i];
        else if (ptr[i] > 0)
            positiv[b++] = ptr[i];
        else
            zero[c++] = ptr[i];
    }

    delete[] ptr;

    cout << "negative numbers -- ";
    for (int i = 0; i < a; i++)
        cout << negativ[i] << "\t";
    cout << endl;

    cout << "positive numbers -- ";
    for (int i = 0; i < b; i++)
        cout << positiv[i] << "\t";
    cout << endl;

    cout << "zeros -- ";
    for (int i = 0; i < c; i++)
        cout << zero[i] << "\t";
    cout << endl;

    delete[] negativ;
    delete[] positiv;
    delete[] zero;

}
