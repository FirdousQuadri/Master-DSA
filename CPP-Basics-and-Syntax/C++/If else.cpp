#include<bits/stdc++.h>
using namespace std;

// WAP that takes an input of age and prints if you are adult or not
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    
    if(age<18)
    cout<<"Child";
    else
    cout<<"Adult";
}

/* A school has following rule for grading system
Below 25 - F
25 to 44 - E
45 to 49 - D
50 to 59 - C
60 to 79 - B
80 to 100 - A
Ask user to enter marks and print the corresponding grades */

/* Here below as we have only used if statement so it will check all the statements,
 even if the condition hs been satisfied in the first statement, but if we add 
 else if statement to the rest then it will only check till that statement where 
 it gets satisfied or condition comes true*/

 /* And if we are using else if then no need to add the first comparison we can simply
 write the last conditions because it is checking the first and if it gets false no need
 to write the first comparisons that is marks>=25, marks>=45 and goes on */

int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    
    if(marks<25){
    cout<<"F";
    }
    if(marks>=25 && marks<=44){
        cout<<"E";
    }
    if(marks>=45 && marks<=49){
        cout<<"D";
    }
    if(marks>=50 && marks<=59){
        cout<<"C";
    }
    if(marks>=60 && marks<=79){
        cout<<"B";
    }
    if(marks>=80 && marks<=100){
        cout<<"A";
    }
    
}

/* WAP by taking age from the user and then decide accordingly:
If age<18 then print "not eligible for job"
If age>=8 then print "eligible for job"
If age>=55 and <=57 print "eligible for job, but retirement soon"
If age>57 print "retirement time" */







    