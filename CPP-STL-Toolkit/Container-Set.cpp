// SET

// Sets store everything in a sorted order and in a unique way

void explainSet(){
     set<int>st;
     st.insert(1); - {1}
    //  It will insert the element as usual

     st.emplace(2); - {1, 2}
     //  It will insert the next element also generally at the back 

     st.insert(2); - {1, 2}
    //  Now as the element 2 is already present in the container, it wont insert it again and here it shows its uniqueness

     st.insert(4); - {1, 2, 4}
    //  Here it will add 4 at the back because it is a new element

     st.insert(3); - {1, 2, 3, 4}
    //  Here it will insert 3 but not at the back of 4 rather infront of 4 that is where it will make it in a sorted order

    // The other functions such as begin(), end(), rbegin(), rend(), size(), empty(), swap() remains the same as other containers


    // Supposedly assuming the elements of the container to be {1, 2, 3, 4, 5}
    auto it = st.find(3);
    // Here it will return an iterator which points to the element 3 in the set

    auto it = st.find(6);
    // Here as the element 6 is not present in the set, it will return set.end() so basically iw will always return this whenever any element is not present in the set

    st.erase(3); - {1, 2, 4}
    // So it will erase the element 3 from the set and maintain its sorted order 
    // ***It takes logarithmic time

    int cnt = st.count(1);
    // If the element exists so it will give 1 otherwise 0 because as we know that any number cant be occured more than once

    cout << st.count(6)
    // This is how we gonna find that

    auto it = st.find(3);
    st.erase(it);
    // So either we can erase the element by giving the element or we can erase by giving the address here it means iterator that is the address of the element 
    // ***It takes constant time


    auto it1 = st.find(2); 
    // This is the first address of the iterator from where erase func will start

    auto it2 = st.find(4);
    // And this is the last address of the iterator from where erase func will end
    st.erase(it1, it2);
    // And this is the func to erase so after erasing it will give {1, 4, 5} it started from 2 but ended just before 4, it will not include the end address rather will erase just before the end address

    // The functions lower_bound() and upper_bound() works in the same way as it does in a vector
    // The syntax is as below:

    auto it = st.lower_bound(2);
    // Returns an iterator pointing to the first element that is NOT less than val or
    // Returns an **iterator to the first element in the set that is greater than or equal to the given value
    // (i.e., the first element >= val)

    auto it = st.upper_bound(3);
    // Returns an iterator pointing to the first element that is GREATER than val.
    // In this case it will print 4

    // When to use the above functions:

    // lower_bound → find an element ≥ target (or where to insert without breaking order).

   // upper_bound → find the first element strictly greater than target.

  // Both run in O(log n) time in std::set.

}
