#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter natural number n: ";
    cin >> n;
    double result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= 1 + 1 / double(i * i);
    }

    cout << "Result: " << result << endl;

    double koren = sqrt(2.0);
    for (int i = 1; i < n; i++)
    {
        koren = sqrt(2 + koren);
    }

    cout << "Result sqrt: " << koren << endl;

    result = 0;
    double temp = 0;
    for (int i = 1; i <= n; i++)
    {
        temp = 0;
        for (int j = 1; j <= i; j++)
        {
            temp += sin(j);
        }
        result += 1 / temp;
    }

    cout << "Result sin: " << result << endl;

    return 0;
}
