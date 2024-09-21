#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    double* array = new double[n];

    /*const int n = 5;
    double array[n];*/

    cout << "Enter the values of the array elements: " << endl;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if ((i > 0) && (array[i] > array[i - 1]))
        {
            flag = 0;
        }
    }

    if (flag)
    {
        cout << "Sequence is ordered descending" << endl;
    }
    else
    {
        cout << "Sequence is not ordered in descending order" << endl;
    }

    delete[] array;
    return 0;
}
