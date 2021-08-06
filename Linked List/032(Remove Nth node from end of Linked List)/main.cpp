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
ListNode* removeNthFromEnd(ListNode* A, int B) {
    ListNode* temp = A;
    struct ListNode* start = new ListNode(0);
    start->next=A;
    ListNode* curr= start;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    temp=curr->next;
    int x=n-B;

        while(x>0){
            temp=temp->next;
            curr=curr->next;
            x--;
        }
        curr->next=curr->next->next;

    return start->next;

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
int main()
{
     ListNode* temp = head;
    insertAtEnd(1);insertAtEnd(2);insertAtEnd(3);insertAtEnd(4);insertAtEnd(5);insertAtEnd(6);
    print(head);
    temp=removeNthFromEnd(head,2);
    print(temp);
    return 0;
}
