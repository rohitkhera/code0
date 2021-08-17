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

      ListNode *runner1 = l1, *runner2 = l2;
      ListNode *current = NULL;
      ListNode *head = NULL;

      int i = 0;
      while(runner1 != NULL && runner2 != NULL) {

	if(current)
	  cout << "Current Val " << current->val << endl;
	if(runner1->val <= runner2->val) {
	  if(current == NULL) { 
	    current = runner1;
	    head = runner1;
	    cout << "head1" << endl;
	  }
	  else
	    current->next = runner1;
	  cout << "Increment runner 1 " << endl;
	  runner1 = runner1->next;
	  current = current->next;
	}
	else {
	  if(current == NULL) {
	    current = runner2;
	    head = runner2;
	    cout << "head2" << endl;
	  }
	  else
	    current->next = runner2;
	  cout << "increment runner 2" << endl;
	  runner2 = runner2->next;
	  current = current->next;
	}

	if(i == 7) break;
	i++;
	cout << endl;
      }

      return head;
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

  cout << "Solution" << endl;
  Solution s;
  s.mergeTwoLists(&l1_1, &l2_1);
}
