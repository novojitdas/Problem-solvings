// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    if(result==-1)
    {
	    cout << "You entered a negative number or zero"<< endl;
    }
    else {
    cout << "Factorial of " << n << " = " << result;
    }
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } 
    else if (n==1) {
        return 1;
    } 
    else {
	    return -1;
    }
}