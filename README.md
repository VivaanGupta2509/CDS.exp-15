# EXPERIMENT - 15

## AIM :
To study and implement recursion.

## THEORY :
 A recursive function solves a particular problem by calling a copy of itself and solving smaller subproblems of the original problems. Many more recursive calls can be generated as and when required. It is essential to know that we should provide a certain case in order to terminate this recursion process. So we can say that every time the function calls itself with a simpler version of the original problem.

### Key Components of Recursion :

- **Base Case:**
  - The condition that terminates the recursion.
  - Prevents infinite recursion by stopping further recursive calls.
  
- **Recursive Case:**
  - The part of the function that makes a call to itself.
  - Solves a smaller or simpler instance of the problem.

### How Recursion Works:
- **Function Call:**
  - When the function calls itself, it pauses execution.
  
- **Recursive Call:**
  - The function makes a new call with modified arguments (typically smaller or simpler).
  
- **Resume Execution:**
  - Once the base case is met, paused calls resume from where they left off.
  - The function then returns the result back through the call stack.

## Memory allotment :
When any function is called from main(), the memory is allocated to it on the stack. A recursive function calls itself, the memory for a called function is allocated on top of memory allocated to the calling function and a different copy of local variables is created for each function call.

## Code - 
### 1. Factorial 
```
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
```

### 2. Addition 
```
#include<iostream>
using namespace std;
int add(int n) {
    if (n <= 1) { 
        return 1;
    } else {
        return (n + add(n - 1)); 
    }
}

int main() {
    int X, n;
    cout << "Enter a number: "; 
    cin >> n;
    X = add(n); // Function calling
    cout << "Sum = " << X << endl;
    return 0;
}
```

### 3. Reverse string 
```
#include <iostream>
#include <cstring> 
using namespace std;
void reverse(char *str) {
    if (*str) { 
        reverse(str + 1); 
        cout << *str; 
    }
}

int main() {
    char a[50];
    cout << "Enter a string: "; 
    cin >> a;
    reverse(a); 
    cout << endl; 
    return 0;
}
```

### 4. reverse of an integer 
```
#include <iostream>
using namespace std;

void print_rev(int i)
{
    if (i > 0)
    {
        cout << (i % 10 ) ;
        print_rev(i / 10);//recursion
        cout<<endl;
    }
}

int main()
{
    int i;
    cout << "Enter a Number: ";
    cin >> i;
    print_rev(i); // Function calling
    return 0;
}
```

## Outputs - 
### 1-

