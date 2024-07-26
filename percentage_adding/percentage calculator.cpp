#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    double num1, num2;
    cout << "enter the original value: ";
    cin >> num1;
    cout << "the percentage you want to add: ";
    cin >> num2;
    
    double amountToAdd = num1 * (num2/100.0);
    
    
    double newValue = num1 + amountToAdd;
    
    cout <<"the new value is: " << newValue << endl;
    
    char enterKey = '\n';
    cout << "Press any key to exit..." << endl;
    _getch();
    
return 0;
    
    
    
    
    
    
    
}