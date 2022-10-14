#include<iostream>
using namespace std;
class list
{
  typedef struct node{
      int data;
      node* next;
   }* nodeptr;
 
 //  typedef struct node* nodePtr;
 
   nodeptr head;  //node* head;
   nodeptr curr;
   nodeptr temp;
   
   public:
     //declaring function prototype
    list();
    void addNode(int addData);
    void deleteNode(int delData);
    void printList(void);

};

list::list()
{
    head = NULL;
    curr = NULL;
    temp = NULL;

}
void list::addNode(int addData)
{
   nodeptr n = new node;
   n->next = NULL;
   n->data = addData;
   if(head != NULL)
   {
      curr = head;
      while(curr->next !=NULL)
        curr =curr->next;
      curr->next = n;
   }
   else 
     head = n;
}

void  list::deleteNode(int delData)
{
  nodeptr delPtr = NULL;
  temp = head ;
  curr = head ;
  while(curr != NULL && curr->data != delData)
  {
      temp = curr;
      curr = curr->next;
  }
  if(curr == NULL){
   cout<< delData <<"Was Not In The List\n";
   delete delPtr;
  }
  else 
    delPtr = curr;
    curr = curr->next; 
    temp->next = curr;
    delete delPtr;
    cout<<"The Value "<<delData<<" Was Deleted.\n";
}

void list::printList()
{
  curr = head ;
  while(curr != NULL)
  {
    cout << curr->data << endl;
    curr = curr->next;
  }
}
int main()
{

    list item;
    item.addNode(3);
    item.addNode(5);
    item.addNode(7);
    item.deleteNode(5);
    item.printList();
    return 0;
}