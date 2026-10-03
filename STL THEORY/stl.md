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

### ii) Algorithms

Algorithms are ready-made functions that perform operations on data.

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
Other STL algorithms include:
```cpp
find()
sort()
reverse()
count()
max_element()
min_element()
```

### iii) Iterators

An iterator is used to move through/access elements of a container.

For example:
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

---

## 3. Explain Function Objects in STL
### Answer:
A function object/functor is an object that behaves like a function by overloading:
```cpp
operator()
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

## 







