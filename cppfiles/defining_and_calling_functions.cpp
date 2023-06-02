#include <iostream>
using namespace std;
// run this program using the console pauser or add your own getch, system("pause") or input loop 

int compare(int firstnum, int secondnum)
{
    // this function compares the two numbers to see which is larger and prints the larger value
    int bignum = (firstnum < secondnum) ? secondnum : firstnum;   
    cout << "the larger of the two values is: " << bignum << endl;
}

int main() 
{    
    // Declare temp variables for the user to input them, and be passed to the compare function
    int firsttempnum;
    int secondtempnum;
    
    // ask the user for two integers
    cout << "First Integer: " << endl;
    cin >> firsttempnum;
    cout << "Second Integer: " << endl;
    cin >> secondtempnum;

    // passes those two numbers to the compare function to see which is larger :)
    compare(firsttempnum, secondtempnum);

    system("pause");
    return 0;
}