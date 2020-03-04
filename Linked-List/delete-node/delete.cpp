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

  test.next = new ListNode(2);

  cout << test.val << " " << test.next->val;


}


void deleteNode(ListNode *node){


}
