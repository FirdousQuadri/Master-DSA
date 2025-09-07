// CHARACTER HASHING USING ARRAYS :

//  For ex: we have a string wuth the characters as s = a b c d a b c e f c

// And we want to find how many times a c & z appears so the answer will be 2 2 0 respectively

// If we have q number of queries and want to solve it using arrays then we know that wile doing it for number we did it by using the indexes as each number. so here if we assume that the array has only lower case alphabets then we must need the size of the array to be 25 as total number of alphabets are 26 and as index starts from 0. So here we can assume each alphabets as indexes starting from 0 so a being 0, b being , c being 3 and so on till z being 25, so by this for every character we are having an index.

// The main question comes that how do we program it because we cant only visualize it we need to do it programmitically that is where ASCII values comes in

// ASCII (American Standard Code for Information Interchange) values are numerical representations for characters, with a 7-bit standard set (0-127) and an extended 8-bit set (0-255). These values assign a unique number to each letter, digit, punctuation mark, and control character, allowing computers to process and display text. For example, the uppercase 'A' has an ASCII value of 65, and the lowercase 'a' is 97.

// So coming back to code we know ASCII value of a = 97 and z = 122. 
// So if we want to know for f as we assumed it for index so we know its index is 5 but how will we get that. We can simply do ASCII value of f - ASCII value of a that is 102 - 97 it gives 5 which is the index value of f as per we assumed
// Similarly we can get for every other characters that is for a will be 97-97 = 0, 
// for b 98 - 97 = 1 and 
// So on so the formula made here is 'ch' -  'a'. If we do that we will easily get the corresponding index of the characters in the array and further we can hash it

// If we want to do it for upper case alphabets we know the total number of ASCII values are 256 so we can max the size as 255 as it starts from 0 and here we dont need to substract also because here as per ASCII value of 'a' is 97 it will go there for 'b' it will be stored in 98 and so on


// WAP in which you have to do the following:
// Characters of the array = abcdabehf
// Number of queries you have = 5
// Character you want to search but one by one not all at once = a g h b c

// This code is limited to size of array being 26 because we know here we have only lower case alphabets

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cout<<"Enter the characters in the array: ";
    cin >> s;   
    
    // precompute the code
    int hash[26] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i] - 'a'] ++;  
    }
    
    int q;
    cout<<"Enter the number of queries you want: ";
    cin>>q;
    
    while(q--){
        char c;
        cout<<"Enter the character you want to search: ";
        cin>>c;
        
        // fetching the output
        cout<<hash[c - 'a']<<endl;
        
    }

}

// Output will be as below:

Enter the characters in the array: abcdabehf
Enter the number of queries you want: 5
Enter the character you want to search: a
2
Enter the character you want to search: g
0
Enter the character you want to search: h
1
Enter the character you want to search: b
2
Enter the character you want to search: c
1


// If we have alphabets mixed up with lower as well as upper case and as we know the num of charcters existing is 256 so the code will be as follows:

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cout<<"Enter the characters in the array: ";
    cin >> s;   
    
    // precompute the code
    int hash[256] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i]] ++;  // in this case we dont need to substract from 'a' as this time all the characters will be stored accordingly because the array size here is 256
    }
    
    int q;
    cout<<"Enter the number of queries you want: ";
    cin>>q;
    
    while(q--){
        char c;
        cout<<"Enter the character you want to search: ";
        cin>>c;
        
        // fetching the output
        cout<<hash[c]<<endl;  // here also we dont need to substract from 'a'
        
    }

}

// In character hashing we will never have a problem regarding size of array as we know the maximum number of characters are 256

//  Similarly if it is only for upper case alphabets we need to do:
//  hash[s[i] - 'A'] ++; - for precomputing the code 
//  cout<<hash[c - 'A']<<endl; - for fetching the output

//  hash[s[i]] - the inside[] needs and integer so even if we write s[i] it will autocast itself to an integer value which will be its ASCII value




