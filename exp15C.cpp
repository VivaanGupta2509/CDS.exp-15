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
