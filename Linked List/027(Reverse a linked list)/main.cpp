    #include<bits/stdc++.h>
    using namespace std;

    struct ListNode {
          int val;
          ListNode *next;
          ListNode() : val(0), next(NULL) {}
      };

    ListNode* reverseList(ListNode* A) {
        ListNode* current,*prev,*next2;
        current=A;
        prev=NULL;

        while(current!=NULL){
            next2=current->next;
            current->next=prev;
            prev=current;
            current=next2;
        }
        A=prev;
        return A;
    }
    void print(ListNode* a){
        while(a!= NULL){

            cout<< a->val ;
            if(a->next!=NULL) cout<<"->";
            a=a->next;
        }
        cout<<endl;
    }
    struct ListNode* head=NULL;

    void insertAtBeg(int d){
        struct ListNode* temp = new ListNode();

        temp->val=d;
        temp->next=head;
        head=temp;

    }
    void insertAtEnd(int d){
        struct ListNode* temp = new ListNode();
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
int main(){

     struct ListNode* temp = head;

   // insertAtBeg(1);insertAtBeg(2);insertAtBeg(3);insertAtBeg(4);insertAtBeg(5);
    //print(head);
   // temp=head;
    insertAtEnd(1);insertAtEnd(2);insertAtEnd(3);insertAtEnd(4);insertAtEnd(5);
    print(head);
   // temp=head;
    temp=reverseList(head);
     print(temp);
return 0;
}






