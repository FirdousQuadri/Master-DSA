// Q1 - WAP to print a name 5 times

#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void f(){
if(cnt == 5){
    return;
}
cout<<"Firdous"<<endl;
cnt++;
f();
}

int main(){
    f();
}

// 2nd way - To print a name n number of times:

#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
int n;   // make n global so f() can access it

void f(); // forward declaration

int main(){
    cout<<"Enter number: ";
    cin>>n;
    f();
}


void f(){
if(cnt == n){
    return;
}
cout<<"Firdous"<<endl;
cnt++;
f();
}

// 3rd way - To print a name n times by using recursion:

void f(int i, int n){
if(i > n){   /* Base condition */
    return;
}
cout<<"Firdous"<<endl;
f(i + 1, n);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    f(1, n);
}

// TC - O(n) because we are calling n functions
// SC[Space Complexity] - O(n), it is hypothetical and as internal memory uses stack space thereby making TC & SC to be O(n)


----------------------------------------------------------------------------------------------------

//  Q2 - WAP to print linearly from 1 to n, that means if n is given 4 the output has to be 1 2 3 4

#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
if(i > n){
    return;
}
cout<<i<<" ";
f(i + 1, n);
}


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    f(1, n);
}


//  Q3 - WAP to print linearly from n to 1, that means if n is given 4 the output has to be 4 3 2 1 

#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
if(i < 1){
    return;
}
cout<<i<<" ";
f(i - 1, n);
}


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    f(n, n); /* its (n, n) because if n = 3 it will call the function and then it will start in first line as (3,3) then if(i < 1) condition wont satisfy and then it will print 3 then it will become (2, 3) - (1, 3) - (0,3) and that is where it will stop the function and return back so at last 3 2 1 will be printed as output  */
}


// Q4 - WAP to print linearly from 1 to n using back track which is without using f(i+1, n)

#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
if(i < 1){
    return;
}

f(i - 1, n);
cout<<i<<" ";
}


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    f(n, n);
}


// Step-by-Step Explanation
// Call start
// Suppose n = 5.
// In main, we call f(5, 5).

// First call (i = 5)

// Condition if(i < 1) → false, since 5 >= 1.

// So it calls f(4, 5) before printing anything.

// Second call (i = 4), again 4 >= 1, so it calls f(3, 5).

// Third call (i = 3), Calls f(2, 5).

// Fourth call (i = 2), Calls f(1, 5)

// Fifth call (i = 1), Calls f(0, 5)

// Base case (i = 0)

// Now i < 1 is true → the function just returns.

// ⚡ This is where recursion starts unwinding (backtracking).

// Backtracking Phase (Unwinding the stack)
// The call f(1, 5) now continues after its recursive call → it prints 1.
// The call f(2, 5) continues → it prints 2.
// The call f(3, 5) continues → it prints 3.
// The call f(4, 5) continues → it prints 4.
// The call f(5, 5) continues → it prints 5.


// Q5 -  WAP to print linearly from n to 1 but using backtrack, that means if n is given 4 the output has to be 4 3 2 1 without using f(i-1, n)

#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
if(i > n){  // stop when i goes beyond n
    return;
}

f(i + 1, n);  // go forward till n
cout<<i<<" ";  // print while backtracking
}


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    f(1, n);
}

// 2nd wayvof printing n-1 by using f(i - 1, n);

#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i < 1){
        return;
    }

    cout << i << " ";   // print first
    f(i - 1, n);        // then recurse
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    f(n, n);
}