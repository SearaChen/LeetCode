// vector
#include <vector>
vector<int> v = {1,2,3};
v.push_back(4);
v.pop_back();
v.size();
v.empty();

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
