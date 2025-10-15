#include <iostream>
using namespace std;
//create function operator math
int add(int x, int y){
    return x + y;
}
int subtract(int x, int y){
    return x - y;
}
int multiply(int x, int y){
    return x * y;
}
int devide(int x, int y){
    return x / y;
}

int main()
{
    //create variabel for user input
    int input;
    int x;
    int y;

    cout << "Hai Welcome to my simple calculator !\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Devide\n";
    cout << "Choose (1/2/3/4) : ";
    cin >> input;

    

    return 0;
}