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
    cout << "\nInserted at head\n\n";
    return;
  }
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
}

void print_linked_list(Node *head) {
  cout << "\nYour linked list: ";
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << "\n\n";
}

void insert_at_position(Node *head, int pos, int v) {
  Node *newNode = new Node(v);
  Node *temp = head;
  for (int i = 1; i < pos; i++) {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  cout << "\nInserted at position " << pos << "\n\n";
}

void delete_at_position(Node *head, int pos) {
  Node *temp = head;
  for (int i = 1; i < pos; i++) {
    temp = temp->next;
  }
  Node *deleteNode = temp->next;
  temp->next = temp->next->next;
  delete deleteNode;
  cout << "\nDeleted position " << pos << "\n\n";
}

void insert_at_head(Node *&head, int v) {
  Node *newNode = new Node(v);
  newNode->next = head;
  head = newNode;
  cout << "Inserted at head\n";
}

void delete_head(Node *&head) {
  if (head == NULL) return;
  Node *deleteNode = head;
  head = head->next;
  delete deleteNode;
  cout << "\nDeleted head\n\n";
}

int main() {
  Node *head = NULL;
  while (true) {
    cout << "1: Insert at tail\n";
    cout << "2: Print linked list\n";
    cout << "3: Insert at position\n";
    cout << "4: Insert at head\n";
    cout << "5: Delete at position\n";
    cout << "6: Delete head\n";
    cout << "7: Exit\n";
    
    int option;
    cin >> option;
    
    if (option == 1) {
      cout << "Enter value: ";
      int v;
      cin >> v;
      insert_at_tail(head, v);
    } else if (option == 2) {
      print_linked_list(head);
    } else if (option == 3) {
      int pos, v;
      cout << "Enter position: ";
      cin >> pos;
      cout << "Enter value: ";
      cin >> v;
      if (pos == 0) insert_at_head(head, v);
      else insert_at_position(head, pos, v);
    } else if (option == 4) {
      int v;
      cout << "Enter head value: ";
      cin >> v;
      insert_at_head(head, v);
    } else if (option == 5) {
      int pos;
      cout << "Enter position: ";
      cin >> pos;
      if (pos == 0) delete_head(head);
      else delete_at_position(head, pos);
    } else if (option == 6) {
      delete_head(head);
    } else if (option == 7) {
      break;
    } else {
      cout << "Invalid option! Try again.\n";
    }
  }
  return 0;
}
