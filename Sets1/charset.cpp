#include <iostream>
#include "charset.h"

using namespace std;


CharSet::CharSet()
{
    for(int i=0;i<26;i++)
    {
        array[i]= false;
    }
}
int CharSet::map(char x)
{
    //cout << (x-'A') << endl;
    return (x-'A');
}
void CharSet ::insert(char x)
{
    int pos = map(x);
    if (pos >=0 && pos < 26)
        array[pos] = true;
        //cout << array[pos] << endl;
}

bool CharSet::find(char x)
{
    int pos = map(x);
    if (pos >=0 && pos < 26)
        return array[pos];
    return false;
}

void CharSet::display()
{
    for (int i=0; i<26; i++)
        if (array[i])
            cout << char('A'+i) << " " ;
    cout << endl;
}

