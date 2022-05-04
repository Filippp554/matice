#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3], mat2[3][3], i, j, mat3[3][3];
    cout << "zadaj prvu maticu: ";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cin >> mat1[i][j];
    }
    cout << "zadaj druhu maticu: ";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cin >> mat2[i][j];
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
    cout << "vysledok matic je:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << mat3[i][j] << " ";
        cout << endl;
    }
    return 0;
}