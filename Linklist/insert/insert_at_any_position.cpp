#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int value;
  Node *next;

  Node(int value) {  
    this->value = value;
    this->next = NULL;
  }
};

void insert_at_tail(Node *&head, int val) {
  Node* newNode = new Node(val);
  if (head == NULL) {
    head = newNode;
    return;
  }
  Node* temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;       
}

void insert_any_pos(Node* &head, int index, int val) {
  if (index < 1) {
    cout << "Invalid position!" << endl;
    return;
  }

  // Case 1: Insert at Head
  if (index == 1) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    return;
  }

  // Traverse to the desired position
  Node* temp = head;
  int pos = 1;
  while (pos != index - 1 && temp != NULL) {
    temp = temp->next;
    pos++;
  }

  // If position is out of bounds
  if (temp == NULL) {
    cout << "Invalid position!" << endl;
    return;
  }

  // Insert at position
  Node* newNode = new Node(val);
  newNode->next = temp->next;
  temp->next = newNode;
}

void print_link_list(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;  
}  

int main() {   
  Node *head = NULL;
  insert_at_tail(head, 10);
  insert_at_tail(head, 20);
  insert_at_tail(head, 30); 
  insert_any_pos(head, 2, 99); // insert at position 2
  insert_any_pos(head, 1, 50); // insert at position 1 (head)
  insert_any_pos(head, 10, 70); // Invalid position
  print_link_list(head);
  return 0;
}
