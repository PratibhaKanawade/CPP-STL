# Standard Template Library (STL) - Interview Questions & Answers

---

## 1.What is STL?
### Answer:
### Definition:
STL is a collection of ready-made templates in C++ that provides containers, algorithms, iterators, and other useful components for solving programming problems efficiently.

#### Why do we use STL?
Suppose you want to store 5 numbers.

Without STL:
```cpp
int arr[5];
```

But if you want to dynamically add/remove elements and use useful built-in operations, vector is much easier:
```cpp
vector<int> v;

v.push_back(10);
v.push_back(20);
v.push_back(30);
```

STL gives us ready-made functionality.

---

## 2.Main Components of STL
### Answer:
```cpp
                STL
                 |
       ┌─────────┼─────────┐
       ↓         ↓         ↓
  Containers  Iterators  Algorithms
       |         |
Data Storage  Function Objects
```

### i) Containers
A container is used to store data.

#### Real-life example:
think of a container as a box.
```cpp
Box
 ↓
[10] [20] [30] [40]
```
The box stores your data.

### Types of Containers

1. Sequence Containers
Store elements in a sequence.

```cpp
vector
list
deque
array
forward_list
```
2. Associative Containers
Store data according to ordering/key relationships.

```cpp
set
multiset
map
multimap
```

3. Unordered Containers
Use hashing and do not maintain sorted order.
```cpp
unordered_set
unordered_multiset
unordered_map
unordered_multimap
```
4. Container Adapters
Provide restricted interfaces over underlying containers.
```cpp
stack
queue
priority_queue
``` 

#### For example:
```cpp
vector<int> numbers = {10, 20, 30, 40};
```
Here, vector is a container.

---

### ii) Algorithms

Algorithms are ready-made functions that perform operations on data such as sorting, searching, counting, and reversing elements in containers.

#### Header Files
```cpp
#include <algorithm>
#include <numeric>   // for accumulate()
```

For example:
```cpp
Sorting
sort(v.begin(), v.end());

Reversing
reverse(v.begin(), v.end());

Searching
find(v.begin(), v.end(), 20);

Counting
count(v.begin(), v.end(), 20);
```
This saves us from writing these operations manually.

For example:
```cpp
sort(v.begin(), v.end());
```
This sorts the vector.

Suppose:
```cpp
Before:
50 10 40 20 30

After sort:
10 20 30 40 50
```

### Important STL Algorithms
```cpp
| Function | Description |
| -------- | ----------- |
| `sort()` | Sorts elements in ascending order by default |
| `reverse()` | Reverses the order of elements |
| `find()` | Searches for a particular element |
| `count()` | Counts occurrences of an element |
| `min_element()` | Returns an iterator to the smallest element |
| `max_element()` | Returns an iterator to the largest element |
| `binary_search()` | Checks whether an element exists in a sorted range |
| `lower_bound()` | Finds the first element greater than or equal to a value in a sorted range |
| `upper_bound()` | Finds the first element strictly greater than a value in a sorted range |
| `accumulate()` | Calculates the sum of elements by default |
```

---

### Time Complexity
```cpp
Operation                           Average / typical complexity  

sort()                                   O(n log n)

reverse()                                O(n)

find()                                   O(n)

count()                                  O(n)

min_element()                            O(n)

max_element()                            O(n)

binary_search()                          O(log n) comparisons

lower_bound()                            O(log n) comparisons

upper_bound()                            O(log n) comparisons

accumulate()                             O(n)
```

---


### iii) Iterators

An iterator is an object used to access and traverse elements of STL containers such as vector, list, set, and map.

### Header File
```cpp
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
```

Include the relevant container header, such as <vector>, <list>, or <map>, depending on the container you use.

### Syntax:

```cpp
container_type::iterator it;
```

##### Example:
```cpp
vector<int>::iterator it;
```

- You can also use auto:
```cpp
auto it = v.begin();
```

- For example:
```cpp
vector<int> v = {10, 20, 30};

for(auto it = v.begin(); it != v.end(); it++)
{
    cout << *it << " ";
}
```
Output:
```cpp
10 20 30
```
Think of it like a pointer that moves through a container.

### Important Iterator Functions

- begin() = Returns an iterator to the first element

- end() = Returns an iterator to the position after the last element

- rbegin() = Returns a reverse iterator to the last element

- rend() = Returns a reverse iterator to the position before the first element

- cbegin() = Returns a constant iterator to the first element

- cend() = Returns a constant iterator to the position after the last element

---

### Iterator Types

```cpp
Iterator Type                  Description

Input Iterator                 Reads elements while moving forward

Output Iterator                Writes elements while moving forward

Forward Iterator               Moves forward through elements

Bidirectional Iterator         Moves forward and backward

Random Access Iterator         Supports jumping directly to positions
```

##### Examples:

- forward_list → forward iterator

- list, map, set → bidirectional iterators

- vector, deque, array → random-access iterators

---

### Time Complexity
```cpp
Operation                                             Complexity

begin()                                                   O(1)

end()                                                     O(1)

rbegin()                                                  O(1)

rend()                                                    O(1)

Iterator increment ++it                                   O(1)

advance(it, n) with forward/bidirectional iterator        O(n)

advance(it, n) with random-access iterator                O(1)

```

---

## 3. Explain Function Objects in STL
### Answer:
A function object/functor is an object that behaves like a function by overloading:
```cpp
operator()
```

### Header File
```cpp
#include <iostream>
#include <functional>
using namespace std;
```

### Syntax:
```cpp
class MyClass {
public:
    return_type operator()(parameters) {
        // code
    }
};
```
Then:
```cpp
MyClass obj;
obj(arguments);
```
#### Function vs Function Object
- Normal Function
```cpp
int add(int a, int b) {
    return a + b;
}
cout << add(10, 20);
```

- Function Object
```cpp
class Add {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

Add obj;

cout << obj(10, 20);
```
Both can produce : 30

---

## 4. Explain Vector in detail
### Answer:
A vector stores multiple elements like an array, but its size can grow or shrink dynamically.

- Array vs Vector
```cpp
Array =Fixed size
vector = Dynamic size
```

For example:
```cpp
int arr[5];
```
The size is fixed at 5.

But:
```cpp
vector<int> v;
```
can grow as we add elements.

### Header File

To use vector:
```cpp
#include <vector>
```

### Syntax:
```cpp
vector<data_type> vector_name;
```

### Creating and Initializing a Vector
- Method 1: Empty vector
```cpp
vector<int> v;
```
Initially:```cpp [] ```


- Method 2: Direct initialization
```cpp
vector<int> v = {10, 20, 30, 40};
```
Vector:```cpp 10 20 30 40 ```


- Method 3: Size
```cpp
vector<int> v(5);
```
Creates 5 integers initialized to 0: ```cpp 0 0 0 0 0 ```


- Method 4: Same value
```cpp
vector<int> v(5, 10);
```
Output:```cpp 10 10 10 10 10 ```

---

### Range-Based for Loop

```cpp
for(int x : v)
{
    cout << x << " ";
}
```
Here x gets each element one by one.

---

### push_back()
It adds an element at the end.

#### Syntax:
```cpp
v.push_back(10);
```
#### Example:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
```
#### OUTPUT:
```cpp
10 20 30
```
#### Explanation:
How it works

Initially:```cpp [] ```

After:
```cpp
v.push_back(10);
[10]

v.push_back(20);
[10, 20]

v.push_back(30);
[10, 20, 30]
```

--- 

### Accessing Elements
Suppose:
```cpp
vector<int> v = {10, 20, 30, 40};
```

Index positions are:
```cpp
Value:   10   20   30   40
Index:    0    1    2    3
```

cout << v[0];
```cpp
Output:10
```


cout << v[2];
```cpp
Output:30
```

---

### at()
We can also access elements using:

v.at(2);

Example:
```cpp
cout << v.at(2);
```
Output:30

---

#### [ ] vs at()
```cpp
| `v[index]`                                 | `v.at(index)`                                 |
| ------------------------------------------ | --------------------------------------------- |
| Direct access                              | Checked access                                |
| Does not perform bounds checking           | Performs bounds checking                      |
| Invalid index can cause undefined behavior | Throws an exception for an out-of-range index |

```
 - remember:
[] = normal access
at() = safer checked access

---

### size()

size() tells us how many elements are currently present.

```cpp
vector<int> v = {10, 20, 30, 40};

cout << v.size();
```
Output:4

Example:
```cpp
vector<int> v = {10, 20, 30, 40, 50};

for(int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
```

Output:10 20 30 40 50

---

### empty()
empty() checks whether the vector contains zero elements.

```cpp
vector<int> v;

if(v.empty())
{
    cout << "Vector is empty";
}
```

Output:Vector is empty

If vector contains elements, empty() returns false.

---

### front() and back()

Suppose:
```cpp
vector<int> v = {10, 20, 30, 40};
```

- front() : Returns the first element
```cpp
cout << v.front();
```
Output:10



-  back() : Returns the last element
```cpp
cout << v.back();
```
Output:40

- Remember:
```cpp
front() → first element
back()  → last element
```
---

### pop_back()
pop_back() removes the last element.

```cpp
vector<int> v = {10, 20, 30};

v.pop_back();
```
Output:10 20

---

### insert()
insert() adds an element at a particular position.

Example:
```cpp
vector<int> v = {10, 20, 40};

v.insert(v.begin() + 2, 30);
```
Now:10 20 30 40

Explanation:
```cpp
Index:   0   1   2   3
         ↓   ↓   ↓   ↓
Before: 10  20  40

Insert 30 at index 2

After:  10  20  30  40
```

---

### clear()
clear() removes all elements.
```cpp
vector<int> v = {10, 20, 30};

v.clear();
````
Now:[] 


You can check:
```cpp
cout << v.size();
```
Output:0

---

### size() vs capacity() 

-  size()
Number of elements currently stored.

- capacity()
Number of elements the vector can currently hold without necessarily allocating new storage.

Example:
```cpp
vector<int> v;

v.push_back(10);
v.push_back(20);
v.push_back(30);

cout << "Size: " << v.size() << endl;
cout << "Capacity: " << v.capacity() << endl;
```
The size will be 3, but the capacity may be greater than 3.

---

### reserve( ) vs resize( )

- reserve( )
Reserves memory capacity.
```cpp
vector<int> v;

v.reserve(100);
```
This increases capacity to accommodate at least 100 elements, but does not create 100 elements.

So:
v.size() is still: 0


- resize( )
Actually changes the number of elements.
```cpp
vector<int> v;

v.resize(5);
```
Now the vector has 5 elements.

For int, they are value-initialized to 0: 0 0 0 0 0


- Remember:
```cpp
reserve() → capacity
resize() → size
```

---

## 5.Explain pair in C++
### Answer:
- A pair is an STL utility that stores two values together.

- The two values can be of:
```cpp
Same data type
Different data types
```

 #### Example:
 ```cpp
pair<int, string>
```

#### Real-Life Example

Suppose you want to store:
```cpp
Student Roll Number + Student Name
```

Instead of creating two separate variables we can use pair
```cpp
pair<int, string> student = {21, "Pratibha"};
```

#### Header File

You can also commonly use:
```cpp
#include <utility>
```

for competitive programming:
```cpp
#include <bits/stdc++.h>
```

### Syntax:
```cpp
pair<data_type1, data_type2> pair_name;
```

### Creating a Pair
- Method 1: Direct initialization
```cpp
pair<int, string> p = {101, "Pratibha"};
```

- Method 2: make_pair()
```cpp
pair<int, string> p = make_pair(101, "Pratibha");
```
Both create the same type of pair.

### Accessing Pair Elements
A pair has two members:
```cpp
p.first
p.second
```
### Changing Pair Values
Pair members can be modified.

```cpp
pair<int, string> p = {101, "Pratibha"};

p.first = 202;
p.second = "Rahul";

cout << p.first << " ";
cout << p.second;
```
Output:
202 Rahul

### Pair with Vector
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, string>> students;

    students.push_back({101, "Pratibha"});
    students.push_back({102, "Asha"});
    students.push_back({103, "Sneha"});

    for(auto p : students)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
```
OUTPUT:
```cpp
101 Pratibha
102 Asha
103 Sneha
```

### Nested Pair
A pair can contain another pair.

```cpp
pair<int, pair<int, int>> p = {1, {10, 20}};
```

- Structure:
```cpp
p
├── first  = 1
└── second
    ├── first  = 10
    └── second = 20
```

- Access:
```cpp
cout << p.first << endl;
cout << p.second.first << endl;
cout << p.second.second << endl;
```

- Output:
```cpp
1
10
20
```

### Pair Comparison
Pairs can be compared directly.

For example:
```cpp
pair<int, int> p1 = {10, 20};
pair<int, int> p2 = {10, 30};
cout << (p1 < p2)<<endl;

pair<string,int>pk={"Pratibha",21};
pair<string,int>pk2={"Pratibha",21};
cout<<(pk==pk2)<<endl>>;

pair<int, int> count = {10, 20};
pair<int, int> count2 = {10, 30};

cout << (count > count2)<<endl>>;

```
Output:
```cpp
1
1
0
```

### Pair with sort()
```cpp
vector<pair<int, string>> v = {
    {30, "C"},
    {10, "D"},
    {20, "B"}
};

sort(v.begin(), v.end());
```
Output:
```cpp
10 A
20 D
30 C
```
Explanation:
By default, pairs are sorted by:
```cpp
first → then second 
```

---

## 6. Pair vs Vector
```cpp
| Pair                          | Vector                 |
| ----------------------------- | ---------------------- |
| Stores exactly 2 values       | Stores multiple values |
| `first`, `second`             | Index-based access     |
| `pair<int,string>`            | `vector<int>`          |
| Useful for related two values | Useful for collections |

```
---

## 7. Explain array in STL
### Answer:
### Defination:
array is an STL container that stores a fixed number of elements of the same data type.

It is similar to a normal C++ array, but STL array provides useful functions like:

size() , front() , back() , at() , fill() , begin() , end() , empty()

### Header File
```cpp
#include <array>
```

### Syntax:
```cpp
array<data_type, size> array_name;
```

### Initialization

- Method 1: Direct initialization
```cpp
array<int, 5> arr = {10, 20, 30, 40, 50};
```


- Method 2: Partial initialization
```cpp
array<int, 5> arr = {10, 20, 30};
```
Remaining elements become 0.
```cpp
10 20 30 0 0
```


- Method 3: Empty array
```cpp
array<int, 5> arr;
```

Don't assume its elements are initialized. If you want zero initialization, use:

```cpp
array<int, 5> arr{};
```
Result: 0 0 0 0 0

---  


### Accessing Elements

You can access elements using [].
```cpp
array<int, 5> arr = {10, 20, 30, 40, 50};

cout << arr[0];
cout << arr[2];
```

Output:
```cpp
10
30
```
---


### at()
at() also accesses an element.
```cpp
cout << arr.at(2);
```
---


### size()
size() tells us the number of elements.
```cpp
array<int, 5> arr = {10,20,30,40,50};

cout << arr.size();
```
---


### front()
front() gives the first element.
```cpp
cout << arr.front();
```

It is equivalent to: arr[0]
---


### back()
back() gives the last element.
```cpp
cout << arr.back();
```
It is equivalent to:

```cpp
arr[arr.size() - 1]
```
---


### fill()
fill() puts the same value into all elements.

```cpp
array<int, 5> arr;

arr.fill(100);
```

Now: 100 100 100 100 100 
---


### Iterating through array
Using range-based for loop
```cpp
array<int, 5> arr = {10,20,30,40,50};

for(int x : arr)
{
    cout << x << " ";
}
```

Output: 10 20 30 40 50
---


### Using Iterator
```cpp
 array<int, 5> arr = {10,20,30,40,50};

for(auto it = arr.begin(); it != arr.end(); it++)
{
    cout << *it << " ";
}
```

Output: 10 20 30 40 50

---

## 8.Explain what is list
### Answer:
- list is an STL container that stores elements in a doubly linked list.

- Unlike vector, elements in a list are not stored in continuous memory.

- list is an STL container that allows fast insertion and deletion from anywhere in the list.

Example:
```cpp
10 ⇄ 20 ⇄ 30 ⇄ 40 ⇄ 50
```
Each element is connected to the previous and next element.

### Header File
```cpp
#include <list>
```
### Creating a List
- Empty list
```cpp
list<int> l;
```

- Initialize
```cpp
list<int> l = {10, 20, 30, 40, 50};
```

- List of strings
```cpp
list<string> names = {"Pratibha", "Rahul", "Amit"};
```

---

### push_back()
Adds an element at the end.
```cpp
list<int> l = {10, 20, 30};

l.push_back(40);
```

---

### push_front()
Adds an element at the beginning.
```cpp
l.push_front(5);
```

---

### pop_back()
Removes the last element.
```cpp
l.pop_back();
```

---

### pop_front()
Removes the first element.
```cpp
l.pop_front();
```

---

### front() and back()
- First element
```cpp
cout << l.front();
```

- Last element
```cpp
cout << l.back();
```

---

### size()
Returns the number of elements.
```cpp
cout << l.size();
```

--- 

### empty()
Checks whether the list is empty.
```cpp
if(l.empty())
{
    cout << "List is empty";
}
else
{
    cout << "List is not empty";
}
```
- Returns:
```cpp
true → empty
false → not empty
```

---

### Traversing a List
Range-based for loop
```cpp
list<int> l = {10, 20, 30, 40, 50};

for(int x : l)
{
    cout << x << " ";
}
```

---

### Iterator with List
```cpp
list<int> l = {10, 20, 30};

for(auto it = l.begin(); it != l.end(); it++)
{
    cout << *it << " ";
}
```

---

### insert()
insert() adds an element before a specified position.

##### Example:
```cpp
list<int> l = {10, 20, 40};

auto it = l.begin();
advance(it, 2);

l.insert(it, 30);
```

##### Output:
```cpp
10 20 30 40
```

- Why advance()?
A list iterator cannot directly jump using: it + 2

Unlike a vector iterator, a list iterator is not a random-access iterator.

So we use: advance(it, 2);

---

### erase()
Removes an element at a particular iterator position.
```cpp
list<int> l = {10, 20, 30, 40};

auto it = l.begin();
advance(it, 2);

l.erase(it);
```

##### OUTPUT:
```cpp
10 20 40
```

---

### remove()
It removes all elements having a particular value.

```cpp
list<int> l = {10, 20, 30, 20, 40, 20};

l.remove(20);
```

##### OUTPUT:
```cpp
10 30 40
```

---

### reverse()
Reverses the list.
```cpp
list<int> l = {10, 20, 30, 40};

l.reverse();
```

##### OUTPUT:
```cpp
40 30 20 10
```

---

### sort()
A list has its own sort() function.
```cpp
list<int> l = {40, 10, 30, 20};

l.sort();
```

##### OUTPUT:
```cpp
10 20 30 40
```
- Important:
Why can't we use sort(l.begin(), l.end())?
Answer:
```cpp
std::sort() requires random-access iterators. A list provides bidirectional iterators.

Use:
l.sort();
```

---

### unique()
unique() removes consecutive duplicate elements.

```cpp
list<int> l = {10, 20, 20, 30, 30, 30, 40};

l.unique();
```
##### OUTPUT:
```cpp
10 20 30 40
```

---

## 9. Explain what is forward_list?
### Answer:
- forward_list is an STL container that implements a singly linked list.

- Each node stores:
```cpp
[data | next]
```
- Example:
```cpp
10 → 20 → 30 → 40 → NULL
```cpp
- Unlike list, it only moves forward.
```

### Header File
```cpp
#include <forward_list>
```

### Creating a forward_list
- Empty
```cpp
forward_list<int> fl;
```
- With values
```cpp
forward_list<int> fl = {10, 20, 30, 40};
```

---

### push_front()
forward_list supports adding elements at the beginning.
```cpp
forward_list<int> fl = {20, 30, 40};

fl.push_front(10);
```

---

### pop_front()
Removes the first element.
```cpp
fl.pop_front();
```

---

### Traversing forward_list
Use a range-based loop:
```cpp
forward_list<int> fl = {10, 20, 30, 40};

for(int x : fl)
{
    cout << x << " ";
}
```

---

### Using Iterators
```cpp
for(auto it = fl.begin(); it != fl.end(); it++)
{
    cout << *it << " ";
}
```
##### Important:

- A forward_list iterator can move: it++

- but not backward: it--  

--- 

### No size() 
- This is an important difference.

- Unlike vector and list, forward_list does not provide:
```cpp
fl.size();   
```

- If you need the number of elements, you can use:
```cpp
cout << distance(fl.begin(), fl.end());
```

---

### empty()
You can check whether it is empty.
```cpp
if(fl.empty())
{
    cout << "Empty";
}
else
{
    cout << "Not empty";
}
```

---

### front()
Returns the first element.
```cpp
cout << fl.front();
```

--- 

### insert_after()
It inserts a new element after a particular position.

##### Example:
```cpp
forward_list<int> fl = {10, 20, 40};

auto it = fl.begin();

fl.insert_after(it, 30);
```

##### Output:
```cpp
10 → 30 → 20 → 40
```

##### Note:
it was pointing to 10, so 30 was inserted after 10.

---

### erase_after()
Removes the element after a particular iterator.

##### Example:
```cpp
forward_list<int> fl = {10, 20, 30, 40};

auto it = fl.begin();

fl.erase_after(it);
```

##### OUTPUT:
```cpp
10 → 30 → 40
```

##### Note:
it points to 10.

So the element after 10, which is 20, gets removed.

---

### Why insert_after() instead of insert()?
- Because a singly linked list only maintains a link to the next node.
```cpp
10 → 20 → 30
```

- If you know the node 10, it is easy to change:
```cpp
10 → 30 → 20
```
But there is no previous pointer.


- Therefore forward_list provides:
```cpp
insert_after()
erase_after()
```

---

### remove()
Removes all elements having a specific value.
```cpp
forward_list<int> fl = {10, 20, 30, 20, 40};

fl.remove(20);
```

##### OUTPUT:
```cpp
10 → 30 → 40
```

--- 

### remove_if()
Removes elements according to a condition.

##### Example: remove all even numbers.
```cpp
forward_list<int> fl = {10, 15, 20, 25, 30};

fl.remove_if([](int x)
{
    return x % 2 == 0;
});
```

##### OUTPUT:
```cpp
15 25
```

---

### sort()
You can sort a forward_list using its own sort().
```cpp
forward_list<int> fl = {40, 10, 30, 20};

fl.sort();
```

---

### reverse()
Reverse the elements:
```cpp
fl.reverse();
```

--- 

### unique()
Removes consecutive duplicate elements.
```cpp
forward_list<int> fl = {10, 20, 20, 30, 30, 40};

fl.unique();
```
##### OUTPUT:
```cpp
10 → 20 → 30 → 40
```

---

### clear()
Removes all elements.
```cpp
fl.clear();
```

---

## 10.Explain deque in C++ STL.
### Answer:
- deque stands for: Double Ended Queue

- It allows us to insert and delete elements from both the front and the back.

- Example:
```cpp
Front                         Back
  ↓                             ↓
10   20   30   40   50
```
- You can add:
```cpp
push_front() → 5
push_back()  → 60
```

### Header File
```cpp
#include <deque>
```

### Creating a deque
- Empty deque
```cpp
deque<int> dq;
```

- Initialize
```cpp
deque<int> dq = {10, 20, 30, 40};
```

- Create with 5 elements
```cpp
deque<int> dq(5);
```
This creates: 0 0 0 0 0

- Five elements with value 10
```cpp
deque<int> dq(5, 10);
```
Result: 10 10 10 10 10

---

### push_back()
Adds an element at the back.
```cpp
deque<int> dq = {10, 20, 30};

dq.push_back(40);
```

---

### push_front()
Adds an element at the front.
```cpp
dq.push_front(5);
```

---

### pop_back()
Removes the last element.
```cpp
dq.pop_back();
```

---

### pop_front()
Removes the first element.
```cpp
dq.pop_front();
```

---

### front() and back()
- First element
```cpp
cout << dq.front();
```

- Last element
```cpp
cout << dq.back();
```

---

### Accessing Elements
Unlike list and forward_list, deque supports random access.

You can use:
```cpp
dq[2]

or:

dq.at(2)
```

--- 

### size()
Returns the number of elements.

```cpp
dq.size()
```

---

### empty()
Checks whether the deque is empty.
```cpp
if(dq.empty())
{
    cout << "Deque is empty";
}
else
{
    cout << "Deque is not empty";
}
```

--- 

### Traversing a Deque
Range-based loop
```cpp
deque<int> dq = {10, 20, 30, 40};

for(int x : dq)
{
    cout << x << " ";
}
```

---

### Iterator
```cpp
for(auto it = dq.begin(); it != dq.end(); it++)
{
    cout << *it << " ";
}
``` 

--- 

### insert()
You can insert an element at a particular position.
```cpp
deque<int> dq = {10, 20, 40};

auto it = dq.begin() + 2;

dq.insert(it, 30);
```
##### OUTPUT:
```cpp
10 20 30 40
```

--- 

### erase()
Removes an element from a particular position.
```cpp
deque<int> dq = {10, 20, 30, 40};

dq.erase(dq.begin() + 2);
```

##### OUTPUT:
```cpp
10 20 40
```

---

### clear()
Removes all elements.
```cpp
dq.clear();
```

---

## 11.Explain stack in C++ STL
### Answer:
- A stack is a container that follows:
LIFO — Last In, First Out

#### Real-life example:

Imagine a stack of plates:
```cpp
      ┌───────┐
      │ Plate │ ← Last added
      ├───────┤
      │ Plate │
      ├───────┤
      │ Plate │
      └───────┘
```
You remove the top plate first.

### Header File
```cpp
#include <stack>
```

### Creating a Stack
```cpp
stack<int> s;

stack<string> names;

```
This creates an empty integer and string stack.

---

### push()
push() adds an element to the top of the stack.
```cpp
stack<int> s;

s.push(10);
s.push(20);
s.push(30);
```
Stack:
```cpp
TOP
 ↓
30
20
10
```

---

### top()
top() returns the element at the top.
```cpp
cout << s.top();
```

---

### pop()
pop() removes the top element.
```cpp
s.pop();
```
---

### empty()
Checks whether the stack is empty.
```cpp
if(s.empty())
{
    cout << "Stack is empty";
}
else
{
    cout << "Stack is not empty";
}
```

- Returns:
```cpp
true → empty
false → not empty
```

---

### size()
Returns the number of elements.
```cpp
cout << s.size();
```

--- 

### How to Print All Stack Elements?

A stack does not provide iterators like vector.

So we normally use:
```cpp
stack<int> s;

s.push(10);
s.push(20);
s.push(30);

while(!s.empty())
{
    cout << s.top() << " ";
    s.pop();
}
```
##### OUTPUT:
30 20 10

---

### stack Does Not Support Random Access

- You cannot do:
```cpp
s[2];       // Wrong 
s.at(2);    // Wrong 
```

- You can access only the top element.
```cpp
s.top();    // Correct
```
This is called a container adaptor.

---

### stack is a Container Adaptor 
stack is not a completely independent data structure.

It provides a restricted interface over another container.

- By default, stack uses:

```cpp
deque
```
internally.

- Conceptually:
```cpp
stack
  ↓
deque
  ↓
elements
```
You can also use another suitable underlying container, such as vector or list.

- Example:
```cpp
stack<int, vector<int>> s;
```
Now the stack uses vector internally.

---

### Stack Using Vector
```cpp
stack<int, vector<int>> s;

s.push(10);
s.push(20);
s.push(30);

cout << s.top();
```

##### Output:
30

--- 

### Time Complexity
```cpp
| Operation | Complexity |
| --------- | ---------: |
| `push()`  |       O(1) |
| `pop()`   |       O(1) |
| `top()`   |       O(1) |
| `empty()` |       O(1) |
| `size()`  |       O(1) |

```

---

## 12.Explain queue in C++ STL
### Answer:
- A queue follows:
FIFO — First In, First Out

The element that enters first is removed first.

### Real-life example 

 People standing in a line:
```cpp
FRONT                         BACK
  ↓                             ↓
10 → 20 → 30 → 40 → 50
```
Person 10 came first, so 10 leaves first.

### Header File
```cpp
#include <queue>
```

### Creating a Queue
```cpp
queue<int> q;

queue<string> q;
```

---

### push()
push() adds an element at the back of the queue.
```cpp
queue<int> q;

q.push(10);
q.push(20);
q.push(30);
```

Queue:
```cpp
FRONT              BACK
 ↓                   ↓
10 → 20 → 30

```

--- 

### front()
front() gives the element at the front.
```cpp
cout << q.front();
```
--- 

### back()
back() gives the element at the back.
```cpp
cout << q.back();
```

--- 

### pop()
pop() removes the element from the front.
```cpp
q.pop();
```

---

### empty()
Checks whether the queue is empty.
```cpp
if(q.empty())
{
    cout << "Queue is empty";
}
else
{
    cout << "Queue is not empty";
}
```

---

### size()
Returns the number of elements.
```cpp
cout << q.size();
```

---

### Printing All Queue Elements
A queue does not provide normal iterators for traversal.
```cpp
while(!q.empty())
{
    cout << q.front() << " ";
    q.pop();
}
 ```

 ---

 ### Queue Does Not Support Random Access
- You cannot do:
```cpp
q[2];       // Wrong
q.at(2);    // Wrong
```

- You can access only:
```cpp
q.front();
q.back();
```

--- 

### Queue is a Container Adaptor
Like stack, queue is a container adaptor.

- By default, it uses:
```cpp
deque
```
internally.

- Conceptually:
```cpp
queue
  ↓
deque
  ↓
elements
```

- You normally write:
```cpp
queue<int> q;
```

---

### Queue Using List
You can specify another suitable underlying container:

```cpp
queue<int, list<int>> q;

q.push(10);
q.push(20);
q.push(30);

cout << q.front();
```

##### OUTPUT:
```cpp
10
```

---

## 13.Difference between Queue vs Stack
### Answer:
```cpp
| Stack               | Queue                   |
| ------------------- | ----------------------- |
| LIFO                | FIFO                    |
| Last In First Out   | First In First Out      |
| `push()`            | `push()`                |
| `pop()` removes top | `pop()` removes front   |
| `top()`             | `front()`               |
| Example: plates     | Example: people in line |

```

---

## 14.Difference between Queue vs Deque
### Answer:
```cpp
 | Queue             | Deque                          |
| ----------------- | ------------------------------ |
| FIFO interface    | Double-ended                   |
| Insert at back    | Insert front/back              |
| Remove from front | Remove front/back              |
| `push()`          | `push_front()` / `push_back()` |
| `pop()`           | `pop_front()` / `pop_back()`   |
| No random access  | Random access supported        |
```

---

## 15.Explain priority_queue in C++ STL
### Answer:
A priority queue is a special type of queue where the element with the highest priority comes out first.

- In a priority queue:
```cpp
Highest Priority → First Out
```

By default in C++, the largest element has the highest priority.

### Real-Life Example
Imagine a hospital emergency room :
```cpp
Patient	Priority
A	2
B	5
C	1
D	10
```
The patient with priority 10 will be treated first.

Similarly:
```cpp
10
5
2
1
```
The largest element comes first.

### Header File
```cpp
#include <queue>
```
### Syntax
```cpp
priority_queue<int> pq;
```

---

### push()
Used to insert an element.
```cpp
pq.push(10);
pq.push(50);
pq.push(20);
```
Priority queue automatically arranges its internal structure.

--- 

### top()
Returns the highest-priority element.
```cpp
cout << pq.top();
```

---

### pop()
Removes the highest-priority element.
```cpp
pq.pop();
```

---

### Maximum Heap
The default priority_queue works like a max heap.

```cpp
priority_queue<int> pq;
```

Means: Largest element stays at the top.

Example:
```cpp
Input:
10 5 30 20 40

Output:
40 30 20 10 5
```

---

### Minimum Priority Queue
Sometimes we want the smallest element first.

Then we use:
```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

---

### Time Complexity
```cpp
| Operation | Complexity |
| --------- | ---------: |
| `push()`  |   O(log n) |
| `pop()`   |   O(log n) |
| `top()`   |       O(1) |
| `empty()` |       O(1) |
| `size()`  |       O(1) |
```
- Why is push()/pop() O(log n)?

Because priority queue is generally implemented using a heap.

---

## 16.Explain set in C++ STL
### Answer:
A set is an STL container that:

- stores unique elements
- automatically keeps elements in sorted order
- does not allow duplicates
- provides efficient searching, insertion and deletion

### Real-Life Example
- Imagine a list of registered student IDs:
```cpp
101
105
101
103
105
```

We don't want duplicate IDs.

- A set automatically gives:
```cpp
101
103
105
```

- Set = Unique + Sorted

### Header File
```cpp
#include <set>
```

### Syntax
```cpp
set<data_type> set_name;
```

---

### insert()
Used to add an element.

```cpp
Before:
10 20 30

insert(20)

After:
10 20 30
```
If 20 already exists  then No duplicate is created.

---

### size()
Returns the number of unique elements.
```cpp
cout << s.size();
```

##### Example:
```cpp
set<int> s = {10, 20, 20, 30, 30};
```
Here set contains 10,20,30 therefore s.size() is 3.

---

### empty()
Checks whether the set is empty.
```cpp
if(s.empty())
{
    cout << "Set is empty";
}
else
{
    cout << "Set is not empty";
}
```

- Returns:
```cpp
true → empty
false → not empty
```

---

### find()
Used to search for an element.
```cpp
s.find(30);
```

But find() returns an iterator, not directly true/false.

- Example:
```cpp
if(s.find(30) != s.end())
{
    cout << "Element found";
}
else
{
    cout << "Element not found";
}
```
- Why s.end()?

If the element is not found:
```cpp
s.find(30)
```

- returns:
```cpp
s.end()
```

- So:
```cpp
s.find(x) != s.end()
```

means: Element exists.

---

### count()
Another easy way to check whether an element exists.
```cpp
s.count(30);
```

- For a set, count() can return only:
```cpp
0 → element doesn't exist
1 → element exists
```

- Example:
```cpp
if(s.count(30))
{
    cout << "Found";
}
```

- Important:
In a set, duplicates are not allowed, so the count can never be greater than 1.

---

### erase()
Used to remove an element.

Does not print the set. It prints the number of elements erased.

```cpp
s.erase(30);
```

- Example:
```cpp
Before:
10 20 30 40

erase(30)

After:
10 20 40
```

- You can also erase using an iterator:
```cpp
auto it = s.find(30);

if(it != s.end())
{
    s.erase(it);
}
```

---

### clear()
Removes all elements.
```cpp
s.clear();
```

---

### begin() and end()
We can iterate through a set using iterators.

```cpp
set<int> s = {40, 10, 30, 20};

for(auto it = s.begin(); it != s.end(); it++)
{
    cout << *it << " ";
}
```

##### Output:
10 20 30 40

---

### Why Can't We Use s[2]?
This is wrong:
```cpp
cout << s[2];
```
A set does not support random access.

- Why?

Because a set is generally implemented using a balanced tree structure, not a contiguous array.

---

### Time Complexity 
A standard set is generally implemented using a balanced BST.
```cpp
| Operation  | Complexity |
| ---------- | ---------: |
| `insert()` |   O(log n) |
| `erase()`  |   O(log n) |
| `find()`   |   O(log n) |
| `count()`  |   O(log n) |
| `begin()`  |       O(1) |
| `size()`   |       O(1) |

```

## 17.Explain multiset in C++ STL
### Answer:
A multiset is an STL container that:

- stores elements in sorted order
- allows duplicate elements
- supports searching, insertion and deletion
- does not support random access


### Header File
```cpp
#include <set>
```

### Syntax:
```cpp
multiset<data_type> name;
```

---

### insert()
Adds an element.

```cpp
ms.insert(20);
```

Unlike set, inserting 20 multiple times creates multiple copies.
```cpp
ms.insert(20);
ms.insert(20);
ms.insert(20);
```

##### OUTPUT:
```cpp
20 20 20
```

---

### size()
Returns the total number of elements, including duplicates.

```cpp
cout << ms.size();
```

### count() 
count() is particularly useful with multiset.

##### Example:
```cpp
multiset<int> ms = {10, 20, 20, 20, 30};
cout << ms.count(20);
```

##### Output:
```cpp
3
```

Because 20 occurs three times.

- Compare with set
1. set:
```cpp
10 20 30

count(20) → 1
```

2. multiset:
```cpp
10 20 20 20 30

count(20) → 3
```

---

### find()
Used to find an element.

```cpp
if(it != ms.end())
{
    cout << "Found";
}
```

---

### erase()
There are two common forms.

- Case 1: erase(value)
```cpp
ms.erase(20);
```
removes all 20s


- Case 2: erase(iterator)
If you want to remove only one occurrence:

```cpp
auto it = ms.find(20);

if(it != ms.end())
{
    ms.erase(it);
}
```
removes one 20

---

### empty()
```cpp
if(ms.empty())
{
    cout << "Empty";
}
```

- Returns:
```cpp
true  → empty
false → not empty
```

---

### clear()
Removes everything.
```cpp
ms.clear();
```

--- 

### Traversing a Multiset
- You can use a range-based loop:
```cpp
for(auto x : ms)
{
    cout << x << " ";
}
```

- Or an iterator:
```cpp
for(auto it = ms.begin(); it != ms.end(); it++)
{
    cout << *it << " ";
}
```

---

### Time Complexity
```cpp
| Operation         |     Complexity |
| ----------------- | -------------: |
| `insert()`        |       O(log n) |
| `find()`          |       O(log n) |
| `erase(iterator)` | Amortized O(1) |
| `erase(value)`    |   O(log n + k) |
| `count()`         |   O(log n + k) |
| `size()`          |           O(1) |

```
Here k represents the number of matching elements.

---

## 18.Explain unordered_set in C++ STL
### Answer:
unordered_set is an STL container that:

- stores unique elements
- does not maintain sorted order
- uses hashing
- provides average O(1) insertion, deletion and search

### Header File
```cpp
#include <unordered_set>
```

### Syntax:
```cpp
unordered_set<data_type> name;
```

---

### insert()
Used to add an element.
```cpp
us.insert(10);
us.insert(20);
us.insert(30);
```

Duplicate values are ignored.
```cpp
us.insert(10);
us.insert(10);
us.insert(10);
```
Still only one 10 is stored.

---

### find() 
Used to search for an element.

```cpp
if(us.find(30) != us.end())
{
    cout << "Element found";
}
else
{
    cout << "Element not found";
}
```

---

### count()
You can also check existence using count().

```cpp
if(us.count(30))
{
    cout << "Element found";
}
```
- For an unordered_set:

```cpp
count(x) = 0 → not present
count(x) = 1 → present
```
Because duplicates are not allowed.

---

### erase()
Remove an element:
```cpp
us.erase(30);
```

- You can also erase using an iterator:
```cpp
auto it = us.find(30);

if(it != us.end())
{
    us.erase(it);
}
```

---

### size()
```cpp
cout << us.size();
```
Returns the number of unique elements.

##### Example:
```cpp
unordered_set<int> us = {10,20,20,30,30};
```

The set contains:
```cpp
10 20 30
```

Therefore:
```cpp
size = 3
```

--- 

### empty()
```cpp
if(us.empty())
{
    cout << "Empty";
}
```

- Returns:
```cpp
true → empty
false → not empty
```

---

### clear()
Removes everything.
```cpp
us.clear();
```

---

### Traversing unordered_set

- Use a range-based loop:
```cpp
for(auto x : us)
{
    cout << x << " ";
}
```

- Or iterator:
```cpp
for(auto it = us.begin(); it != us.end(); it++)
{
    cout << *it << " ";
}
```
Again, the order is not guaranteed.

---

### Time Complexity
```cpp
| Operation         |     Complexity |
| ----------------- | -------------- |
| `insert()`        | O(1) average   |
| `erase()`         | O(1) average   |
| `search() `       |  O(1) average  |
```

---

## 19.Explain map in C++ STL 
### Answer:
A normal map:

- A map stores key-value pairs
```cpp
key → value
```
- keys are unique
- keys are automatically sorted
- each key maps to one value
- searching by key is generally O(log n)


### Real Life Example:
```cpp
| Roll No. | Name     |
| -------: | -------- |
|      103 | Neha     |
|      101 | Pratibha |
|      102 | Rahul    |
```

Here:
```cpp
101 = key
"Pratibha" = value
```

### Header File
```cpp
#include <map>
```

### Syntax:
```cpp
map<key_type, value_type> map_name;
```

---

### Access a Value
Suppose:
```cpp
map<int, string> students;

students[101] = "Pratibha";
students[102] = "Rahul";
```

- We can access:
```cpp
cout << students[101];
```

- Output: Pratibha

---

### insert()
- We can also insert using insert().
```cpp
students.insert({101, "Pratibha"});
```

- Insert Using []
```cpp
students[101] = "Pratibha";
students[102] = "Rahul";
```

- Another way:
```cpp
students.insert(make_pair(102, "Rahul"));
```

---

### Difference Between [] and insert()

-  map[key] = value 
```cpp
  Insert→ If the key already not exists
  Update→ If the key already exists
  ```

  - map.insert({key, value}) 
  ```cpp
  Insert only if the key does not already exist
  ```

  ---

  ### find() 
- Used to search for a key.
```cpp
auto it = students.find(101);
```

- Check:
```cpp
if(students.find(101) != students.end())
{
    cout << "Key found";
}
```

- If key doesn't exist:
```cpp
students.find(999) == students.end()
```

---

### Access Value Through Iterator
```cpp
if(it != students.end())
{
    cout << "Roll No: " << it->first << endl;
    cout << "Name: " << it->second << endl;
}
```

---

### count()
We can also check whether a key exists.
```cpp
if(students.count(101))
{
    cout << "Found";
}
```

---

### erase()
Remove a key:
```cpp
students.erase(101);
```

---

### size()
```cpp
cout << students.size();
```

Returns the number of key-value pairs.

- Example:
```cpp
101 → Pratibha
102 → Rahul
103 → Neha
```

- Size: 3

---

### empty()
```cpp
if(students.empty())
{
    cout << "Map is empty";
}
```

---

### clear()
Removes all key-value pairs:
```cpp
students.clear();
```

---

### Traversing a Map
- Range-based loop
```cpp
for(auto x : students)
{
    cout << x.first << " " << x.second << endl;
}
```

- Iterator
```cpp
for(auto it = students.begin(); it != students.end(); it++)
{
    cout << it->first << " " << it->second << endl;
}
```

---

### Map Complexity 
For a normal std::map:

```cpp
| Operation  | Complexity |
| ---------- | ---------: |
| `insert()` |   O(log n) |
| `find()`   |   O(log n) |
| `erase()`  |   O(log n) |
| `[]`       |   O(log n) |
| `count()`  |   O(log n) |
| `size()`   |       O(1) |

```

---

## 20.Explain multimap in C++ STL
### Answer:
multimap stores key-value pairs, allows multiple values with the same key, and keeps keys sorted.

### Real-life example:
A company has multiple employees in the same department.
```cpp
Department → Employee
ENTC       → Pratibha
ENTC       → Rahul
CSE        → Amit
ENTC       → Sneha
```

### Header File
```cpp
#include <map>
```

### Syntax
```cpp
multimap<key_type, value_type> name;
```

---

### insert()
We use insert() to add elements.

```cpp
mm.insert({101, "Pratibha"});
mm.insert({101, "Rahul"});
```

Both are inserted.

Unlike map, there is no restriction that the key must be unique.

---

### Important: No operator[]
with multimap, this is not allowed:

```cpp
multimap<int, string> mm;

mm[101] = "Pratibha";  // Wrong 

```

Because one key can have multiple values.

So C++ cannot decide which value mm[101] should represent.

---

### find()
We can search for a key using find().

```cpp
auto it = mm.find(101);
```

Example:
```cpp
if(it != mm.end())
{
    cout << it->first << " -> " << it->second;
}
```
If there are multiple 101 keys, find() gives an iterator to one matching element.

If you want all values for a key, use equal_range().

---

### count()
count() tells us how many times a key exists.

```cpp
cout << mm.count(101);
```

- Suppose:
```cpp
101 → Pratibha
101 → Rahul
101 → Sneha
```

- Then: count(101) = 3 

---

### equal_range()
It gives the range containing all elements with a particular key.

```cpp
equal_range(key)
       ↓
┌──────────────────┐
│ all matching key │
└──────────────────┘

```

```cpp
auto range = mm.equal_range(101);

for(auto it = range.first; it != range.second; it++)
{
    cout << it->first << " -> " << it->second << endl;
}
```

- For:
```cpp
101 → Pratibha
101 → Rahul
101 → Sneha
102 → Amit
```

- Output:
```cpp
101 → Pratibha
101 → Rahul
101 → Sneha
```

---

### erase()
There are two important forms.

1. Erase by key
```cpp
mm.erase(101);
```

This removes ALL elements having key 101.

2. Erase using iterator
```cpp
auto it = mm.find(101);

if(it != mm.end())
{
    mm.erase(it);
}
```

This removes only one element.

---

### size()
Returns total number of key-value pairs.

```cpp
cout << mm.size();
```

---

### empty()
```cpp
if(mm.empty())
{
    cout << "Multimap is empty";
}
```

---

### clear()
Removes everything.
```cpp
mm.clear();
```

---

### begin() and end()

```cpp
for(auto it = mm.begin(); it != mm.end(); it++)
{
    cout << it->first << " -> " << it->second << endl;
}

```

---

## 21.Explain unordered_map in C++ STL
### Answer:
An unordered_map is an STL container that stores data in key-value pairs, allows unique keys, and does not store keys in sorted order.

### Header File
```cpp
#include <unordered_map>
```

### Syntax
```cpp
unordered_map<key_type, value_type> name;
```

---

### insert()
Adds a key-value pair.

```cpp
unordered_map<int, string> students;

students.insert({101, "Pratibha"});
students.insert({102, "Priya"});
```

If the key already exists, insert() does not replace its existing value.

---

###  operator[]
Inserts a new key or updates the value of an existing key.

```cpp
students[101] = "Pratibha";
students[102] = "Priya";
students[101] = "Rahul";
```

---

### find()
Searches for a key.

```cpp
auto it = students.find(101);

if(it != students.end())
{
    cout << "Key found";
}
else
{
    cout << "Key not found";
}
```

find() returns an iterator to the element if found; otherwise, it returns students.end().

---

### count()
Checks whether a key exists.

```cpp
cout << students.count(101);
```

For unordered_map, count() returns either 1 or 0, because keys are unique.

---

### erase()
Removes an element using its key.

```cpp
students.erase(101);
```

---

### size()
Returns the total number of key-value pairs.

```cpp
cout << students.size();
```

---

### empty()
Checks whether the container is empty.

```cpp
if(students.empty())
{
    cout << "Map is empty";
}
```

---

### clear()
Removes all elements.

```cpp
students.clear();
```

---

### begin() and end()
Used to traverse the container.

```cpp
for(auto it = students.begin();
    it != students.end(); it++)
{
    cout << it->first << " -> "
         << it->second << endl;
}
```

---

### Time Complexity
Let n be the number of elements in the container.

```cpp
| Operation     | Average Case | Worst Case |
|---------------|-------------:|-----------:|
| `insert()`    |        O(1)  |       O(n) |
| `find()`      |        O(1)  |       O(n) |
| `erase(key)`  |        O(1)  |       O(n) |
| `operator[]`  |        O(1)  |       O(n) |
| `size()`      |        O(1)  |       O(1) |
```
Worst-case performance can degrade because of hash collisions.


