// QUEUE

// It is similar to STACK but here it is 'FIFO' - First In First Out

void explainQueue(){
     queue<int>q;
     q.push(1); - {1}
     q.push(2); - {1, 2}
     q.emplace(4); - {1, 2, 4}
     q.back()+=5;
     cout<<q.back(); - {9}
    //  As the value 5 will be added to the value of the last element 4 as we have used the function back so it gives the value   5 + 4 = 9

    cout<<q.front(); - {1}
    // As here Q becomes - {1, 2, 9} in acc to the back function we used so front means the first element and it jut prints no deletes

    q.pop(); - {2, 9}
    // It basically pops out or deletes the first element that was 1

    cout<<q.front(); - {2}
    // It prints the first element that was 2 in the above case 


    // The other functions - size, swap, empty remains the same as stack
}

// ****  All the happenings starting from vector till now and even further are going on in constant time that is in Big O - O(1)
