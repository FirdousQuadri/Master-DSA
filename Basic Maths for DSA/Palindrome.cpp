// WAP to check if the given number is Palindrome or not. If it is then print "True" otherwise print "False"

// Palindrome numbers are those numbers which if reversed are exactly the same as the original one. For eg: 7, 11, 121, 525, 101, 1331, etc

// Here if i somehow reverse a number which we hve done before and compre i to the original number that is n, then we will be able to get if its palindrome/not

// Here we can use conditions that if(revNum == n){
                                //    cout<<"True"}
                                //  else{
                                //    cout<<"False"
                                //    }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int n = num;   /* to store original number */
    int revNum = 0;

    while (num > 0) {
        int ld = num % 10;
        revNum = (revNum * 10) + ld;
        num = num / 10;
    }
    
    if(revNum == n){  /*need to compare this with n as it is the original number and not with num because then it would hev become 0 because of while loop*/
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}




