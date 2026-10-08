#include <iostream>
#include <map>
using namespace std;

void display(map<int, string> s) {
    for(auto x : s) {
        cout << x.first << " , " << x.second << endl;
    }
}

int main() {

    map<int, string> s;

    // Insert elements
    s[12] = "Ram";
    s[3] = "Sham";
    s[45] = "Radha";
    s[90] = "Pratibha";

    cout << "Original map:" << endl;
    display(s);

    // count()
    cout << "\nChecking key 12:" << endl;

    if(s.count(12)) {
        cout << "Found" << endl;
    }

    // size()
    cout << "\nSize of map: ";
    cout << s.size() << endl;

    // erase()
    s.erase(90);

    cout << "\nAfter erasing key 90:" << endl;
    display(s);

    // empty()
    cout << "\nChecking if map is empty:" << endl;

    if(s.empty()) {
        cout << "Map is empty" << endl;
    }
    else {
        cout << "Map is not empty" << endl;
    }

    // clear()
    s.clear();

    cout << "\nAfter clear():" << endl;

    if(s.empty()) {
        cout << "Map is empty" << endl;
    }

    return 0;
}