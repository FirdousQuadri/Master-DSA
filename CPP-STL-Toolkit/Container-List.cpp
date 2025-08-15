// LIST

// It is similar to vector, but a different thing is that it gives front operations as well. It is also dynamic in nature.

void explainList(){
    list<int>ls;   /*  Declaring a list  */
    ls.push_back(2); - {2}
    // It will insert the value 2 in the list 

    ls.emplace_back(4); - {2, 4}
    // It will push the value 4 at the back of the last element of the list

    ls.push_front(5); - {5, 2, 4}
    // It will push the desired value in front of the first element of the list

    ls.emplace_front(); - {0, 5, 2, 4};
    // It will add a 0 in front of the first element of the list as no specific value has been written in the function so it will add garbage value

// Rest of the functions are same as vector - begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()

}



