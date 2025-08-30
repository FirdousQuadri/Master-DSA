// WAP to check if the given number is an Armstrong number or not. If it is then print "Armstrong Number" otherwise print "Not a Armstrong Number"

// An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits. For example, 153 is an Armstrong number because 153 = 1^3 + 5^3 + 3^3 (where 3 is the number of digits in 153).

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int dup = num; /*to store original number*/
    int sum = 0;

    while (num > 0) {
        int ld = num % 10;
        sum = sum + (ld*ld*ld);
        num = num / 10;
    }
    
    if(sum == dup){  /*at the end we need to compare if duplicate+sum then its palindrome*/
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not a Armstrong Number";
    }
}


