#include <iostream>

using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  struct ListNode* head=NULL;

void print(ListNode* a){
        while(a!= NULL){

            cout<< a->val ;
            if(a->next!=NULL) cout<<"-->";
            a=a->next;
        }
        cout<<endl;
    }


    void insertAtBeg(int d){
        struct ListNode* temp = new ListNode(0);

        temp->val=d;
        temp->next=head;
        head=temp;

    }
    void insertAtEnd(int d){
        struct ListNode* temp = new ListNode(0);
         struct ListNode* a = head;
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
ListNode* deleteDuplicates(ListNode* A) {
    ListNode* start=new ListNode(0);
    start->next=A;
    if(A==NULL || A->next==NULL) return A;
    ListNode* curr=start;
   ListNode* temp;
    while(curr->next!=NULL){
        temp=curr->next;
            while(temp->next!=NULL && temp->val==temp->next->val){
            temp=temp->next;
            }
            if(temp==curr->next) curr=curr->next;
            else curr->next=temp->next;
    }
    return start->next;
}

int main()
{
    struct ListNode* temp = head;
    insertAtEnd(1);insertAtEnd(2);insertAtEnd(2);insertAtEnd(3);insertAtEnd(3);insertAtEnd(4);
    print(head);
    temp=deleteDuplicates(head);
    print(temp);
    return 0;
}
