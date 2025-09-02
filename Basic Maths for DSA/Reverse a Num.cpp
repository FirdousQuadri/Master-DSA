// WAP to generate the reverse of a given number n. Print the corresponding reverse number


// As we know that if we extract the digits of a number we are going to get the number in reverse order, so here when the basic maths work. We can use the logic here as if we do the reverse method as it is and add another variable revnum as 0 and further revnum = (revnum * 10) + last digit
// In this way if the number is 7789 we can do : 
// (0*10) + 9 = 9
// (9*10) + 8 = 98
// (98*10) + 7 = 987
// (987*10) + 7 = 9877

// So it will give 9877


#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int revNum = 0;

    while (num > 0) {
        int ld = num % 10;
        revNum = (revNum * 10) + ld;
        num = num / 10;
    }

    cout << revNum ;
}





