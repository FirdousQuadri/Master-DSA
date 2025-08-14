FOR LOOPS

#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
       cout<<"Firdous"<<endl;
       }
    // It will print Firdous 5 times below each other. Can also write i=i+1 instead of i++

    cout<<i<<endl; /* it wont give the value as it is only declared inside the loop
    If we want to know the value of i we need to initialize it before the loop as int i;
    Then it will give the value as 6 of i*/

      for(i=5;i>0;i--){
       cout<<"Firdous "<<i<<endl;
       }
    cout<<i<<endl;
    /* Firdous 5
       Firdous 4
       Firdous 3
       Firdous 2
       Firdous 1
       0  
It will give output as this because here we are going in a decreasing order and we have
already initialized i outside of for loop so at end when it will come to 0 there instead 
of printing it will stop the loop and by printing the value of i we get 0  */

for(i=1;i<=25;i=i+5)
/* we can give these conditions too, it will increase the value by 5 and the output will be
Firdous 1
Firdous 6
Firdous 11
Firdous 16
Firdous 21
26 */
}

WHILE LOOPS

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=1;
    while(i<=5){
    cout<<"Firdous "<<i<<endl;
    i=i+1;    
    }
/* We write like this we have to initialize the value of i at the start, then put the condition 
inside while loop and how it needs to run in increasing or decreasing order we have to put at last*/

int i=2;
    do{
        cout<<"Firdous "<<i<<endl;
        i=i+1;
    }while(i<=1);
    cout<<i<<endl;
    /* In this case the output will be Firdous 2
                                       3
    as here it needs to be get printed first and then it will check the condition, as do loop will make it 
    to print atleat once and as i value increases to 3 so it will give the output of i as 3 at last  */                                 


}   