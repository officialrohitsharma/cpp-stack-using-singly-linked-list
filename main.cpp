#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

class stack {
  Node *top = NULL;

public:
  // push operation
  void push(int value) {
    Node *temp = new Node(value);
    if (!temp) {
      cout << "Stack Overflow";
    } else {
      temp->next = top;
      top = temp;
      cout << "\nElemented push successfully\n";
    }
  }

  // pop operation
  void pop() {
    if (top == NULL) {
      cout << "\nStack underflow\n";
    } else {
      cout << top->data << "\n";
      top = top->next;
    }
  }
  // peek oepration
  void peek() {
    if (top == NULL) {
      cout << "\nStack underflow\n";
    } else {
      cout << top->data << "\n";
    }
  }
};

int main() {
  stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  st.pop();
  st.pop();
  st.pop();
  st.pop();
  st.pop();
  st.pop();
}