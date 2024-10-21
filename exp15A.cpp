#include<iostream>
using namespace std;

// Function to calculate factorial
unsigned long long int fact(int n) {
    if (n <= 1) { 
        return 1;
    } else {
        return (n * fact(n - 1)); // Recursion
    }
}

int main() {
    int X, n;
    cout << "Enter a number: "; 
    cin >> n;      
    X = fact(n);
    cout << "Factorial of "<< n << " = " << X << endl;
    return 0;
}
