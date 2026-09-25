#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> c = {'p','r','a','t','i','b','h','a'};

    // 1. Erase first element
    c.erase(c.begin());

    cout << "After erasing first element: ";
    for(char x : c)
        cout << x << " ";
    cout << endl;


    // 2. Erase element at index 3
    c.erase(c.begin() + 3);

    cout << "After erasing index 3: ";
    for(char x : c)
        cout << x << " ";
    cout << endl;


    // 3. Erase range [2, 5)
    c.erase(c.begin() + 2, c.begin() + 5);

    cout << "After erasing index 2 to 4: ";
    for(char x : c)
        cout << x << " ";
    cout << endl;


    return 0;
}