// vector
#include <vector>
vector<int> v = {1,2,3};
v.push_back(4);
v.pop_back();
v.size();
v.empty();

// map
#include <unordered_map>
unordered_map<string, int> map;
map["apple"]=3; // same with access
if(map.find("banana") != map.end()){ // or if(map.count("banana") {}
  // found this key!
}
map.erase("apple");
for(const auto&[key, value]: map){}

// Set

// Heap

// string manipulation
string num_string = to_string("123");
int val = stoi("1234");
string cstring = string(1, 'a');
str.substr(3); // [3, )
str.substr(start, substring_length);
str.append("abc")

// Tree Node 
// type checking 

// max values
INT_MAX
INT_MIN

// list .. only use lsist when you want to do many inserts, don't need random access
#include <list>
l.push_back(0);
l.push_front(1);
// insert at position
auto it = l.begin()
advance(it, 2);
l.insert(it, 99);  
l.insert()
  
// sorting a list
#include <vector>
#include <algorithm>
#include <functional>
sort(v.begin(), v.end());
sort(v.begin(), v.end(), greater<int>());
sort(v.begin(), v.end(), [](int a, int b) {
  return a > b;
});

// deque for stack, queue
#include <deque>
deque<int> d;
d.push_back(1);
d.push_front(2);
d.pop_back();
d.pop_front();
d.front();
d.back()
