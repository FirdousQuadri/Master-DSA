// DIGIT

// Extraction of digits:

n=7789;
// If the n is 7789 then by doing 7789 % 10 we will get the last digit that is 9 and to get the rest numbers we can do 7789 / 10 by that it will give the first remaining digits that is 778
// Likewise we can continue the loop till we get 0 and in this method we will be able to extract all the digits individually and can even note that we will get it in reverse order

// Psuedo code
while(n>0){
    last digit = n%10;
    n=n/10;
}

// If we understand this we will be able to do the next problems easily