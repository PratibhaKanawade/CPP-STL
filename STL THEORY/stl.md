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

## 7.Array in STL
### Answer:





