#include <iostream>
using namespace std;

// Function to generate Fibonacci sequence up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Sequence: ";
    
    for (int i = 0; i < n; i++) {
        cout << first << " "; // Print the current Fibonacci number
        
        next = first + second; // Calculate the next term
        first = second; // Update first
        second = next; // Update second
    }
    cout << endl;
}

int main() {
    int n;
    
    // Asking user for number of terms
    cout << "Enter the number of terms: ";
    cin >> n;
    
    // Validate user input
    if (n <= 0) {
    	
        cout << "Please enter a positive integer." << endl;
    } else {
        // Call function to print Fibonacci sequence
        fibonacci(n);
    }
    
    return 0;
}
