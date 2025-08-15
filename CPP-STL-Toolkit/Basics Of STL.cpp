CPP SKELETON:

// Basics of how to use #include if we want to use individually as below:
For string - #include<string.h>
For maths - #include<maths.h>

// If you want to use all libraries into one and dont want to write individually as above then write:
#include<bits/stdc++.h>

/* If you dont write this below the #include line - using namespace std;
Then you have to write std:: after everyline for eg: std::cin>>a;   std::cout<<a; 
So to avoid that just write the above one once and you are good to go for the rest of the code  */

CPP FUNCTIONS:

// VOID FUNCTION

void print(){
    cout<<"Firdous";
}

int main(){
    print();
    return 0;
}

// Here void means it wont return any kind of value

// RETURN FUNCTION:

int sum(int a, int b){   /*Here we can use any kind of data type double, float, long etc*/
    return a+b;
}

int main(){
    print();
    int s=sum(1,5);
    cout<<s;   /*prints 6 as output and gets stored in s as it went to the function added value of 1 in a and 5 in b and returned its sum in s*/
    return 0;
}


// PAIRS: 
// It lies under utility library, pair is also a datatype

void explainPair(){

    pair<int, int> p = {1,3}; /*here it will store these two values in p and we can use any data types such as float, double etc*/

    cout << p.first <<" " << p.second;  /*it will access accordingly that is if we want to access first value or second value and it prints accordingly*/

    /*As we know pair datatype can store only 2 values at a time, so what if we want to store 3 or more, then we can use a single value as int data type and the next as pair data type
    In this way three values can be stored 1 in int and 2 in pair data type respectively 
    We can write as below*/

    pair<int, pair<int , int>> p ={1,{3, 4}};

    cout <<p.first <<" "<< p.second.first <<" "<< p.second.second;
    /*Here p.first is 1, p.second.first is 3 and p.second.second is 4*/

    // DECLARING A PAIR ARRAY:

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

// We index the values of array here as we do indexing in other datat types the difference is there were single integers/characters/strings but here they are in pairs
    {1, 2} - 0 index
    {2, 5} - 1st index 
    {5, 1} - 2nd index

    cout<< arr[1].second;
    // here the output will be 5 because the 1st index of array is {2, 5} and its second value is 5

}