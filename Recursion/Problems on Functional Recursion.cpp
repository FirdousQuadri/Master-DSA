// WAP to reverse an array using recursion

#include <bits/stdc++.h>
using namespace std;

void f(int i, int j, int a[]){
    
    if(i>=j){
        return;
    }
    
    swap (a[i], a[j]);
    f(i+1, j-1, a);  // pass array

}

int main(){
    int n;
    cout <<"Enter size of array: ";
    cin >> n;
    
    int a[n];
    cout<<"Enter values of the array: ";
     for(int i=0; i<n; i++) {
        cin >> a[i];
    }
 
    f(0, n-1, a);   // call function with array
    
    cout << "Reversed array: ";
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}


// 2nd Way:

#include <bits/stdc++.h>
using namespace std;

void  Reverse(int arr[] , int i, int n){
    
    if( i >= n/2){
        
        return;
    }
    
    swap(arr[i] , arr[n-i-1]);
    
    Reverse(arr , i+1, n);

}



int main(){
    
    int n;
    cout<<"Size :";
    cin >> n;
    
    int arr[n];
    
    cout<<"Enter values: ";
    for(int i=0 ; i<n ; i++){
        
        cin >> arr[i];   
        
    }
    
     Reverse(arr , 0, n);
     
     for(auto i : arr){   // instead of this you can also write for(int i=0 ; i<n ; i++){
         
         cout<<i<<" ";
         
     }
    
}


// WAP to check if the given string is palindrome or not by using functional recursion. For eg if string is "mom" / "11211" then print "Palindrome" if its "cat" / "13241" print "Not Palindrome" because you know what Palindrome means


#include <bits/stdc++.h>
using namespace std;

bool  f(string &s , int i){
    
    if(i >= s.size()/2){
        return true;
    }
    
    if( s[i] != s[s.size()- i - 1]){
        
        return false;
    }
    
    return f(s, i+1);
}

int main(){
    
    string s;
    cout<<"Enter string: ";
    cin >> s;   
    
    cout << (f(s, 0)); 
}

// It will return 1 if true and 0 if false

// So if you want to print directly palindrome/not then use an if condition instead of direct cout in last line of the code as below:

if(f(s, 0)) cout << "Palindrome";
    else cout << "Not Palindrome";

    return 0;


// TC is O(n/2), it will be auxilary time space nothing like significant one as no containers are used

 




