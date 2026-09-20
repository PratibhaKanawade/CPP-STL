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

#### Real-life example
hink of a container as a box.
```cpp
Box
 ↓
[10] [20] [30] [40]
```
The box stores your data.

#### Examples
```cpp
vector
list
deque
stack
queue
set
map
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