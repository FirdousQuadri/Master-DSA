ARRAYS

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]; /* in the same way we can change the datatypes acc to our needs
    - long long, double, char, float, string etc*/
    
    /* Here we can add inputs such as 60 49 8 76 5 and for cout<<arr[2];
    the output will be 8 as it is the value which is assigned to the index 2 */
    
    cout<<"Enter the number: ";
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // arr[2]+=10;
   /* and for this we will get output as 18 as 0 will be added to the value present in index 2
    so it will become 8+10 =18 */

    //arr[2]=10;
    /*and for this the output will be 10 of index 2 as it will replace the value and assign 
    the new value which you have set */
    cout<<arr[2];
}

// 2D Arrays:
int main(){
    int arr[3][5];
/*it means it will create 3 arrays which will store 5 values each, 3 being row number & 5 being 
 column number */ 
    arr[1][3]=78;
    cout<<arr[1][3]; /* output will be 78 as that the value which has been added to the particular index*/
    cout<<arr[2][1]; /* if we try to print this it will give garbage value that means any random value
    of its choice and that will be different from each other the num of times you run*/
}

STRINGS

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Firdous";
    cout<<s[2]; /*output will be r which is present at index 2*/
    int len=s.size();
    s[len-1]='p'; /*it will replace s from the string and add p in its place*/
    cout<<s[len-1]; /*it will give output as s as the length of string is 7 and it will give 
    output of the value of the last index*/
    cout<<len; /*it will give the length of the string that is 7*/

    
}
    
    
    
    
    
    
    
    
    
    
