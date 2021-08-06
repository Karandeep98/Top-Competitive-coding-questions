#include <iostream>

using namespace std;

struct ListNode* head=NULL;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


ListNode* deleteDuplicates(ListNode* A) {
    ListNode* temp=A;
 if(temp->next==NULL) return A;
   while(temp->next){

       while(temp->val==temp->next->val){
           temp->next=temp->next->next;
           if(temp->next==NULL) return A;
       }

       temp=temp->next;
   }
   return A;
}
 void print(ListNode* a){
        while(a!= NULL){

            cout<< a->val ;
            if(a->next!=NULL) cout<<"-->";
            a=a->next;
        }
        cout<<endl;
    }

void insertAtEnd(int d){
         ListNode* temp = new ListNode(0);
          ListNode* a = head;
        temp->val=d;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            while(a->next!=NULL){
                a=a->next;
            }
            a->next=temp;
        }
    }

int main()
{
    struct ListNode* temp = head;

    insertAtEnd(1);insertAtEnd(1);insertAtEnd(2);insertAtEnd(2);insertAtEnd(3);
    print(head);
    temp=deleteDuplicates(head);
    print(temp);
    return 0;
}
