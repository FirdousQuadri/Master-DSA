// SELECTION SORT :

// Selection sort is a simple, in-place comparison-based sorting algorithm. It works by repeatedly finding the minimum element from the unsorted part of the array and placing it at the beginning of the unsorted portion, effectively building a sorted subarray from left to right. 

// Assume arr = [13 46 24 52 20 9]
// As the name recommends we select the minimum & swap and that is the algo also, so in the above array the minimum is 9 so we gonna place 9 at the very first of the array and the element 13 present there has to swap to the place of element 9 and the rest remains the same 
// So after 1st step array becomes - [9 46 24 52 20 13]
// 2nd step - now as the first element is sorted then we need to sort the rest of the elements and so we have to find the minimum of the rest elements & in this case it is 13 so as before 13 gonna come after the element 9 and the element 46 will swap to place of 13 so now array becomes - [9 13 24 52 20 46] Likewise we need to sort all  
// After 3rd step - [9 13 20 52 24 46], after 4th step - [9 13 20 24 52 46], 
// After 5th step - [9 13 20 24 46 52] and now we cn see that the whole array has been sorted starting from min to max. The array had 6 elements and got sorted in 5 steps

// If we notice we are swapping till 2nd last element of the array because if we reached sorting till 2nd last then automatically the last element left is already sorted and does'nt need any sorting. So its basically that we started sorting from (0 till n-2)

// Way of swapping elements:
// Assume arr[i] = 15, arr[min] = 12, temp = 0
// temp = arr[min] so temp = 12
// arr[min] = arr[i] so arr[min] = 15
// arr[i] = temp so arr[i] = 12
// So now both are swapped as arr[i] = 12 & arr[min] = 15



// Implementing the algo in a pseudo-code:

for(int i = 0; i <= n-2; i++){
    min = i;

    for(int j = i; j <= n-1; j++)  {
         
        if(arr[j] < arr[min]){
            min = j;
        }
    }
swap(arr[min], arr[i]);  // have to use the swap method mentioned above

}



// Complete code for selection sorting:

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i <= n-2; i++){
       int min = i;
       
       for(int j = i; j <= n-1; j++){
           if(arr[j] < arr[min]){
            min = j;
        }
        
      }
      
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    
    }
}


int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        
    }
    selection_sort(arr, n);
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
}


// Using swap function only:

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    
    int index;
    
    for(int i=0; i<n-1; i++){
        
         index = i;
        
        for(int j=i; j<n; j++){
            
            if(arr[j] < arr[index]){
                index = j;
            }
            
        }
        
        swap(arr[i], arr[index]);
    }
    
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the values: ";
    
    for(int i=0; i<n; i++){
         cin>>arr[i];
    }
   
  selection_sort(arr, n);
     
     for(auto it : arr){
         cout<<it <<" ";
     }

}


// Output will be as below:

Enter number of elements in the array: 6
Enter elements of the array: 13 46 24 52 20 9
9 13 20 24 46 52    // sorted array

// TC
// Outer loop: Runs from i = 0 to n-2 → (n-1) iterations ≈ O(n)
// Inner loop: For each i, inner loop runs from j = i to n-1. Total comparisons = n + (n-1) + (n-2) + ... + 1 = n(n+1)/2 ≈ O(n²)
// Swapping: 1 swap per iteration of the outer loop → O(n) But compared to O(n²), this is negligible.
// Final Time Complexity: Best case, Worst case, Average case = O(n²)
// Space Complexity: Only a few extra variables (min, temp) → O(1)


------------------------------------------------------------------------------------------------------------

// BUBBLE SORT: 

// Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted. 

// It basically pushes the maximum to the last by adjacent swaps completely vice versa to selection sort as it pulls minimum values to front, this pushes maximum to last

// Assume arr = [13 46 24 52 20 9]
// Here it checks the first 2 elements(13 & 46) are they sorted yes so it doesnt change anything, then it goes to (46 & 24) it swaps 24 to 46 and vice versa so arr = [13 24 46 52 20 9], then goes to (46 & 52) they are sorted so doesnt change then goes to (52 & 20) swaps both, arr becomes [13 24 46 20 52 9] then compares (52 & 9)swaps arr becomes [13 24 46 20 9 52] now after adjacent swaps we can see that the max element 52 is at the last. We goona repeat the same procedure again just keeping the last element to be sorted and working on from [13 24 46 20 9] so after complete adjacent swaps like before we will get arr with the elements as [13 24 20 9 46 52] so as we can see last 2 elements are sorted and need to sort again from - [13 24 20 9] using the same above method and at end will get [13 20 9 24] till now not sorted so will do step 4 again in the same way so will get [13 9 20], again doing step 5 will get [9 13] and now as we see all the elements are sorted and finally we get arr = [9 13 20 24 46 52]

// So we started sorting from 0-(n-1),then 0-(n-2), 0-(n-3).....till 0-1

// Key point - we actually need to loop from 0- 2nd last element and not the last element because if we do so we wont be having any other element left for the last element to be compared to. And if we do so it will throw a 'runtime error' as we will be accessing an index which is not present

// Implementing the above logic as pseudo-code:

for(int i = n-1; i >= 1; i--){
    for(int j = 0; j <= i-1; j++){  // j<=i-1 so that it will loop till 2nd last element
        if(a[j] > a[j+1]){
            swap;
        }
    }

}

// Complete code for bubble sorting:

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
   for(int i = n-1; i >= 1; i--){
    for(int j = 0; j <= i-1; j++){  
        if(arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
      }
   }
}


int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    bubble_sort(arr, n);
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
}

// Output will be as follows:

Enter the size of array: 6
Enter the values: 13 46 24 52 20 9
9 13 20 24 46 52 

// TC - O(n^2) it can also be optimized as this is the worst and average case complexity. If there is an array =[1 2 3 4 5] no sorting is needed as everything is already sorted and there is no need to run the loops then the TC in such best case will be O(n).

// We can even do that using a code where if everything is sorted it wont run the loop n times

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
   for(int i = n-1; i >= 1; i--){
       int didSwap = 0;
    for(int j = 0; j <= i-1; j++){  
        if(arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
     }
     
     if(didSwap == 0){
         break;  // here it will break and the first for loop wont run more than once 
     }
  }
}


int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    bubble_sort(arr, n);
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
}

------------------------------------------------------------------------------------------------------------

// INSERTION SORT :

// Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It works by virtually dividing the array into a sorted and an unsorted part. Elements from the unsorted part are picked and inserted into their correct position in the sorted part.

// So it basically takes an element and places it in its correct order

// Assume an arr = [14 9 15 12 6 8 13] Below is how insertion sorting works:

// First element (14). A single element is always “sorted”. Sorted part = [14]

// Take 9 - Compare with 14 → since 9 < 14, shift 14 to the right. Insert 9 at the beginning.
// Array → [9, 14, 15, 12, 6, 8, 13]

// Take 15 - Compare with 14 → 15 > 14, so leave it. Insert at its place. Array remains the same.

// Take 12 - Compare with 15 → 12 < 15 → shift 15 right. Compare with 14 → 12 < 14 → shift 14 right. Compare with 9 → 12 > 9 → stop. Insert after 9.
// Array → [9, 12, 14, 15, 6, 8, 13]

// Take 6 - Compare with 15 → shift. Compare with 14 → shift. Compare with 12 → shift. Compare with 9 → shift. 
// No more elements left, insert at beginning. Array → [6, 9, 12, 14, 15, 8, 13]

// Take 8 - Compare with 15 → shift. Compare with 14 → shift. Compare with 12 → shift. Compare with 9 → shift.Compare with 6 → 8 > 6 → stop. Insert after 6. Array → [6, 8, 9, 12, 14, 15, 13]

// Take 13 - Compare with 15 → shift. Compare with 14 → shift. Compare with 12 → 13 > 12 → stop.
// Insert after 12. Array → [6, 8, 9, 12, 13, 14, 15] & we get the Final Sorted Array

// Pseudo - code for the above algo :

for(int i = 0; i < n; i ++){
    int j = i;
    while(j>0 && a[j-1] > a[j]){
        swap(a[j-1], a[j]);
        j--;
    }

}

// Complete code for insertion sorting:

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
   for(int i = 0; i < n; i ++){
      int j = i;
    while(j > 0 && arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        
        j--;
    }

  }

}


int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    insertion_sort(arr, n);
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
}


// Output will be as below:

Enter number of elements in the array: 6
Enter elements of the array: 8 3 20 6 1 55
1 3 6 8 20 55

// TC - O(n^2) it can also be optimized as this is the worst and average case complexity. If there is an array =[1 2 3 4 5] no sorting is needed as everything is already sorted and there is no need to run the loops then the TC in such best case will be O(n).







