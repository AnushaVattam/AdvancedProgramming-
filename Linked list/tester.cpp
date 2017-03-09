#include <cstdlib>

#include "list.h"

using namespace std;

int main()
{
    List ob;
    ob.print();
    ob.InsertNode(12);
    ob.InsertNode(20);
    ob.InsertNode(21);
    ob.InsertNode(9);
    ob.InsertNode(15);
    ob.print();
    ob.DeleteNode(15);
    ob.ReverseList();
    ob.print();
    //ob.findCircular(nodePtr head);
    return 0;
}
