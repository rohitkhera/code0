#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

      ListNode *tmp;
      return tmp;
    }
};


void print(ListNode *head) {

  while(head != NULL) {
    cout << head->val << endl;
    head = head->next;
  }

}


int main(int argc, char** argv) {

  ListNode l1_3(4, NULL);
  ListNode l1_2(2, &l1_3);
  ListNode l1_1(1, &l1_2);

  print(&l1_1);
  cout << "\n";

  ListNode l2_3(4, NULL);
  ListNode l2_2(3, &l2_3);
  ListNode l2_1(1, &l2_2);

  print(&l2_1);

}
