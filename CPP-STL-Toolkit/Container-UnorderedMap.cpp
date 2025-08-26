void explainUnorderedMap(){
     unordered_map<int, string> um;    // key: int, value: string
     um[1] = "Apple";
     um[2] = "Banana";
     um[3] = "Mango";
     

// Possible Output (order may vary):
// 3 => Mango
// 1 => Apple
// 2 => Grapes

// It will have unique keys but wont be sorted
// It works in constant time - O(1) and in the worst case it works on log(n) which happens once in a blue moon


}