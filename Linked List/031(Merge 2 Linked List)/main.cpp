#include <bits/stdc++.h>

using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

 struct ListNode* head=NULL;
 void insert(int d){
        struct ListNode* temp = new ListNode(0);

        temp->val=d;
        temp->next=head;
        head=temp;

    }
ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
   head=NULL;
    vector<int> v;
    while(A){
        v.push_back(A->val);
        A=A->next;
    }
    while(B){
        v.push_back(B->val);
        B=B->next;
    }
   sort(v.begin(),v.end());
   reverse(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
    insert(v[i]);

    return head;
}
void print(ListNode* a){
        while(a!= NULL){

            cout<< a->val ;
            if(a->next!=NULL) cout<<"-->";
            a=a->next;
        }
        cout<<endl;
    }
int main()
{
    insert(3);insert(7);insert(9);insert(12);
    ListNode* a=head;
    print(a);
    head=NULL;
    insert(2);insert(4);insert(6);insert(8);
    ListNode* b=head;
    print(b);
    head=NULL;
    ListNode* t;
    t=mergeTwoLists(a,b);
    print(t);
}
