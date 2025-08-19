void explainMultimap(){
    multimap<int, string> mm;   // key: int, value: string
    mm.insert({1, "Apple"});
    mm.insert({2, "Banana"});
    mm.insert({1, "Mango"});   // duplicate key allowed

    // Ouput will be sorted by key:
    // 1 => Apple
    // 1 => Mango
    // 2 => Banana

     
    // Everything is same as map
    // The difference is you can store multiple keys but it will be same in sorted order
    // Like you can store {1, 2} {1, 4} {1, 9}

}