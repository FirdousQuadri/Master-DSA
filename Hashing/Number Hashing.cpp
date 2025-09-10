// NUMBER HASHING USING ARRAYS :


// Hashing in Data Structures and Algorithms (DSA) in C++ is a technique used to efficiently store and retrieve data. It involves mapping keys to specific indices in an array, known as a hash table, using a hash function.
// In a naive term we can say hashing is prestoring and fetching


// WAP in which you have to do the following:
// Number of elements in array = 5
// Elements = 1 3 2 1 3
// Number of queries you have = 5
// Elements you want to search but one by one not all at once = 1 4 3 2 12

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter total number of elements in the array: ";
    cin >> n;   
    
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    
    // precomputing the code/steps

    int hash[13] = {0}; //here we have assumed the maximum size of array to be 13 
    for(int i = 0; i<n; i++){
        hash [arr[i]] += 1;  // that is the index where i have to go
    }
    
    int q;
    cout<<"Enter the total number of queries you want: ";
    cin>>q;
    
    while(q--){  // q-- is done till it reaches 0 like end of search
        int number;
        cout<<"Enter the number you want to search: ";
        cin>>number;
        
        // fetch the output

        cout<<hash[number]<<endl;
        
    }

}

// Ouptut will be as below:

Enter total number of elements in the array: 5
Enter elements of array: 1 3 2 1 3
Enter the total number of queries you want: 5
Enter the number you want to search: 1
2
Enter the number you want to search: 4
0
Enter the number you want to search: 3
2
Enter the number you want to search: 2
1
Enter the number you want to search: 12
0

// You created an array called hash[], where each index directly represents a number.

// When you loop through the input array, for every number arr[i], you go to that index in hash and increase its count.

// This way, the hash array keeps track of how many times each number occurs.

// So, hashing here means:
//  Using the number itself as an index in another array (the hash array) to store its frequency.

// That’s it — simple counting using array indexes as a hash. 


// As here in above we gave the max size of array to be 13 because we want index till 12, so question would arise that can we write 10^9 + 1? The answer is no we cant.
// The maximum size of arrays which we can declare if its integer values and most importantly  inside main as we declared above is 10^6 . If we declare 10^7 it will throw segmentation fault.
// If its boolen values we can go till 10^7

// If we want to declare globally we can declare till 1e7 that is 10^7 like - int arr[1e7]; in the very first line outside main() but its only for integers
// For boolean it can go upto 10^8

// TC of this code will be - O(n + q) as,
// Building the hash (precomputation step): Runs O(n) because you visit each element once.
// Answering q queries: Each query is answered in O(1) (just array lookup)
// So, total for queries = O(q) which all together is O(n + q)