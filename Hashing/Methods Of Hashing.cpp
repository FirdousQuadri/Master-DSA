// METHODS OF HASHING:

// Map Data tructure are created by using some methods of hashing. They decide how to compute the hash value (index) from a key.

// There are basically 3 methods of designing hash functions which are as follows:

// -> DIVISION METHOD:

// For ex we take here an arr =[2, 5, 16, 28, 139] so we know that here we can take an array of size 140 and can store all the values till 139, but assume that you are allowed just to take the array size to be >=10 and not for than that then how will you do it. That is when this method steps in.

// That means we can take the array size of 10 to store these values starting from index 0-9. So here we gonna modulate each number with 10 that is :
// 2 % 10 = 2,  5 % 10 = 5, 16 % 10 = 6, 28 % 10 = 8, 139 % 10 = 9
// So by this we can store this values in its respective index and now we can do hashing here
// So if someone asks you how many times does the number '139' occurs you can simply modulate 
// 139 by 10 = 9 and as it occurs 1 time you can say that and that is how you trim down an array


-----------------------------------------------------------------------------------------------------


// LINEAR CHAINING:

// So in the above array we saw that the numbers werent repeating or the end value after modulating each with 10 wasnt same. What if after modulating different numbers of an array give the end value as same like assume an arr = [2, 5, 16, 28, 139, 38, 48, 28, 18]. So if we modulate them by 10 we get {2, 5, 6, 8, 9, 8, 8, 8, 8} so like how gonna we store that and here where linear chaining comes in so as we have index from 0-9 so in each we can store as below after modulating it:
// 0 - N/A
// 1 - N/A
// 2 - we can store 2
// 3 - N/A
// 4 - N/A
// 5 - we can store 5
// 6 - we can store 16
// 7 - N/A
// 8 - we can store 18-> 28-> 28 -> 38 -> 48
// Now as there are other numbers which by modulating with 10 has given 8 as remainder so we can store it here in a form of linear chain that is where it will appear as above, but most importantly they will get stored in a sorted format and not how we approach it randomly
// 9 - we can store 139

// Now if someone asks how many times 28 has appeard in the array then we do 28 % 10 we get 8, we directly go to 8 and as we know there will be limited numbers stored in 8 and are in a sorted form so there are lot of search algorithms which are applied internally and easily do a binary search on it & we find that there are 2 times of appearance of element '28' and it can be done in minimal time


-----------------------------------------------------------------------------------------------------



// COLLISION:

// Imagine you have an arr = [18, 28, 38, 48, 58.........1008]. So here all the other index are blank and if we modulate all the elements of the array by 10 then remainder will be 8 and every element will be stored in index 8 that is what collision happens that all the keys gets stored in a single particular hash index while others remain blank & this is where the worst case happens


-----------------------------------------------------------------------------------------------------



// -> FOLDING METHOD:

// You take a big number (the key), cut it into smaller pieces, and then add those pieces together.
// That sum is used to decide where to place the key in the hash table.

// Example: Imagine a phone number 9876543210. You split it into parts like 987, 654, 321, 0. Then you add them up → that total decides the hash index.

// So folding = cut + add.


-----------------------------------------------------------------------------------------------------



// -> MID - SQUARE METHOD:

// You take the key, square it (multiply by itself), and then look at the middle part of the squared number. That middle part decides the hash index.

// Example: If the key is 123, then 123 × 123 = 15129. The middle digits 151 (or 512 depending on how many you want) are taken. That number is used as the hash index.

// So mid-square = square + take the middle digits.

// These 2 above methods are not needed its just for some extra knowledge