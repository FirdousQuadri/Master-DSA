FUNCTIONS(PASS BY VALUE AND PASS BY REFERENCE)
/* Functions are set of code which performs something for u
Functions are used to modularise codes
Functions are used to increase readability
Functions are used to use code multiple times 
Types of functions:
void - which does not returns anything
return - 
parameterised -
non parameterised*/

#include<bits/stdc++.h>
using namespace std;


void printName(string name, string name2){
    cout<<"Hey "<<name<<endl<<"Hey "<<name2<<endl;
}
int main(){
    string name, name2;
    cout<<"Enter the names: ";
    cin>>name>>name2;
    printName(name,name2);

    /*The above is for getting both the names at once without mentioning or taking inputs
    as written below twice. So here if we take two names as input such as abc and cde, then
    it will print: Hey abc
                   Hey cde  */

    /* second method by adding the below part also*/
    // string name2;
    // cin>>name2;
    // printName(name2);
    
} 

// WAP to take 2 numbers and print its sum

int main() {
    int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    // int num3=num1+num2;
    // cout<<num3;
    cout<<num1+num2;  
}
 Another way using functions:

 int sum(int num1,int num2){
    int num3=num1+num2;
    return num3;
}

int main() {
    int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    int res =sum(num1,num2);
    cout<<res;
    // cout<<sum(num1, num2);
    // Instead of using res as an another variable to store the sum we can simply print sum as in above line
    
}

void sum(int num1,int num2){
    int num3=num1+num2;
    cout<<num3;
}

int main() {
    int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    sum(num1, num2);
}

// This will be the way for calculating sum using void function

// WAP to calculate the minimum/maximum of 2 numbers

int main(){
    int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    int minimum =min(num1, num2);
    cout<<minimum;
}

// By using Function:

int minn(num1, num2){
        if(num1<num2) /*For calculating max number use if(num1>num2) and max function instaed of min */
       return num1;
    else
       return num2;

}

int main(){
    int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    int minimum =minn(num1, num2);
    cout<<minimum;
}
// Just remember to give a a different name to the function other than the in-built function name such as min, max etc. Therefore i have used minn instead of min

PASS BY VALUE:

void doSomething(int num){
     cout<<num<<endl;
     num+=5;
     cout<<num<<endl;
     num+=5;
     cout<<num<<endl;
}

int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;
} 

// The output will be (10 15 20 10) below each other.So y did the last value of num came out to be 10 instead of 20 is that the original value of the number did not go anywhere it was stored in some part of the memory and only the copy of that value went and all the functions were carried out

void doSomething(string s){
    s[0]='b';
    cout<<s<<endl;
}

int main(){
    string s="cat";
    doSomething(s);
    cout<<s<<endl;
} 
// The output will be (bat cat)one below the other as the copy of cat went and function got carried out and the 0 index changed and gave the output but at the end gave the original string as an output too

PASS BY REFERENCE:

// Here basically the changes are done on the original value and not the copy of it as done in pass by value. Here we add an & to address it to make changes on the original one.

void doSomething(string &s){
    s[0]='b';
    cout<<s<<endl;
}

int main(){
    string s="cat";
    doSomething(s);
    cout<<s<<endl;
} 
// The output will be (bat bat)one below the other as thhe original value changed, the whole program will be the same just we need to add "&" to the void function [void doSomething(string &s)]
 
// Until we pass int, char, string, float it goes with the above two types.
// But Arrays always pass by reference by default, so there is no need of writing "&" to it and whatever changes we make in the function we it changes the original array too.

void doSomething(int arr[], int n){ 
   arr[0]+=100;
   cout<<"Value inside function: "<<arr[0]<<endl;
}

int main(){
    int n=5;
    int arr[n];
    for(int i=0; i<n; i=i+1){
        cin>>arr[i];
        }
        
    doSomething(arr, n);
    cout<<"Value inside int main: "<<arr[0]<<endl;     
}
// The output will be Value inside function: 105
                //    Value inside int main: 105
//    as it will change the value of original array too            