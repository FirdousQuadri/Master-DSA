// Multiple recursive calls in C++ occur when a function calls itself more than once within its own definition. This is a common pattern in algorithms that naturally break down into multiple, independent subproblems.


// WAP to print nth Fibonacci number like if you enter f(3) - output will be 2 if its f(4) output will be 3 and so on


// Fibonacci Series - The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, typically starting with 0 and 1. The sequence is often represented as below: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on

#include <bits/stdc++.h>
using namespace std;

int f(int n){
    
    if(n<=1){
        return n;
    }
   
   int last = f(n-1);     // Multiple recursion call. This will call return back then only the next recursion calls goes and come back 
   int slast = f(n-2);   // Multiple recursion call. This will go the sme as above
   return last + slast;
}

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin >> n;   
    
    cout<<f(n);
}

// How the above code works:

// Base case:
// If n <= 1, we just return n.

// f(0) = 0
// f(1) = 1
// These are the first two numbers of the Fibonacci series.

// Recursive case:
// To calculate f(n), the function calls:

// f(n-1) → this gives the previous Fibonacci number
// f(n-2) → this gives the second-previous Fibonacci number

// Then adds them up: f(n)=f(n−1)+f(n−2)

// Example: Suppose n = 5
// f(5) → calls f(4) + f(3)
// f(4) → calls f(3) + f(2)
// f(3) → calls f(2) + f(1)
// f(2) → calls f(1) + f(0)
// f(1) → returns 1
// f(0) → returns 0

// Then it backtracks and starts adding:

// f(2) = f(1) + f(0) = 1 + 0 = 1
// f(3) = f(2) + f(1) = 1 + 1 = 2
// f(4) = f(3) + f(2) = 2 + 1 = 3
// f(5) = f(4) + f(3) = 3 + 2 = 5

// So output = 5.

// Recursion Tree for f(5)


//                 f(5)
//                    /       \
//                f(4)         f(3)
//              /     \       /     \
//          f(3)     f(2)  f(2)    f(1)
//         /   \     /  \   /  \
//     f(2)   f(1) f(1) f(0) f(1) f(0)
//    /   \
//  f(1) f(0)

// The total number of calls is about: T(n)≈2^n . So, Time Complexity = O(2^n) (exponential).

// At most, the recursion stack goes as deep as n (since we keep subtracting 1).So, SC = O(n)
