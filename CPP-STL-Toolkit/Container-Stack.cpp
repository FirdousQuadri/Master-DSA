// STACK

/*Stack is something as LIFO - Last In First Out*/

void explainStack(){
     stack<int>st;
     st.push(1); - {1}
     st.push(2); - {2, 1}
     st.push(3); - {3, 2, 1}
     st.push(3); - {3, 3, 2, 1}
     st.emplace(5); - {5, 3, 3, 2, 1}

    // As we know what does stack mean getting one over the other so in the same way it will also get one before the first element
    // In stack we can't do the indexing and place each number to an index

    cout<<s.top(); - {5}
    // It will give the first element which is in the stack and 5 will still be there in the stack basically means it just tells which element is at the top

    st.pop(); - {3, 3, 2, 1}
    // It will pop out 5 and stack will have the values as above

    cout<<st.top(); - {3}
    // Now if we use top function again it will print 3 as the element '5' is already popped out in the above function

    cout<<st.size(); - {4}
    // It will print 4 as all these elements are counted - {3, 3, 2, 1}

    cout<<st.empty(); - False 
    // As there are already 4 elements present in the stack

    stack<int> st1, st2;
    st1.swap(st2);

}