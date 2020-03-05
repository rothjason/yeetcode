/*
  Objective: Remove a specified node out of a linked list

  Givens:
  - >1 nodes per list
  - No duplicates
  - Target node will not be the tail
*/

#include <iostream>

using namespace std;

struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x): val(x), next(NULL) {}
};

void deleteNode(ListNode *node);

int main(){
  ListNode test(1);
  ListNode *ptr = &test;
  for(int i = 0; i < 10; i++){
    ptr->next = new ListNode(i);
    ptr = ptr->next;
  }
  ptr = &test;
  ptr = ptr->next;
  deleteNode(ptr);

 ListNode *nptr = &test;
  while (nptr != NULL){
    cout << nptr->val;
    nptr = nptr->next;
  }
  cout << endl;
}

void deleteNode(ListNode *node){
  cout << "Delete Node: " << node->val << endl;
  node->val = node->next->val;
  node->next = node->next->next;
}
