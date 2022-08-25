#include <iostream>
using namespace std;
void SelectionSort(int Data[], int t)
{
    int i, j, flag, temp;
    for (i = 0; i < t - 1; i++)
    {
        flag = i;
        for (j = i + 1; j < t; j++)
        {
            if (Data[j] < Data[flag])
                flag = j;
        }
        temp = Data[i];
        Data[i] = Data[flag];
        Data[flag] = temp;
    }
}
int main()
{
    int Array[20], n, i;
    cout << "Enter Size of Array :- ";
    cin >> n;
    cout << "Enter " << n << " Elements in Array :- ";
    for (i = 0; i < n; i++)
        cin >> Array[i];
    cout << "Array Before Sorting :- ";
    for (i = 0; i < n; i++)
        cout << Array[i] << "\t";
    SelectionSort(Array, n);
    cout << endl
         << "Array After Sorting :- ";
    for (i = 0; i < n; i++)
        cout << Array[i] << "\t";
    return 0;
}
