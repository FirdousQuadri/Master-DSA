// WAP to check if the number is Prime/not

// Prime number is a whole number greater than 1 that has only two divisors: 1 and the number itself.
// The number 1 is not considered prime as it is not greater than 1
// Examples of prime numbers: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and so on. 

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    int count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        cout << "Prime";
    } else {
        cout << "Not prime";
    }
}

// Here TC will O(n) as the loop is running n number of times

// 2nd way:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            cout << "Not prime";
            return 0;   // exit immediately if divisible
        }
    }
    if(n > 1)
        cout << "Prime";
    else
        cout << "Not prime";
}


// 3rd Way:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int temp = 0;
    
    for(int i=2; i<n; i++){
        if(n % i == 0){
            temp = 1;
            break;
        }
    }
    
    if(n <= 1) {
        cout << "Not prime";
    }
    else if(temp == 1) {
        cout << "Not prime";
    }
    else {
        cout << "Prime";
    }
 }


//  As we know that we can find out factors by checking till sqrt of n 
// 4th Way:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int count = 0;
    
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            count++;
            
        }
        if((n/i)!=i){
           count++; 
        }
    }
    
      if(count == 2) {
        cout << "Prime";
    } else {
        cout << "Not prime";
    }
 }

//  Here TC will be O(sqrt(n))







