// vector
#include <vector>
vector<int> v = {1,2,3};
v.push_back(4);
v.pop_back();
v.size();
v.empty();
v.insert(v.end(), v2.begin(), v2.end());
// slicing an vector
std::vector<int> sliced(original.begin() + start, original.begin() + end);
result.erase(result.begin()); // just take out the first one
result.pop_back(); // remove the last element in c++ 
// when want to mix type like in python
#include <variant>
std::vector<std::variant<int, std::string>> tokens;


// map
#include <unordered_map>
unordered_map<string, int> map;
map["apple"]=3; // same with access
if(map.find("banana") != map.end()){ // or if(map.count("banana") {}
  // found this key!
}
map.erase("apple");
for(const auto&[key, value]: map){}
// map in python {"name": "Alice", "age": 30, "city": "New York"}
std::unordered_map<int, std::string> myMap = { {1, "apple"},{2, "banana"}}

// Set
std::set<int> s(vec.begin(), vec.end());
s.insert(3);
s.erase(3);
if(s.find(3)!=s.end())
if(s.count(3){}
// Heap
#include <queue>
priority_queue<int> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
maxHeap.push(10);
maxHeap.top(); // peek
maxHeap.pop(); // actually removes it, returns nothing!!
// Make the heap from vector, one has to:
for(int num : v) {
  maxHeap.push(num);
}
// Note: heap does not have iterators like begin() or end()

// string manipulation
string num_string = to_string(123);
int val = stoi("1234");
string cstring = string(1, 'a');
str.substr(3); // [3, )
str.substr(start, substring_length);
str.append("abc");
char s = str[2];

// Tree Node 
// type checking 
static_cast<double>(a)

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
// doing math on a list: min, max, sum
// summing using custom value
#include <numeric>  // for std::accumulate
pair<int, int> total = accumulate(
        pairs.begin(), pairs.end(),
        pair<int, int>{0, 0},  // initial value
        [](const pair<int, int>& acc, const pair<int, int>& p) {
            return make_pair(acc.first + p.first, acc.second + p.second);
        }
    );
int total = accumulate(nums.begin(), nums.end(), 0);
// min and max
int min_val = *min_element(nums.begin(), nums.end());
int max_val = *max_element(nums.begin(), nums.end());

// deque for stack, queue
#include <deque>
deque<int> d;
d.push_back(1);
d.push_front(2);
d.pop_back();
d.pop_front();
d.front();
d.back()

// ============== c++ type================
// decltype: compile time that inspects the type of an expression and gives you the exact type
auto cmp = [](int a, int b) { return a > b; };
std::priority_queue<int, std::vector<int>, decltype(cmp)> pq(cmp);

// ========= c++ pointers ======================

