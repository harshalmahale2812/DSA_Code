#include <iostream>
using namespace std;
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    cout << "\nenter elements in first matrix:";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cin >> a[i][j];
    }
    for (i = 0; i < 2; i++)
    {
        cout << endl;
        for (j = 0; j < 2; j++)
        {
            cout << a[i][j] << "  ";
        }
    }
    cout << "\nenter elemensts of second matrix:";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cin >> b[i][j];
    }
    for (i = 0; i < 2; i++)
    {
        cout << endl;
        for (j = 0; j < 2; j++)
        {
            cout << b[i][j] << "  ";
        }
    }
    cout << "\naddition of given two matrix is:";
    for (i = 0; i < 2; i++)
    {
        cout << endl;
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "  ";
        }
    }
    return 0;
}