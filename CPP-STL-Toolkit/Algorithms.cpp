void explainExtra(){
     sort(a, a + n);
    //  If we assume an array as below:
    int a[] ={1, 5, 3, 4};

    sort(a, a + 4);
    // So we have to write the above sort function like this where n is the total number of elements present in the array here n=4
    // This will give an sorted array with the above elements as {, 3, 4, 5}
    // So basically a is the start point and a + 4 is just right after the end point

     sort(v.begin(), v.end());
    // If we want to sort a vector we can use the above function

     sort(a+2, a+4);
    //  If we assume an array to be as below and just want to sort the last two elements then we can use the above function :
    a[] ={1, 3, 5, 2};
    // Because the last two elements are nothing but a+2 and the end address is a+4, so by this it will just sort the last 2 elements

    sort(a, a+n, greater<int>());
    // Assuming elements of array to be {1, 3, 5, 2} and we want to sort in descending order
    // a - start point
    // a+n - end point
    // greater<int> - its a comparitor which will sort in descending order and the final output will be {5, 3, 2, 1}

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // So considering the above array if we want to sort it in my-way/customized way in which:
    // It will sort according to second element and if second element is same, then sort it according to the first element but in decending order
    // so its basically combination of ascending and descending order

    // So if we want to sort it according to the first condition that is sorting according to the second element in ascending order then the pair will be as - {{2, 1} {4, 1} {1, 2}}
    // Now as the first two elements are same so according to the second condition we gonna sort it in descending order according to the first element and the pair will be as below
    // -  {{4, 1} {2, 1} {1, 2}}

    sort(a, a+n, comp);
    // For sorting in my way we have to use the above function by adding sort func along with start address, end address and comp
    // Here comp means comparitor which is a boolen function

    // How to write boolean function/analyzing the function:
    // It has to written a true/false

    bool comp(pair<int, int>p1,  pair<int, int>p2){
           if(p1.second < p2.second) return true;
        // Here we considered 2 pairs and assumed that if the second element of p1 lies before second element of p2 which is should be then its fine and return true because its in the correct order

           if(p1.second > p2.second) return false;
    // Accordingly we understand if this is the case return false because it is not in the correct sorted order which we want

    // And if the above two conditions wont work that means both the values are same   

        if(p1.first > p2.first) return true;
        return false;

    // So whenever you do this analyze every condition while assuming 2 pairs

// The whole code for the above problem:

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int>p1,  pair<int, int>p2){
          if(p1.second < p2.second) return true;
          if(p1.second > p2.second) return false;
          if(p1.first > p2.first) return true;
          return false;
     }

void explainExtra(){
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(a, a+3, comp);
    
    
    for(auto p : a){
        cout << p.first << " " << p.second <<endl;
    }
    
}

int main(){
    explainExtra();
    return 0;
}
    }

// Other functions:

    int num = 7;
    int cnt = __builtin_popcount(num);
    // It will return 1 1 1 that means it will return how many set bytes are there here it being 3 set bytes
    int num = 6;
    // By cout<<cnt; 
    // It will be 1 1 0 that means it will return 2 set bytes 

    long long num = 165786578687;
    int cnt = __builtin_popcountll(num);
    // Write 'num' in() or whatever name by which you have declared that number
    // If the number is long long then __builtin_popcountll(); will be used ll will be added to function as only popcount will not suffice

    string s = "123";
    // If we want all the permutation of the above string then
    // Permutation means any of the different ways in which a set of things can be ordered
    // The possible permutations of 1, 2 and 3 are 123,132, 213, 231, 312 and 321 as per the dictionary order

    // So for getting the permutation we need to:
    string s = "123";
    sort(s.begin(), s.end());
    // We need to use the sort func so that we can easily get all those printed otherwise it will give permutations in a sequence after that specific number only

    do{
      cout<<s<<endl;
    }
    while(next_permutation(s.begin(), s.end()));
    // It will keep on printing all permutations until the condition comes to false and that is when the while loop breaks

    // Assuming an array to be {1, 10, 5, 6} and if we want to know the max/min element use the below function:
    int maxi = *max_element(a, a+n); 
    // Output - 10
    // Here n = number of elements in the array, here it is 4 as the array is {1, 10, 5, 6} so the syntax will be :
    int maxi = *max_element(a, a+4);

    // Add a start address, end address and the max_element, it will give the iterator or the address of that element and if you want to know the element use * before max_element

    int mini = *min_element(a, a+n);
    // Output - 1
    // As it will give you the minimum element
    // Here n = number of elements in the array, here it is 4 as the array is {1, 10, 5, 6}so the syntax will be :
    int mini = *min_element(a, a+4);

}

int main(){
    return 0;
}







