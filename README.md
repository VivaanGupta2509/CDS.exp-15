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
<img width="600" alt="Screenshot 2024-10-21 at 9 31 23 AM" src="https://github.com/user-attachments/assets/62c4d456-cf27-47a0-a351-f3b716c7bd6f">

### 2-
<img width="700" alt="Screenshot 2024-10-21 at 9 31 39 AM" src="https://github.com/user-attachments/assets/5dbd0aec-a909-4ca1-bf26-507b0b44e52d">

### 3-
<img width="827" alt="Screenshot 2024-10-21 at 9 31 59 AM" src="https://github.com/user-attachments/assets/a87533d9-9f60-438f-8357-11eb9413172f">

### 4-
<img width="565" alt="Screenshot 2024-10-21 at 9 33 28 AM" src="https://github.com/user-attachments/assets/44195f6b-87b8-4279-9e6d-f06248404ee0">

## Conclusion - 
We effectively studied and implemented the idea of recursion in C++ in this experiment. Examples of recursion, which is the process by which a function calls itself to solve smaller sub-problems, included finding the factorial, creating Fibonacci sequences, and searching algorithms.
By examining recursive functions, we discovered the following important realizations:

- Simpleness of Expression: When a problem is inherently recursive, such as in the case of tree traversal and divide-and-conquer algorithms, recursive solutions frequently offer a clear and simple approach to solve it.
- Base Case and Termination: In the absence of suitable ending circumstances, unbounded recursion and stack overflow result. This highlights the significance of having a well-defined base case.
- Stack Depth and Limitations: We also discovered that recursive methods may not be suitable for solving some problems due to the possibility of stack overflow errors resulting from deep recursion

