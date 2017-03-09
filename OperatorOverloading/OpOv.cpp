#include <iostream>
#include "OP.h"

using namespace std;
bool Block::operator ==(const Block right)
{
    cout << color << x << y << endl;
    cout << right.color << right.x << right.y << endl;
    bool status;
    if((color==right.color) && (x==right.x) && (y==right.y))
    {
        status = true;
        cout << "I am in " << endl;
    }
    else
    {
        status = false;
    }
    return status;
}



bool BlockList::addBlock(Block b)//add a Block to the list
{
    bool status;
           if(count >=0 && count<100)
                {
                cout << "first count" << count << endl;
                status= true;
                list[count]=b;


                cout << "added block in to the list"<< endl;
                count++;
                cout << "incremented"<< count << endl;
                }

            else
                {
                    status= false;
                }

    return status;
}


int BlockList::findBlock(Block b)
{
   //Block b1;
    int index=0;
    for(int i=0 ;i <(count) ;i++)
    {
        if (list[index]==b)
            {
            //list[count]=b;
            cout << "index " << index << endl;
            return index;
            }
        else
            {
            index++;
            }
    }


return -1;
} // return index of b in the list

BlockList BlockList::operator+(BlockList blist2)
{
    BlockList List3;
    int index = 0;
    for (int i=0; i<count; i++)
    {
        List3.newlist[index] = list[i];
        List3.count++;
        index++;
        cout << "added block. Index now is " << index << endl;
    }
    for (int j=0; j<blist2.count; j++)
    {
        List3.newlist[index] = blist2.list[j];
        List3.count++;
        index++;
        cout << "added block. Index now is " << index << endl;
    }
   // List3.newlist = this->list (blist2.list);
    return List3;
}
int main()
{
    Block b1;
    b1.setColor("Blue");
    b1.setX(1);
    b1.setY(1);
    cout << b1.getColor()<< endl;
    cout << b1.getX()<< endl;
    cout << b1.getY()<< endl;

    Block b2;
    b2.setColor("Grey");
    b2.setX(1);
    b2.setY(2) ;
    cout << b2.getColor()<< endl;
    cout << b2.getX()<< endl;
    cout << b2.getY()<< endl;

    Block b4;
    b4.setColor("Green");
    b4.setX(1);
    b4.setY(3);
    cout << b4.getColor()<< endl;
    cout << b4.getX()<< endl;
    cout << b4.getY()<< endl;

    bool g;
    g = b1 == b2;
    cout << g << endl << endl;

    BlockList blist;
    cout << blist.addBlock(b2) << endl;
    cout << blist.addBlock(b1) << endl;
    cout << "result is" << blist.findBlock(b4) << endl;

    BlockList blist2;
    blist2.addBlock(b4);
    blist2.addBlock(b1);
    cout << "result is" << blist2.findBlock(b4) << endl;

    BlockList blist3;
    //blist+(blist2);
    blist3 = blist+(blist2);
    //blist.function1(x);
    return 0;
}
