#include <iostream>
using namespace std;
//passing arguments by value or reference

// function's signature = name + (number and type of parameters)

void increasePrice(double& price){      // reference parameter "double&"
    price *= 1.2;
    cout << price;
}

int main() 
{    
   
    double price = 100;          // the variable the parameter references
    increasePrice(price);
    return 0;
}