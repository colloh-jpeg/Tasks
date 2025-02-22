# Tasks
COSC 333
COLLINS MWANGI MUNGAI
EB3/61522/22
C++ language
RUNTIME INFO FOR FACTORIAL SEQUENCE:

1. Iterative Factorial
   
Time Complexity: O(n)
The loop runs n-1 times, performing a constant-time multiplication in each iteration.
Space Complexity: O(1)
Only a few variables (result, i) are used, regardless of the input size.
Runtime Behavior:
Efficient for large values of n (up to the limit of unsigned long long).
No risk of stack overflow.

2. Recursive Factorial
   
Time Complexity: O(n)
The function makes n recursive calls, each performing a constant-time multiplication.
Space Complexity: O(n)
Each recursive call adds a new stack frame, so the space used is proportional to the input size.
Runtime Behavior:
Less efficient for large n due to the overhead of recursive function calls.
Risk of stack overflow for very large n.

RUNTIME INFO FOR FIBONACCI SEQUENCE:

1. Iterative Fibonacci
   
Time Complexity: O(n)
The loop runs n-1 times, performing constant-time operations in each iteration.
Space Complexity: O(1)
Only a few variables (a, b, c) are used, regardless of the input size.
Runtime Behavior:
Efficient for large values of n.
No risk of stack overflow.

2. Recursive Fibonacci
   
Time Complexity: O(2^n)
The function makes two recursive calls for each step, leading to exponential growth in the number of function calls.
Space Complexity: O(n)
Each recursive call adds a new stack frame, so the space used is proportional to the input size.
Runtime Behavior:
Extremely inefficient for large n due to repeated calculations.
Risk of stack overflow for moderately large n.

3. Memoized Fibonacci
   
Time Complexity: O(n)
Each Fibonacci number is calculated only once and stored for future use.
Space Complexity: O(n)
Uses additional memory to store previously computed results.
Runtime Behavior:
Much faster than the recursive approach for large n.
Avoids redundant calculations.
