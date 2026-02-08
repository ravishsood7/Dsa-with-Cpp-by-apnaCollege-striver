/* STANDARD TEMPLATE LIBRARY 
container 
iterator
algorithms
functuator

 1 -> Vector (implemented as dynamic array)
      size() -> number of elements in vector
      capacity() -> max elements a vector can contain
      push_back() -> add element in a vector
      pop_back() -> last element in vector
      emplace_back()
      at() [] vector.at(index)
      front() -> front element of vector
      back() -> last element of vector

      vector<int> arr(no of eelemnt, default value);

    all the above function works in O(1) while below will work in O(n)

    erase() -> arr.erase(arr.begin()), arr.erase(arr.begin()+ 2), arr.erase(start, end) end = last -1,
    It will change the size of the array vector and not the capacity
    insert() -> arr.insert(arr.begin+2,100)
    clear() -> arr.clear() clear all the vector
    empty() -> arr.empty -> return bool value

    Iterator:
    vec.begin()
    vec.end() = points to next garbage value to end of array

    //forward
    vector<int> :: iterator it;
    for(it =vec.begin();it!=vec.end();it++){
        cout<<*(it)<<endl;
    }
   
    //backward
    vector<int> :: reverse_iterator it;
    for(auto it = vec.rbegin(); it! = vec.rend();it++){
       cout<<*(it)<<endl;
    }


2 . List  (implemented as doubly linked list)
 no random access possible
list<int> i = {1,2,3};

i.push_back() : 
i.push_front() : 
i.emplace_back() :
i.emplace_front() :
i.pop_back() :
i.pop_front() : 
i.size() :
i.erase() :
i.clear() :
i. begin() : 
i.end() :
i.rbegin() :
i.rend() :
i.insert() :
i.front()
i.back() :

3. Deque : Double Ended Queue -> dynamic array  -> random access possible
Dequeue - > to pop element from the queue
deque <int> d = {1,2,3};

d.push_back() 
d.push_front()
d.emplace_back()
d.emplace_front() // in place objects create
d.pop_back()
d.pop_front()
d.size()
d.erase()




4. Pair

pair<int, int> p = {3,5};
pair<char,int> p = {'a',10};
p.first  -> 3
p.second -> 5

pair<int, pair<int, int>>
p.second.first

vector<pair<int,int> > arr ={{1,2},{2,3},{3,4}};
arr.push_back({6,6});
for(auto p: vec){
cout<<p.first <<" "<<p.second<<endl;
}


5 . Stack -> LAST IN FIRST OUT

stack<int> s;

push , emplace
top
pop
size
empty
swap - > s2.swap(s1)


Queue - > First in first out

queue <int> q;
push
emplace
front 
pop
size 
empty
swap


Priority  Queue -> max heap ,min heap -> complete binary tree
top is highest priority element in stack
#include<queue>

priority_queue <int> q;
priority_queue<int, vector<int>, greater<int>> q;

push, emplace
top
pop
size 
empty


------------------------------------------------
Map(key, value ) -> self balancing tree  o(log n)
#include <map>
<sort in form of ascending order
map<string, int>  m;
m[key] = value;

key = unique
value = may be duplicate


insert, emplace
count
erase
find
size
empty
erase



Multipmap
multimap<string, int> m; -> allow duplicate key 

unordered map
unordered_map <string, int> m; -> no duplicate values, unsorted and random data
o(1)


Set
unique value in sorted order

set<int> m;
insert, count ,erase
find, size ,empty, erase
multiset<int> m
unordered_set<int> m
.lower_bound

------------------------------------------------+
Algorithm

Sorting 
sort(ARR,ARR+N) asc
sort(arr,arr+n, greater<int>()) desc


reverse(vec.begin, vec.end())

next_permutation(v.begin(),v.end())

swap ->

min ->
 
max -> max_element(v.begin(), v.end())
       min_element()





*/
