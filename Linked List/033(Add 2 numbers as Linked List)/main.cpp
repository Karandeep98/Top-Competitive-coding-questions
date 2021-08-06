#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

struct ListNode* head=NULL;
struct ListNode* a=head;

void print(ListNode* a){
        while(a!= NULL){

            cout<< a->val ;
            if(a->next!=NULL) cout<<"-->";
            a=a->next;
        }
        cout<<endl;
    }

 void insertAtEnd(int d){
     struct ListNode* temp= new ListNode(0);
      temp->val=d;
        temp->next=NULL;
    if(head==NULL){
     head=temp;
     a=head;
    }
    else{
        a->next=temp;
        a=a->next;
    }
 }
ListNode* addTwoNumbers(ListNode* A, ListNode* B) {
    head=NULL;
    ListNode* temp=A;
     ListNode* temp2=B;
     int x,carry=0;
     while(temp!=NULL || temp2!=NULL){
         if(temp==NULL) x= temp2->val+carry;
         else if(temp2==NULL) x= temp->val+carry;
         else x= temp->val+temp2->val+carry;

        if(x>=10) {
            carry=1;
            x-=10;
        }
        else carry=0;
        insertAtEnd(x);
        if(temp!=NULL) temp=temp->next;
       if(temp2!=NULL) temp2=temp2->next;
     }
     if(carry==1) insertAtEnd(1);
     return head;
}

 int main()
{
    insertAtEnd(9);insertAtEnd(6); insertAtEnd(8);
    ListNode* a=head;
    print(a);
    head=NULL;
    insertAtEnd(9);insertAtEnd(5);insertAtEnd(6);
    ListNode* b=head;
    print(b);
    print(addTwoNumbers(a,b));

    return 0;
}


