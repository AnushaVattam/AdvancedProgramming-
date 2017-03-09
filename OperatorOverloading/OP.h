#ifndef OP_H_INCLUDED
#define OP_H_INCLUDED
#include <iostream>

using namespace std;
class Block
{
    private:
        string color;
        float x;
        float y;
    public:
Block()
{
  color="Black";
   x = 0;
   y = 0;
}

void setColor(string newColor)
{
    color = newColor;
}
void setX(float newX)
{
    x = newX;
}
void setY(float newY)
{
    y = newY;
}
string getColor()
{
    return color;
}
float getX()
{
    return x;
}
float getY()
{
     return y;
}

    bool operator==(Block); //define this
};

class BlockList
{
    private:
        Block list[100];//partially filled array of blocks
        Block newlist[200];
        int count; //the number of blocks currently in list
    public:
        BlockList()
        {
            count = 0;
        }
        bool addBlock(Block b); // add a Block to the list
        int findBlock(Block b); // return index of b in the list
        BlockList operator+(BlockList); // concatenate 2 lists
};


#endif // OP_H_INCLUDED
