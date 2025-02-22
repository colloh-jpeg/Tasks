#include <iostream>
#include <chrono> // For timing
using namespace std;
using namespace std::chrono;

// Recursive Fibonacci function
unsigned long long fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Iterative Fibonacci function
unsigned long long fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }
    unsigned long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int number;

    // Input from user
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Fibonacci of a negative number doesn't exist." << endl;
    } else {
        // Measure runtime for recursive Fibonacci
        auto startRecursive = high_resolution_clock::now();
        unsigned long long resultRecursive = fibonacciRecursive(number);
        auto stopRecursive = high_resolution_clock::now();
        auto durationRecursive = duration_cast<microseconds>(stopRecursive - startRecursive);

        // Measure runtime for iterative Fibonacci
        auto startIterative = high_resolution_clock::now();
        unsigned long long resultIterative = fibonacciIterative(number);
        auto stopIterative = high_resolution_clock::now();
        auto durationIterative = duration_cast<microseconds>(stopIterative - startIterative);

        // Display results
        cout << "Fibonacci (Recursive) of " << number << " = " << resultRecursive << endl;
        cout << "Time taken (Recursive): " << durationRecursive.count() << " microseconds" << endl;

        cout << "Fibonacci (Iterative) of " << number << " = " << resultIterative << endl;
        cout << "Time taken (Iterative): " << durationIterative.count() << " microseconds" << endl;
    }

    return 0;
}