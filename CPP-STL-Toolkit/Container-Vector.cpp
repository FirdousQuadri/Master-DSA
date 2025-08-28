// VECTORS

//  A vector in C++ is a dynamic array provided by the Standard Template Library (STL). Unlike regular arrays, vectors can grow or shrink in size at runtime.
//  It's part of the <vector> header.
//  Best place to use vector is where we dont know the size of the data structure.

// WHY TO USE VECTOR?

// Automatically resizable - dynamic in nature
// Safer than arrays (e.g., .at() checks bounds)
// STL compatible (works with algorithms like sort())

// DECLARING A VECTOR:
vector<int> v; /* This line basically creates an empty container  */

v.push_back(1); 
cout<< v[0]; /* Here basically the value 1 will be pushed back into the above empty container and become{1} and so will be the output  */

v.emplace_back(2); /* Its similar to push_back, here it inserts the value 2 in the above function and thus dynamically increases the size to {1, 2} and its mostly faster than push_back  */

// We can also declare vector as a data type, the declaration will be as below:
vector<pair<int, int>>vec;

vec.push_back({1, 2}); /* Here we have to use curly brackets for inserting the values as pair */

vec.emplace_back(1, 2); /* Here we dont need to use curly brackets because it assumes it to be a pair and inserts it into the vector defined
In this way the syntax is different */

vector<int> v(5, 100); /*Here the size of the container is declared as 5 by having the value '100' as 5 times that is {100, 100, 100, 100, 100} with index starting as usual from 0 to 4 here  */

vector<int> v(5);
/*If we dont want to declare the value 100 and want to declare just the size as 5, then we can simply write as above
It will declare the container of size 5 having 0 or any garbage value of 5 instances that is {0, 0, 0, 0, 0}and if we want we can increase its size by using push_back */

vector<int> v1(5, 20); /*Similary it will create 5 instances of value 20 that is {20, 20, 20, 20, 20} */

/* And if i want to copy the above vector and declare it into another container/vector, then we can simply declare another vector and pass the value of first container as below  */

vector<int> v2(v1); /*Here the values of v1 is inserted or passed to v2 and now v2 has the copy of the same value as v1  */

// ACCESSING A VECTOR:

/* Supposedly the values in vector are - v{20, 10, 15, 5, 7};  having indexes from 0-4 as usual
So if we want to access the first index we can simply write v[1] similar to accessing an array
So the 2 different ways of accessing are:  */
cout<<v[1]; or cout<<v.at(1); 
/* The second 'at' method is usually not followed by people so try to avoid it. */

// Accessing a Vector using Iterators:

// Here imagine the vector being {20, 10, 15, 6, 7}





// DECLARING A VECTOR BY USING ITERATOR:

1 - v.begin()

vector<int>::iterator it=v.begin();
it++;
cout<< *(it) <<" ";

<int> - /* can be any other data data type as well */

it - /* being an id or just a name, it could be any different name also*/

v.begin() - /* is pointing to the beginning but to the memory andd not to an element  */

it++ - /* here it will move forward to the next memory of the vector, here in this case it being 10 and if we continue to do so it will continue to move forward to the next to next memory location */

* - /* it is used to access anything in the memory */

*(v.begin()) - /* so if we write this it means it is giving the access to the elements stored in the memory */

vector<int>::iterator it=v.begin();
it++;
cout<< *(it) <<" ";
it=it+2; /* it will shift 2 positions */
cout<< *(it) <<" "; /* then it will give output as 6 by shifting its 2 position from 10 to 6 */

// Here imagine the vector being {10, 20, 30, 40} 

2 - vector<int>::iterator it=v.end(); 
/* Here the iterator wont point the value 40 because its in end, rather it will point to the memory location right after the last element, here which is 40
Here if we do it-- then the value will come to 40 which comes before the end value*/

3 - vector<int>::reverse_iterator it=v.rend();  /* rend is reverse end 
In this case it will reverse the vector that is {40, 30, 20, 10} and then as it is reverse end so it will come just before that end which will be to the place before 40*/

4 - vector<int>::reverse_iterator it=v.rbegin();  /* rbegin is reverse begin 
In this case it will reverse the vector that is {40, 30, 20, 10} and then as it is reverse begin so it will come just after that begin which will be to the place after 10 */

5 - cout<<v.back(); 
/* It will give the output 40 in this case which means the last element of the vector */

// If we do 'it++' here then it will come before its last value because it is in reverse form and its the vice versa if we do 'i--' 


// DELETION OF A VECTOR:

// Supposedly the values of vector are {10, 20, 12, 23}
/* For using erase function we need to give either the location of the address we want to delete */

v.erase(v.begin()+1);
/* Here it will erase the value 20 that is 1 after the beginning value and it will reshuffle the vector and will become {10, 12, 23} */

v.erase(v.begin()+ 2, v.begin() + 4);
/* If we want to delete more than one value then we have to give the start location and also just after the end location till where we want to erase/delete the value

For eg if we take the values of vector as {10, 20, 12, 23, 35}
So according to the above function it will start from begin+2 that is from 12 and will go till begin+4 that is 35
So it will erase the values 12,23 which is just before 35 which is its end value

It will never erase the end value rather till the value just before the end value  */

// INSERT FUNCTION:

vector<int> v(2, 100); - {100, 100}
/* It simply gives 2 instances of 100 as the above function denotes
2 as number of instances needed to be inserted
and 100 as the value to be inserted*/

v.insert(v.begin(), 300); - {300, 100, 100}
/* Here in the above function it denotes the position/location where we want the value to be inserted that is .begin() 
and 300 denotes the value which is to be inserted and thus the output came as above */

v.insert(v.begin()+ 1, 2, 10); - {300, 10, 10, 100, 100}
/* Here in the above function :

v.begin()+1 denotes the place where we want the insertion of new value
2 denotes how many instances of the value we want to get inserted
10 denotes the value which we want to insert
Thus the output came to be such that the value 10 is inserted twice at the loaction v.begin()+1 that is after 300 */

vector<int>copy(2, 50); - {50, 50}
/* Its basically a vector name copy which hs 2 instances of the value 50 */

v.insert(v.begin(), copy.begin(), copy.end()); - {50, 50, 300, 10, 10, 100, 100 }
/* Here by the above function it means that we have two vector one named as copy and the other is v the above one of that

v.begin() denotes the point where the new vector needs to be inserted 
copy.begin() denotes which vector and from where of that particular vector needs to be inserted
copy.end() denotes the same vector which has to be inserted and till where it needs to be inserted like the end point

If we want to insert just a part of a vector which has more than 2 values then we can simply write just the after location of the vector till where we want to insert*/

// Supposedly consider the below values of a vector
v={10, 30, 2}
cout<<v.size(); - 3
/* It will simply give the total number of elements present in the vector in the above case it is 3*/

v.pop_back(); - {10, 30}
/* It will simply pops out the last element of the vector*/

// Supposedly consider the below two vectors:
v1 = {10, 20}
v2 = {30, 40}
v1.swap(v2);
/* It will basically swap the values to each other and thus the output will be
v1 = {30, 40}
v2 = {10, 20}    */

    vector<int> v1={10, 20};
    vector<int> v2={500, 700};
    v1.swap(v2);
 
    cout << "v1 after swap: ";
       for (auto i : v1) {
         cout << i << " ";
    }
    cout << endl;

    cout << "v2 after swap: ";
       for (auto i : v2) {
         cout << i << " ";
    }
    cout << endl;

    // Above one is just an example of how to do that
    // Output will be as below:
    v1 after swap: 500 700 
    v2 after swap: 10 20 

v.clear();
/* Doesnt matter how big the vector is, it prints down to an empty vector as it clears out the entire vector */

cout<<v.empty(); 
/* If the vector has minimum of 1 element it will declare "False" and if it does not have a single element it will declare "True"  
It will basically not print the word "True" or "False" 
Rather it will print 1 which means True and 0 which means False  */
























