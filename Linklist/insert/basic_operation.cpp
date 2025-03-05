#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int value;
   Node *next;

   Node(int value){  
     this->value=value;
     this->next=NULL;
   }
};

int getSize(Node *head){
    int cnt=0;
    Node *temp=head;
    while (temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

void insert_at_tail(Node *&head,int val){
    Node* newNode= new Node(val);
    if (head==NULL)
    {
      head=newNode;
      return;
    }
    Node* temp=head;
    while (temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=newNode;       
}

void insert_head(Node* &head,int val){
    Node *newNode = new Node(val);
    if (head==NULL)
    {
       head = newNode;
       return;
    }
    newNode->next= head;
    head=newNode;
}

void print_link_list(Node *head){
   Node *temp=head;
   while (temp!=NULL)
   {
     cout<<temp->value<<" ";
     temp=temp->next;
   }
   cout<<endl;  
}  

int main(){   
   Node *head=NULL;
   insert_at_tail(head,10);
   insert_at_tail(head,20);
   insert_at_tail(head,30);
   insert_head(head,60);
   insert_at_tail(head,40);
   insert_at_tail(head,50);
   insert_head(head,70);
   print_link_list(head);
   cout<<"size: "<<getSize(head)<<endl;
   return 0;
}