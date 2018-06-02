#include <iostream>
using namespace std;

int main()
{
    int x, y, z, T;
    cout << "\n\n\n" << "~~~~~CALCULATOR~~~~~\n\n\n\n";

    cout << "Total calculation: ";
    cin >> T;

    for(int i=1; i<=T;i++ )
    {

    cout << " 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n\n";
    cout << "Please enter you choice & press Enter: ";


    int a;
    cin >> a;

    switch(1)
    {
    case 1:
        cout << "\nEnter your first number: ";
        cin >> x;
        //cout << endl;

        cout << "Enter the second number: ";
        cin >> y;
        cout << endl;
        z = x + y;
        cout << "The summation: " << z << endl << endl <<endl;
    break;

    case 2:
        cout << "\nEnter your first number: ";
        cin >> x;
        //cout << endl;

        cout << "Enter the second number: ";
        cin >> y;
        cout << endl;
        z = x - y;
        cout << "The subtraction : " << z << endl << endl <<endl;
    break;

    case 3:
        cout << "\nEnter your first number: ";
        cin >> x;
        //cout << endl;

        cout << "Enter the second number: ";
        cin >> y;
        cout << endl;
        z = x * y;
        cout << "The multiplication: " << z << endl << endl <<endl;
    break;

    case 4:
        cout << "\nEnter your first number: ";
        cin >> x;
        //cout << endl;

        cout << "Enter the second number: ";
        cin >> y;
        cout << endl;
        z = x / y;
        cout << "The division: " << z << endl << endl <<endl;
    }
   }
}
