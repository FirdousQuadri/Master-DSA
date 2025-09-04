// Recursion - when a function calls itself until a specified condition is met

void f(){
    cout<<"1";
    f();
}

int main(){
    f();
}

// First the prog come to int main() which is the execution, then it goes to f() and whenever we are calling the function it straight away goes to void f() and then it goes to print line and executes by printing 1 in the above case
// Output will be 1, then it goes to the next line which is f() and this will again call the below function as it is stored in memory :
    void f(){
    cout<<"1";
    f();
  }

// and again 1 will be executed and it will go on executing and printing 1 continously till it runs out of memory, as there is no stop condition applied to it. So it becomes an infinite recursion

// As the program keeps on running so it is stopped by segmentation fault which happens because the memory cant keep on piling the functions infinite times and this what is called as "stack overflow"
// This is why infinite recursion is not written because it will end up to stack overflow.

// Stack space - basically the space where the non-executed functions are stored/ yet to be completed functions

// So as we know that we need to apply a condition so that the function call stops at some point so that condition is known as base condition

void f(){
int cnt = 0;
f();
cout<<cnt;
cnt++;
f();
}

int main(){
    f();
}

// Here first f() will call the void f() then 0 will be printed, then cnt++ will happen so it will become 1 and it will be printed as well then it becomes 2 it will be printed and will go on printing it so we need to add a base condition to it. Supoose we need to call it till 3 is printed so how will we modify the code is as below:

#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void f(){
if(cnt == 4){
    return;
}
cout<<cnt<<" ";
cnt++;
f();
}

int main(){
    f();
}

// Above by this conditiion if(cnt == 4) when cnt will become 4 it will stop calling the function as return; is there so the further lines will not be executed or work and output will be 0 1 2 3

// There can be single or multiple base conditions

// RECURSION TREE

// A recursion tree is a method used to analyze the time complexity of recursive algorithms, particularly those defined by recurrence relations. It visually represents the breakdown of a problem into smaller subproblems and the cost associated with each level of recursion.

// As in above the function was called till 4 times and then it ws stopped but it was called for 4 times, it can be for more time as desired by the user. So no one will do that these many times that is when the function is truncated and is known as recursion tree because the f() worked here in for of tree the main f() followed by sub f() as tree to its branches