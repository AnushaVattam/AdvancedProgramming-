#include <iostream>
#include <cstdlib>

#include "list.h"

using namespace std;

List::List()
{
    head = NULL ;
    curr = NULL ;
    temp = NULL ;
}
 void List::AddNode(int newData)
{
    nodePtr n = new node;
    n->next = NULL;
    n->value = newData;

    if(head == NULL)
        {
        head = n;
        }
    else
        {
            curr = head;
            while(curr->next!= NULL)
                {
                    curr = curr->next;
                }
                    curr->next = n;
        }
}

void List::InsertNode(int number)
{
   nodePtr n = new node ;
   n->next = NULL;
   n->value = number;

   if(head == NULL)

   {
       head = n;
   }
   else
   {
       curr= head;
       temp = NULL;
       while(curr != NULL && curr->value < number)
       {
           temp=curr;
           curr= curr->next;
       }
       n->next =curr;
       if(temp !=NULL)
       {
         temp->next =n;
       }
       else
       {
           head = n;
       }
   }


}
 void List::DeleteNode(int num)
{
    nodePtr delptr = NULL;
    temp = head;
    curr = head;

    while (curr != NULL && curr->value != num)
    {
        temp = curr;
        curr=curr->next;
    }
    if(curr == NULL)
    {
        cout << "the num "<< num << "is not in the list"<< endl;
        delete delptr;
    }
    else
    {
        delptr = curr;
        curr = curr->next;
        temp->next =curr;

        if(delptr == head)
        {
            head= head->next;
            temp= NULL;
        }
        delete delptr;
        cout << "the num:"<< num  << " is deleted from the list"<< endl;
    }

}
void List::ReverseList()
{
    nodePtr prev = NULL;
    nodePtr curr = NULL;
    nodePtr present = head;

    while(present!= NULL)
    {
      curr = present;
      present= present->next;
      curr->next =prev;
      prev=curr;
    }
    head = curr;
}
void List::print()
{
    curr = head;
    while(curr != NULL)
    {
         cout <<" values in the list:"<< curr->value << endl;
         curr = curr->next;
    }
    if(head== NULL)
    {
        cout << "list is empty " << endl;
    }
}

/*bool List::findCircular(nodePtr head)
{
    //nodePtr head;
   //nodePtr slower,  faster;
   node* slower = head;
   node* faster = head->next; //start faster one node ahead
   while(true)
        {

     // if the faster pointer encounters a NULL element
     if( !faster || !faster->next)
       return false;
    //if faster pointer ever equals slower or faster's next
    //pointer is ever equal to slow then it's a circular list
     else if (faster == slower || faster->next == slower)
        return true;
     else{
       // advance the pointers
        slower = slower->next;
        faster = faster->next->next;
      }
   }
}*/
