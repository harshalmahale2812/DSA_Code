#include <iostream>
using namespace std;
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    cout << "Enter the First matrix\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cin >> a[i][j];
    }
    cout << "Enter the Second matrix\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cin >> b[i][j];
    }
    cout << "Addition of given two Matrix\n";
    for (i = 0; i < 2; i++)
    {
        cout << endl;
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "\t";
        }
    }
    return 0;
}