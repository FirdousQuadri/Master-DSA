// DEQUE

void explainDeque(){
    deque<int>dq;     /* Declaring a deque */
    dq.push_back(1); - {1}
    // It will add the value 1 to the deque

    dq.emplace_back(2); - {1, 2}
    // It will emplace thee value 2 at the back of thr last element here 1

    dq.push_front(4); - {4, 1, 2}
    // It will push the desired value in the front and the rest of the values of the list will follow it back

    dq.emplace_front(3); - {3, 4, 1, 2}
    // It will emplace the desired value at the front of the first element of the list

    dq.pop_back(); - {3, 4, 1}
    // It will pop out the last element of the list

    dq.pop_front(); - {4, 1}
    // It will pop out the first element of the list

    dq.back(); - {1}
    // It returns a reference to the last (back) element of the deque
    
    dq.front(); - {4}
    // It returns a reference to the first (front) element of the deque

    // Rest of the functions are same as vector - begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()

}

