#include <iostream>
#include <windows.h>
using namespace std;
// Guess the secret number or get rick rolled 
int main() 
{   
    
    int secretnumber = 7;
    int number = 0;

    while (true)
    {
        cout << "Guess the secret Number: ";
        cin >> number;
        if (number != secretnumber)
           { 
            cout << "Wrong Try Again!" << endl;
            for(int i=0; i<1; i++)
    
                {
                ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_SHOWNORMAL);
                }
           }
        else 
        {
            cout << "Good Job!";
            for(int i=0; i<1; i++)
    
                {
                ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=34X4faVQ63Y", NULL, NULL, SW_SHOWNORMAL);
                }
            break;
        }
    }
    system("pause");
    return 0;
}
