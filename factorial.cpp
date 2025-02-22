#include <iostream>
#include <chrono> // Include the chrono library for timing
using namespace std;
using namespace std::chrono; // Use the chrono namespace

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Input from user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the input is valid
    if (number < 0) {
        cout << "Factorial of a negative number doesn't exist." << endl;
    } else {
        // Start timing
        auto start = high_resolution_clock::now();

        // Calculate the factorial
        unsigned long long result = factorial(number);

        // Stop timing
        auto stop = high_resolution_clock::now();

        // Calculate the duration
        auto duration = duration_cast<microseconds>(stop - start);

        // Display the result and runtime
        cout << "Factorial of " << number << " = " << result << endl;
        cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    }

    return 0;
}