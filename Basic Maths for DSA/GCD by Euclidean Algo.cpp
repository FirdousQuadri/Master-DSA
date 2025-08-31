// The Euclidean Algorithm is a method for efficiently computing the greatest common divisor (GCD) of two integers. It does this without explicitly factoring the numbers. The algorithm works by repeatedly applying the division algorithm until the remainder is zero. The last non-zero remainder is the GCD of the original two numbers. 

// So if we have n1 & n2 then GCD(n1 & n2) = GCD(n1-n2, n2) where n1 > n2. 
// Usually in books we can see it written as GCD(a, b) = GCD(a-b, b) where a > b
// For eg GCD(20, 15) is 5 
// And if we see GCD(20-15, 15) that is GCD(5, 15) is also 5 and if we keep on truncating it as finding GCD(15, 5) and so on at the end we will get GCD(5, 0) and so 5 is left as GCD, hence proved.

// In a better term we can say that GCD(a, b) = GCD(a % b, b) and will go on till it becomes 0, where definetely a > b
// Basically the logic is greater % smaller and will go on till one of them is 0 and if one of them is 0 then the other is GCD

// And using this logic we can code as below to find GCD:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter 1st number: ";
    cin >> a;
    
    int b;
    cout << "Enter 2nd number: ";
    cin >> b;
    
 
   while(a > 0 && b > 0){
       if(a > b){
           a = a % b;
       }
       
       else{
           b = b % a;
       }
   }
   
   
   if(a==0){
     cout<<"GCD = " <<b;
   }
   
   else{
     cout<<"GCD = " <<a;
   }
            
 }

// TC here is O(log ϕ (min (a, b)))
// ϕ - phi

// Why its not log 10 because in the digit extraction its always n/10, but here a & b are always changing that is why here phi - ϕ is used and (min (a, b) because that is the initial number from where we start to do it


