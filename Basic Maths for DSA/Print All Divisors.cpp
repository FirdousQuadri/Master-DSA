// WAP to print all the divisors of n

// So if n = 36 then we have to find out all the numbers that divide 36 and leaves no remainder behind or 0 as a remainder. So the numbers which divides 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36 One thing we know for sure is that the divisor of the number is going to be between 1 and the number itself because any number greater than the number itself wont divide it

//  1st Way:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

   cout<<"The divisors are ";
   for(int i=1; i<=n; i++){
       if(n % i == 0){
           cout<<i<<" ";
       }
   }
}


// TC - Since the loop is running from 1-n iterations so it O(n)

//  2nd Way:
// Another way which we can find out is that if 1 is multiplied to n then you will get its factor. So if we see that something   
            // 1 * 36  this is nothing but n/1
            //  2 * 18  n/2
            //  3 * 12  n/3
            //  4 * 9   n/4
            //  6 * 6   n/6
            //  9 * 4   n/9
            //  12 * 3  n/12
            //  18 * 2  n/18

// And if we see that after 6*6 we get the other half as replica of first half, so it means that if we get divisors till square root of n then we will be able to get the rest of the numbers also

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

   vector<int>ls;
   cout<<"The divisors are ";

   for(int i=1; i<=sqrt(n); i++){  /* So instead of writing i<=sqrt(n) you can write i*i<=n because as sqrt is a mathematical function so it will run all the times so like it will be 6*6 =36, next when it goes 7*7 <=36 it will go false so there is where it will stop and that is how it will work */

       if(n % i == 0){
           ls.push_back(i);

           if((n/i)!=i){   
               ls.push_back(n/i);
           }
       }
   }
   sort(ls.begin(), ls.end());  /* for sorting the divisors*/
   for(auto it : ls)
   cout<< it <<" ";
}

// TC here is O(sqrt(n)) and while sorting the factors it will be O(no of factors * log(no of factors)) and for printing number of factors the TC will be O(no of factors)

// Therefore the complete TC = O(sqrt(n)) + O(no of factors * log(no of factors)) + O(no of factors)

// Here n is the number of factors

