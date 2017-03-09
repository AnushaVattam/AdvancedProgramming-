#include "Charset.h"

#include <iostream>
using namespace std;

int main()
{
    CharSet s;

    s.insert('Z');
    s.insert('B');
    s.insert('D');
    s.insert('A');
    s.insert('P');


    s.display();

    if (s.find('E'))
        cout << "E is in the set" << endl;
    else
        cout << "E is NOT in the set" << endl;
    if (s.find('A'))
        cout << "A is in the set" << endl;
    else
        cout << "A is NOT in the set" << endl;
}
