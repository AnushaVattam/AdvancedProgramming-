#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED


class List
{
   private:
       typedef struct node
        {
        int value;
        node* next;
        }* nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;

   public:

       List();
       void AddNode(int newData);
       void print();
       void DeleteNode(int num);
       void InsertNode(int number);
       void ReverseList();
       //bool findCircular(nodePtr head);
};


#endif // LIST_H_INCLUDED
