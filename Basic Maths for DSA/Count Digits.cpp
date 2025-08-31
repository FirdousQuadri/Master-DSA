// WAP to to find out and return the number of digits present in a number given n is the number
// For eg if n = 7788, output has to be 4

//1st Way - Just writing this as the main func will be already present in the backend:

int count(int n){
    int cnt =0;
    while(n > 0){
        cnt = cnt +1;
        n = n / 10;
    }
    return cnt;

}

// 2nd Way - By including main func:

#include<bits/stdc++.h>
using namespace std;

void count(int n){
    int cnt = 0;
    while(n > 0){
        cnt = cnt + 1;
        n = n / 10;
    }
    
    cout<<"Number of digits = "<<cnt<<endl;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    count(num);
    return 0;
    
}


// 3rd Way - By not using void and just using main func:

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int cnt = 0;

    while (num > 0) {
        cnt = cnt + 1;
        num = num / 10;
    }

    cout << "Number of digits = " << cnt << endl;
    return 0;
}


// As we can see the number of times n is divisible by 10 it is counted as total number of digits.
// So here we can use something as log10(7789), if we calculate we get something as 3.89... and if we add a 1 to it we will get 4.89.. and if we only count its integer we get 4 so it is another way of counting its digits

// 4th Way - So in that case we can write the code as below:


int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int cnt = 0;
    cnt = (int) (log10(num) + 1);
    
    cout << "Number of digits = " << cnt << endl;
    return 0;
}


// So the time complexity here in all the above codes will be - O(log10(n)) that is because here the division is happening by 10
// So if the number is getting divisible by 5 TC will be - O(log5(n)) similarly if divisible by 2 it will be - O(log2(n)) and so on

// So whenever we are writing logic and number of iterators depends upon division, that is when something like logarithmic will come in TC

// TC - Time Complexity