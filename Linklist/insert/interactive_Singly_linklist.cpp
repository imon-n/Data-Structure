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

void insert_at_tail(Node *&head, int v) {
  Node *newNode = new Node(v);
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

void print_linklist(Node *head) {
  Node *temp = head;
  while (temp != NULL) {  
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insert_any_pos(Node*& head, int pos, int v) {
  if (pos == 1) { 
    insert_head(head, v);
    return;
  }

  Node *newNode = new Node(v);
  Node* temp = head;
  for (int i = 1; i < pos - 1; i++) {
    if (temp == NULL) {
      cout << "Invalid position!" << endl;
      return;
    }
    temp = temp->next;
  }
  if (temp == NULL) {
    cout << "Invalid position!" << endl;
    return;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void insert_head(Node*& head, int v) {
  Node *newNode = new Node(v);
  newNode->next = head;
  head = newNode;
}

int main() {
  Node *head = NULL;
  while (true) {
    cout << "1: Insert at tail\n2: Print linked list\n3: Insert at any position\n4: Insert at head\n5: Terminate\n";
    int op;
    cin >> op;
    if (op == 1) {
      cout << "Enter value: ";
      int v;
      cin >> v;
      insert_at_tail(head, v);
    }
    else if (op == 2) {
      print_linklist(head); 
    }
    else if (op == 3) {
      int pos, v;
      cout << "Enter position: ";
      cin >> pos;
      cout << "Enter value: ";
      cin >> v;
      insert_any_pos(head, pos, v);
    }
    else if (op == 4) {
      int v;
      cout << "Enter value for head: ";
      cin >> v;
      insert_head(head, v);
    }
    else if (op == 5) {
      break; 
    } 
    else {
      cout << "Invalid option! Try again.\n";
    }
  }  
  return 0;
}
