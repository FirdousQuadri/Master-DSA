// UNORDERED SET

// It stores in a unique way but it is not sorted, it has randomised order

void explainUSet() {
     unordered_set<int>st;
     st.insert(1);
     st.insert(5);
     st.insert(3);
     // Here the output will come in any order 3 5 1 or 3 1 5 or 1 5 3
     // or any other ordering — but all elements will be unique and present once.


// Here all the operations work except lower_bound and upper_bound functions
// All the operations are in O(1) constant time
// In the worst case which hppens once in a millenium that operations happen in O(n)

}
