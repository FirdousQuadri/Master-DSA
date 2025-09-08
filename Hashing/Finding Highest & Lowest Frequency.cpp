// WAP to find highest and lowest frequncy of a number using map and hashing

// 1st Way using map and hashing:

#include <bits/stdc++.h>
using namespace std;

//  1 1 2 3 2 5 5 assume this to be the array

int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    map<int, int>mpp;
    int hf = INT_MIN;
    int lf = INT_MAX;
    
    // iterate over array to insert values in mpp
    for(int i = 0; i<n; i++){
        mpp[arr[i]]++; //  (1,2) (2,2) (3,1) (5,2)
    }
    
    // iterate over mpp
    for(auto it : mpp){
        
        hf = max(hf , it.second);  // 2, 2 , 2 , 2
        lf = min(lf , it.second);  // 2 , 2 , 1 , 1
    }
   
    cout<<"Highest frequency is: "<<hf<<endl;
    cout<<"Lowest frequency is: "<<lf<<endl;
    
}

// Output will be as below:  

// Enter number of elements in array: 7
// Enter elements of the array: 1 1 2 3 2 5 5
// Highest frequency is: 2
// Lowest frequency is: 1



-----------------------------------------------------------------------------------------------------



// 2nd Way using function call:

#include <bits/stdc++.h>
using namespace std;

void high_low_freq(int arr[], int n){
    int hf = INT_MIN;
    int lf = INT_MAX;
    
    for(int i = 0; i<n; i++){
        int cnt = 0;
        
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        
        hf = max(hf, cnt);
        lf = min(lf, cnt);
    }
    
    cout<<"Highest frequency is: "<<hf<<endl;
    cout<<"Lowest frequency is: "<<lf<<endl;
    
}


int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    high_low_freq(arr, n);
}


-----------------------------------------------------------------------------------------------------


// 3rd Way using only main():

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    
    int hf = INT_MIN;
    int lf = INT_MAX;
    
    for(int i = 0; i<n; i++){
        int cnt = 0;
        
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        
        hf = max(hf, cnt);
        lf = min(lf, cnt);
    }
    
    cout<<"Highest frequency is: "<<hf<<endl;
    cout<<"Lowest frequency is: "<<lf<<endl;
    
}


-----------------------------------------------------------------------------------------------------

// WAP to find highest and lowest frequncy element using map 


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    map<int, int> freq;   // directly count frequencies
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    // Step 1: Find highest & lowest frequency
    int maxFreq = INT_MIN, minFreq = INT_MAX;
    for (auto it : freq) {
        maxFreq = max(maxFreq, it.second);
        minFreq = min(minFreq, it.second);
    }

    // Step 2: Print all elements with those frequencies
    cout << "Elements with highest frequency (" << maxFreq << "): ";
    for (auto it : freq) {
        if (it.second == maxFreq) cout << it.first << " ";
    }
    cout << endl;

    cout << "Elements with lowest frequency (" << minFreq << "): ";
    for (auto it : freq) {
        if (it.second == minFreq) cout << it.first << " ";
    }
    cout << endl;

    return 0;
}

// Output will be as below:

Enter number of elements in the array: 7
Enter elements: 1 2 2 3 3 3 4
Elements with highest frequency (3): 3 
Elements with lowest frequency (1): 1 4


-----------------------------------------------------------------------------------------------------


// 2nd Way using Unordered_Map:


#include<bits/stdc++.h>
using namespace std;

// highest and lowest frequency element
int main(){
    
    int n;
    cout<<"Enter the size : ";
    cin >> n;
    
    int arr[n];
    
    cout<<"Enter values : ";
    for(int i=0 ; i<n ; i++){
        
        cin >> arr[i];
        
    }
    
    unordered_map<int, int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    
    int hfreq = INT_MIN;
    int lfreq = INT_MAX;
    
    // to find frequency
    for(auto it: mpp){
        hfreq = max(hfreq, it.second);
        lfreq = min(lfreq, it.second);
    }
    
    // to find element for 
    for(auto it: mpp){
        if(hfreq == it.second){
            cout<<"The highest frequency element is: "<<it.first<<" ";
        }
        
        if(lfreq == it.second){
            cout<<"The lowest frequency element is: "<<it.first<<" ";
        }
        
        cout<<endl;
       
    }
}

// Output will be as below, its not necessary that the format will be same because as its unordered it can be in any format even if you run with the same elements multiple times :

Enter the size : 6
Enter values :2 1 9 3 9 10
The lowest frequency element is: 10 
The lowest frequency element is: 3 
The highest frequency element is: 9 
The lowest frequency element is: 1 
The lowest frequency element is: 2

------------------------------------------------------------------------------------------------------------

// 3rd Way using hashing: 

#include<bits/stdc++.h>
using namespace std;

// highest and lowest frequency element
int main(){
    
    int n;
    cout<<"Enter the size : ";
    cin >> n;
    
    int arr[n];
    
    cout<<"Enter values : ";
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
    int maxi = INT_MIN;
    
    
    // iterate into array for finding the max element
    for(int i=0 ; i<n ; i++){
        maxi = max(maxi, arr[i]);
    }
    
    int hash[maxi + 1] = {0};
    
    // iterating over arr to get freq into hash array
    for(int i=0 ; i<n ; i++){
        hash[arr[i]]++;
    }
    
    int hfreq = INT_MIN;
    int lfreq = INT_MAX;
    
    
    // finding high & low freq element
    for(auto it : hash){
        hfreq = max(hfreq, it);
        
        if(it != 0){
          lfreq = min(lfreq, it);
        }
        
    }
    
    // for printing element
    for(int i=0 ; i < maxi + 1 ; i++){
        if(hfreq == hash[i]){
          cout<<"The highest frequency element is: "<<i;
          cout<<endl;
        }
        if(lfreq == hash[i]){
          cout<<"The lowest frequency element is: "<<i;
          cout<<endl;
        }
      
    }
    
 }


// Output will be as below:

Enter the size : 6
Enter values : 2 2 2 5 5 8
The highest frequency element is: 2
The lowest frequency element is: 8





















// 4th Way with using vector and map:


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Count frequency using map
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Step 2: Find highest & lowest frequency
    int maxFreq = INT_MIN, minFreq = INT_MAX;
    for (auto it : freq) {
        maxFreq = max(maxFreq, it.second);
        minFreq = min(minFreq, it.second);
    }

    // Step 3: Collect all elements with min/max frequency
    cout << "Elements with highest frequency (" << maxFreq << "): ";
    for (auto it : freq) {
        if (it.second == maxFreq) cout << it.first << " ";
    }
    cout << endl;

    cout << "Elements with lowest frequency (" << minFreq << "): ";
    for (auto it : freq) {
        if (it.second == minFreq) cout << it.first << " ";
    }
    cout << endl;

    return 0;
}

 