// WAP to print sum of first n numbers. If n = 3 then output will be 6 because 1+2+3=6

// 1st Way - Parameterised Recursion:

// Parameterised recursion in C++ refers to a type of recursive function where additional parameters are passed in each recursive call to help track and solve subproblems. These parameters are crucial for maintaining state, passing intermediate results, or narrowing down the problem space with each successive call.

#include <bits/stdc++.h>
using namespace std;

void f(int i, int sum){
if(i < 1){
    cout<<sum;
    return;
}

f(i - 1, sum+i);

}


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    f(n, 0);
}

// What is happening?
// You start with i = n and sum = 0.

// For example, if n = 3, the first call is f(3, 0).

// Recursive Step:
// Each time, the function does not print immediately. Instead, it calls itself with:

// i - 1 (one less than before)

// sum + i (adding the current number to the running total)

// Example path:

// f(3, 0) → f(2, 3) → f(1, 5) → f(0, 6) → prints 6 as base case is satisfied here
// Base Case (stopping condition):
// When i < 1, recursion stops.
// At this point, the accumulated sum is ready.

// For n=3, when i=0, sum = 6.
// That’s when the function prints it.

------------------------------------------------------------------------------------------------

// 2nd Way - Functional Recursion:

// Functional recursion in C++ refers to the technique where a function calls itself, either directly or indirectly, to solve a problem by breaking it down into smaller, similar sub-problems.

#include <bits/stdc++.h>
using namespace std;

 int f(int n){   // cant use void as we are returning something here
    
    if(n == 0){
        return 0;
    }
        return n+f(n-1);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<f(n);
}

// How it works
// Base case:

// If n == 0, the function just returns 0.

// This stops the recursion.

// Recursive case:

// For any n > 0, the function says:
// 👉 "Take n and add it to the sum of numbers up to n-1".

// That’s why we call f(n-1) inside.

// Each recursive call goes smaller:

// f(5) calls f(4)
// f(4) calls f(3)
// f(3) calls f(2)
// f(2) calls f(1)
// f(1) calls f(0) (base case, returns 0).

// The results are returned back up (backtracking step):

// Once the base case is hit, recursion starts returning values upward:

// f(0) = 0
// f(1) = 1 + f(0) = 1 + 0 = 1
// f(2) = 2 + f(1) = 2 + 1 = 3
// f(3) = 3 + f(2) = 3 + 3 = 6
// f(4) = 4 + f(3) = 4 + 6 = 10
// f(5) = 5 + f(4) = 5 + 10 = 15

-------------------------------------------------------------------------------------

// WAP to print factorial of n using functional recursion. If n = 3 output will be 6 as 1*2*3 = 6

#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    
    if(n == 0){   // can also keep it as n==1
        return 1;    // because if it will be 0 then the whole multiplication will be done with 0 resulting 0 as complete answer
    }
        return n*fact(n-1);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<fact(n);
}

// Here TC = O(n) and SC = O(n)