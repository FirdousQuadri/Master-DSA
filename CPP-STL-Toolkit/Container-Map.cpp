// MAP

// Map is a container which stores everything in respect of key and values and the key can be of any data type - int, pair, double etc and similarly the value can also be anything

// Important thing to remember "maps stores unique key in sorted order"

void explainMap(){
    map<int, int>mpp;
    //  Here 1st int belongs to key and 2nd int belongs to value

    map<int, pair<int, int>>mpp;
    // Here key is integer and value is 2 integers

    map<pair<int, int>, int>mpp;
    // Here key is 2 integers and value is 1 integers


    // Assuming it to be the declaration for the next functions
    map<int, int>mpp; 
    mpp[1]=2; 
    // So internally it stores {1, 2}
    // Here internally on the key 1 it stores the value 2
   //  And if you want its cout you can simply print

   for (auto it : mpp){
    cout<< it.first <<" " << it.second;
}

// it.first will give the key that is 1 and
// it.second will give the value that is 2 in this case

    mpp.emplace({3, 1});
    // Here it stores the value 1 in the key 3

    mpp.insert({2, 4});
    // Here it stores the value 4 in the key 2

    // So for all the above functions the keys and values stored as below, remember it will be stored in sorted order of key:
    // [{1, 2} {2, 4} {3, 1}]

    // If we want to print all the above so we can do it using loop as below:

    for(auto it : mpp){
       cout<<it.first<<" "<<it.second<<endl;
    }

    // So it will print 1 2
                     // 2 4
                     // 3 1

    // Here it.first will be the first key and it.second will be the value, so likewise it will print the above pairs

    cout<<mpp[1]; - 2
    // It will give the value 2 which is stored in key 1

    cout<<mpp[5]; - 0
    // As the key 5 is not present in the above map so it will give null that is 0

    // If we want to access the itertor we can use find() as below:
    auto it = mpp.find(3);
    cout<<(*it).second;
    // So if you want to access that value you have to add * to get element and to get value you have to add (it).second; si here it will give the value 1 which is stored in the key 3
    
    auto it = mpp.find(5); 
    // As 5 is not present in the map so it points to mpp.end() that means after the map

    auto it = mpp.lower_bound(2); - 4
   //  It returns an iterator to the first element whose key is greater than or equal to the given key (>=).
   //  In this map, the first key ≥ 2 is exactly 2.
   //  Key 2 has value 4 so it will print 4

    auto it = mpp.upper_bound(3); - 0
   //  For upper_bound(3), it will return the first key greater than 3.
   //  But in this map as there’s no key greater than 3 — so it returns mpp.end().
   // These two are same as it is with other containers


    // Assuming the below to be the declaration for the next functions:

    map<pair<int, int>, int>mpp;
    mpp[{2, 3}] = 10;
    // Here [{2, 3}] is the key and 10 is the value stored
    // It will be stored in this format {{2, 3}, 10}


   // The other functions such as erase(), swap(), size(), empty() are same as others
   // It works in logarithmic ttime - log(n)


}