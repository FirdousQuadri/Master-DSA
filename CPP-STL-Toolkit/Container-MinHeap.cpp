void explainMH(){
    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5); - {5}
    // It usually pushed the element 5

    pq.push(2); - {2, 5}
    // Here it pushed the value 2 at front because it is smaller than 5

    pq.push(8); - {2, 5, 8}
    // Here it pushed the element 8 at the last because it is greater than the other two elements

    pq.emplace(10); - {2, 5, 8, 10}
    // Here it emplaced the element 10 at the last because it is greater than the other three elements

    cout<<pq.top(); - {2}
    // Here it prints the element 2 because it the smallest of all the other elements present in the queue, if there had been values lesser than 2 like 1/0 it would have printed that
    
    // Basically here all the elements are stacked/placed in ascending order so if you add any element it gets paced in that way
 
}  




/*  Time Complexity of the following:
 push - logarithmic n log(n)
 top - O(1)
 pop - logarithmic(n)         */

