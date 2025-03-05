#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int value;
   Node *next;

   Node(int value){  
     this->value=value;
     this->next=NULL;
   }
};

int main(){
   Node* a = new Node(5);
   Node* b = new Node(10);
   Node* c = new Node(15);

   a->next = b;
   b->next = c;
   c->next = NULL;

   Node* temp = a;

   while (temp != NULL)
   {
    cout<<temp->value<<" ";
    temp = temp->next;
   }
   
    return 0;
}