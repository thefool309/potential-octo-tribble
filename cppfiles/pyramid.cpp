#include <iostream>
using namespace std;
// run this program using the console pauser or add your own getch, system("pause") or input loop 
int main() 
{      
    int rows = 0;
    cout << "rows?: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
        cout << "*";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}