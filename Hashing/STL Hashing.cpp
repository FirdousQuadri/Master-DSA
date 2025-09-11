// So as we know that for integer/boolean datatypes we can use max size of array to be as 10^8, so for more size such as 10^9 , 10^12 , 10^18 we cannot do using arrays

// And so to solve that in C++ we have STL that is in terms of Map/Un-ordered Map and in Java we have it as Hash Map. The concepts of Map/Un-ordered Map & Hash Map is sme just the writing format is different as it is in 2 different languages C++ & Java

// USING MAP FOR NUMBER HASHING :

// As we know that in map we declare as key and value pair and in a sorted order(sorted in terms of key as key is always unique in nature)
// So if we consider an array having the values arr = 1 2 3 1 3 2
// So here map<int, int>  ->  map<key, value> So here key is the number and value is basically the frequency which means the number of times it is appearing in the array

// So as we know that the map currently doesnt have any values added to it, so we will iterate the values into it from the array so as the first key in the array is 1 it will iterate as :
// mpp[1]++ stores 1 in it, then goes as mpp[2]++ stores 1 in it then mpp[3]++ stores 1 in it again goes to mpp[1] now as it has already stored it before so it will go to the first place and change it from 1 to 2 as it has now occured twice similarly goes for mpp[3] increases it value to and also for 2 it increases for 2 and for eg if there would have been 12 at last of the array it would have done mpp[12]++ and would have increased its value as 1

// And here if we do mpp[4] it will give 0 as that key is not present in the array and further it will not store 4, will just give 0

// So for that we need to do mpp[arr[i]]++ to increase the frequency of a particular value

// WAP to do the following using hashing in Map:
// Number of elements in array = 7
// Elements of the array = 1 2 3 1 3 2 12
// Number of queries you have = 5
// Elements you want to search but one by one not all at once = 1 2 3 4 12

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the total number of elements in the array: ";
    cin >> n;  
    
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    // precompute the code
    map<int, int> mpp;  // if the size of array is like 10^8 or more you can simply use long/long long depending on the size
    for(int i = 0; i<n; i++){
        mpp[arr[i]]++;  
    }


    // iterating in the map
     for(auto it : mpp){
        cout<< it.first << "->"<< it.second <<endl;
    }  // as we know that map is always in sorted order by key so this for loop is written just to check that and it will give output as given at the bottom of the code
    
    int q;
    cout<<"Enter the number of queries you want: ";
    cin>>q;
    
    while(q--){
        int number;
        cout<<"Enter the element you want to search: ";
        cin>>number;
        
        // fetching the output
        cout<<mpp[number]<<endl;
        
    }

}

// Output will be as follows including the for loop which we used to check its sorted form, if you want you can skip that loop:

Enter the total number of elements in the array: 7
Enter the elements of the array: 1 2 3 1 3 2 12

1->2
2->2
3->2
12->1

Enter the number of queries you want: 5
Enter the element you want to search: 2
2
Enter the element you want to search: 3
2
Enter the element you want to search: 1
2
Enter the element you want to search: 12
1
Enter the element you want to search: 4
0

-----------------------------------------------------------------------------------------------------

// We can even do precomputing while taking the output and it can be done as below:

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the total number of elements in the array: ";
    cin >> n;  
    
    int arr[n];
    map<int, int> mpp; 
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        mpp[arr[i]]++;  // we did that here and in line -101 by declaring and the for loop which we used while computing in the last code is not needed here
    }
    
    int q;
    cout<<"Enter the number of queries you want: ";
    cin>>q;
    
    while(q--){
        int number;
        cout<<"Enter the element you want to search: ";
        cin>>number;
        
        // fetching the output
        cout<<mpp[number]<<endl;
        
    }

}

-----------------------------------------------------------------------------------------------------


// USING MAP FOR CHARACTER HASHING :

// WAP to do the following using hashing in Map:
// Number of elements in array = 5
// Elements of the array = acndf
// Number of queries you have = 4
// Elements you want to search but one by one not all at once = azfc

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the total number of characters in the array: ";
    cin >> n;  
    
    char arr[n];
    map<char, int> mpp; 
    cout<<"Enter the characters of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    
    // printing character frequencies
    // for(auto it : mpp){
    //     cout<< it.first << " -> " << it.second << endl;
    // }
    
    int q;
    cout<<"Enter the number of queries you want: ";
    cin>>q;
    
    while(q--){
        char ch;
        cout<<"Enter the character you want to search: ";
        cin>>ch;
        
        // fetching the output
        cout<<mpp[ch]<<endl;
        
    }

}

// Output will be as follows:

Enter the total number of characters in the array: 5
Enter the characters of the array: acndf

// a -> 1
// c -> 1
// d -> 1
// f -> 1
// n -> 1

Enter the number of queries you want: 4
Enter the character you want to search: a
1
Enter the character you want to search: z
0
Enter the character you want to search: f
1
Enter the character you want to search: c
1

// TC - so in order to map of like something ++ that is storing the map, so both storing and fetching in a map takes log(n) in all cases that is best, average and worst

// Building the map (insertion): So this loop = O(n log n)
// Printing the frequencies: Total = O(k) ≤ O(n).
// Queries: If there are q queries → O(q log n).
// Here k being = number of distinct characters so far.
// Final Time Complexity: O(nlogn+qlogn)

-----------------------------------------------------------------------------------------------------

// USING UNORDERED MAP FOR HASHING:


#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the total number of elements in the array: ";
    cin >> n;  
    
    int arr[n];
    unordered_map<int, int> mpp;  // just add unordered map in place of just map rest of the code will remain same as for map
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        mpp[arr[i]]++;  // we did that here and in line -101 by declaring and the for loop which we used while computing in the last code is not needed here
    }
    
    for(auto it : mpp){
        cout<< it.first << "->"<< it.second <<endl;
    }
    
    int q;
    cout<<"Enter the number of queries you want: ";
    cin>>q;
    
    while(q--){
        int number;
        cout<<"Enter the element you want to search: ";
        cin>>number;
        
        // fetching the output
        cout<<mpp[number]<<endl;
        
    }

}

// Output will be as follows:

Enter the total number of elements in the array: 5
Enter the elements of the array: 12 5 47 2 12
2->1
47->1
5->1
12->2
// as we can see above that it is in an unordered form and most importantly this form will not be permanent how many times it run, it will always change for the next time when you run it

Enter the number of queries you want: 3
Enter the element you want to search: 12
2
Enter the element you want to search: 47
1
Enter the element you want to search: 90
0

// Advantages of using Unordered-Map:

// In U-Map we store and fetch data and the average and best TC here is a O(1) - 'constant 1'
// In the worst case it ends up taking linear time that is O(N), 'N' here is num of elements in the map data structure and the worst case happens once in a blue moon

// The first preference should always be U-Map, if it is taking a longer time then switch to Map because the worst case in U-Map very rarely happens and it happens because of internal collisions

// Points to remember:
// In Map we can have key of any data type that is int, double, float, boolean, long, 
// pair<int, int>, val 'value being val'
// But in U-Map we can never have data type as pair that is pair<int, int>, val

