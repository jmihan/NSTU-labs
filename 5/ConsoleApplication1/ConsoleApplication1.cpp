#include <iostream>
using namespace std;

int N = 2; //размер векторов и матрицы NxN

void initVector(double* x) //Инициализация вектора
{
    cout << "Enter "<< N << " elements of vector : " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }
}
void printVector(double* x) //Вывод вектора в консоль
{
    for (int i = 0; i < N; i++)
    {
        cout << x[i] << " ";
    }
}
void initMatrix(double** A) //Инициализация матрицы
{
    cout << "Enter elements of matrix " << N << "x" << N << ": " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }
}
void printMatrix(double** A) //Вывод матрицы в консоль
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
double* multiplicationMatrOnVect(double** A, double* x) //Произведение матрицы на вектор
{
    double* result = new double[N];
    for (int i = 0; i < N; i++)
    {
        result[i] = 0;
        for (int j = 0; j < N; j++)
        {
            result[i] += A[i][j] * x[j];
        }
    }
    return result;
}
double scalarMultiplicationOfVectors(double* x, double* y) //Скалярное произведение векторов
{
    double result = 0;
    for (int i = 0; i < N; i++)
    {
        result += x[i] * y[i];
    }
    return result;
}
void deleteMatr(double** a)
{
    for (int i = 0; i < N; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}
int main()
{
    double* x = new double[N];
    double* y = new double[N];
    cout << "Initialization of vector x: " << endl;
    initVector(x);
    cout << "\nInitialization of vector y: " << endl;
    initVector(y);

    double** A = new double* [N];
    double** B = new double* [N];
    double** C = new double* [N];
    for (int i = 0; i < N; i++)
    {
        A[i] = new double[N];
        B[i] = new double[N];
        C[i] = new double[N];
    }
    cout << "\nInitialization of matrix A: " << endl;
    initMatrix(A);
    cout << "\nInitialization of matrix B: " << endl;
    initMatrix(B);
    cout << "\nInitialization of matrix C: " << endl;
    initMatrix(C);

    double* Ax = multiplicationMatrOnVect(A, x);
    double* By = multiplicationMatrOnVect(B, y);

    double AxBy = scalarMultiplicationOfVectors(Ax, By);

    double* Cx = multiplicationMatrOnVect(C, x);

    double Cxy = scalarMultiplicationOfVectors(Cx, y);
    double xBy = scalarMultiplicationOfVectors(x, By);

    cout << AxBy << " + " << Cxy << " / " << xBy << " = " << (AxBy + Cxy / xBy) << endl;
    delete[] x;
    delete[] y;
    deleteMatr(A);
    deleteMatr(B);
    deleteMatr(C);
    return 0;
}
//5 11, 16 22 = 80 + 242 = 322
//29 35, 2 1 = 58 + 35 = 93
//1 2, 16 22 = 16 + 44 = 60
//93 / 60 = 1.55
//322 + 1.55 = 323.55
// 
//x = 3.5 6 81 23 186 1
//y = 2 43 52 69 1337 1448
// 
//A = 2 2 3 52 80 32
//    1 -8 -10.1 8 50 3
//    21 38 23 9 5 15
//    -2 48 81 100 -100 1
//    3 5 8 -20 32 31
//    122 11 9 48 150 -3
// 
//B = 1 2 3 4 5 6
//    7 8 9 10 11 12
//    13 14 15 16 17 18
//    19 20 21 22 23 24
//    25 26 27 28 29 30
//    31 32 33 34 35 36
// 
//C = 36 35 34 33 32 31
//    30 29 28 27 26 25
//    24 23 22 21 20 19
//    18 17 16 15 14 13
//    12 11 10 9 8 7
//    6 5 4 3 2 1