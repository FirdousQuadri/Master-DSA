/* WAP to take the day number and print the corresponding day
For 1 print Monday 
For 2 print Tuesday and so on for 7 print sunday
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int day;
    cout<<"Enter day number: ";
    cin>>day;
    
    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid"
            
        cout<<"Check"    
    }  
}
    
/* If we dont write break after each statement then it will print all 
the names of the day from the very number you select 
For eg if you chose 5 then output will be FidaySaturdaysunday alltogether

And as there is number till 7, if you enter any number more than 7 then 
it will print the default one that is Invalid followed by Check - InvalidCheck */
    
    
    
    
    
    
    
    
    
