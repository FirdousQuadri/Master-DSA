/*Time Complexity - rate at which the time taken increases with respect to the input size
Way to count time complexity is by Big Oh notation - O(time taken)
So if we write a loop
for(i=1; i<=5; i++){
   cout<<"Firdu";
}
So here the number of steps taken to complete this loop is basically the time taken so inside 
O(num of steps)
And as we cannot the steps manually so we need to follow there rules:
-TC to be completed within the worst case scenarios
-avoid constants
-avoid lower values

Big Oh Notation is used only for worst case scenarios, for best case scenarios we use Omega & for average case scenarios we use Theta 
worst case is also known as upper bond, best case as lowest bond */

/*Space Complexity - memory space that a program takes which consists of auxiliary(space that you take to solve the problem) and input space(the space that you take to store the input.)
Here also we use Big O Notation to calculate space complexity.
Ex - a and B are 2 variables and c=a+b sp here c is the auxiliary space which is needed to solve the problem, while a and b will be referred as input space. So as we are using three variables here so we hwill say that the space complexity is Big O(3)
Ex - int a[n], so the space complexity here will be Big O(n)

Reminder - that if we solve any program in 1sec then it will be Big O (10^8), similarly if it took 2s then it will be Big O (2*10^8)
*/

