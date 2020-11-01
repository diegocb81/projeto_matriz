#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "ptb");
    int lin, col;
    float Matriz[4][4];
    for (lin = 0; lin <= 3; lin++)
    {
        for (col = 0; col <= 3; col++)
        {
            cout << "Informe o elemento [" << lin + 1 << "," << col + 1 << "] da Matriz: ";
            cin >> Matriz[lin][col];
        }
    }
    cout << "Que linha deseja ver? ";
    cin >> lin;
    for (col = 0; col <= 3; col++)
    {
        cout << "Elemento [" << lin << "," << col + 1 << "] -> " << Matriz[lin-1][col] << "\n";
    }
}