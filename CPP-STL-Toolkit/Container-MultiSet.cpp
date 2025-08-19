// MULTI SET

// It is only sorted and not unique in nature as set because it saves multiple occurence of a similar element

void explainMultiSet(){
     multiset<int>ms;
     ms.insert(1); - {1}
     ms.insert(1); - {1, 1}
     ms.insert(1); - {1, 1, 1}
    //  It will keep on inserting the same element as many time you want to insert it

    ms.erase(1); - {}
    // It erases all the occurence of the element 1 and will print nothing because the set became empty by then

    int cnt = ms.count(1);
    cout<<cnt; - 3
    // It will give you a count of all the occurence of the element 1 present in the multiset, here it will give 3

    ms.erase(ms.find(1));
    // So it will erase only one occurence of the element 1 present in the iterator/address which is provided above

    ms.erase(ms.find(1), next(ms.find(1), 2));
    // Here by the above function it will erase 2 occurence of the element 1 starting from the address 
    // ms.find(1) and ending till ms.find(1)+2

    ms.erase(ms.find(1), ms.find(3));
    // By this way also we can erase by giving start and end address assuming the set here to be 
    // {1, 2, 3} and by the above function it will erase 1 and 2 and will only return 3 as it startted with 1 but will end just before 3

    // Rest all the other funcions are same as set

}