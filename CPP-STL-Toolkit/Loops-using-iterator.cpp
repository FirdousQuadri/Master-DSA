// LOOPS USING ITERATORS:

for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout<< *(it) <<" ";
}

/* Here in the above loop it means that we know the beginning of the iterator so we wrote it = v.begin() and as we know the end so we will keep running the loop till it is not equals to the end value that is it != v.end() and keep on increasing by it++ */

for (auto it = v.begin(); it != v.end(); it++){
    cout<< *(it) <<" ";
}

/* Here by using auto, it automatically assigns it to vector iterator. We dont need to define datatype it automatically defines the data type according to the data present
For eg if we write auto a=5, it defines it as int data type, if we write auto a="raj" it defines it as string data type */

for (auto i : v){
    cout<<i<<" ";
}

/* Here 'i' directly points to the value of the vector and not the index, and that is why we can directly print i instead of *i */
