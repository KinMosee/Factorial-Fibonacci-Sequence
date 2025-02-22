#include <iostream>

using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1; // Return -1 to indicate error
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i; // Multiply result by current number
    }
    return result;
}

int main() {
    int num;
    
    // Ask user for input
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    
    // Compute factorial
    long long fact = factorial(num);
    
    // Display result
    if (fact != -1) {
        cout << "Factorial of " << num << " is " << fact << endl;
    }
    
    return 0;
}
