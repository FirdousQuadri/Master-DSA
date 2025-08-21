// PRIORITY QUEUE
// It means that if we want the minimum value to be at top we can use this
// It is known as max heap
// As the name recommens priority that means the element with the largest value in the queue stays at the top

void explainPQ(){
     priority_queue<int>pq;
     pq.push(5); - {5}
    // As usual it pushes the element 5 

     pq.push(2); - {5, 2}
    //  Here it pushes element 2 next to 5

     pq.push(8); - {8, 5, 2}
    //  Here it didnt push element 8 next to 2 that is because as the value of 8 is greater than 2 as well as 5 so it placed it in first of all the other elements

     pq.emplace(10); - {10, 8, 5, 2}
    //  Here as 10 is greater than all the other values therefore it is placed infront of all the other elements

    cout<<pq.top(); - {10}
    // That is because it is the largest of all the other elements so it prints 10

    pq.pop(); - {8, 5, 2}
    // As usual it will pop/delete the first element

    cout<<pq.top(); - {8}
    // As the element 8 is in the top after 10 being popped out so it will print 8

    // The other functions - size, swap, empty remains the same as stack

    // Basically here all the elements are stacked/placed in descending order so if you add any element it gets paced in that way

    // MINIMUM HEAP
   // It means that if we want the minimum value to be at top we can use this
  // It is known as min heap

}