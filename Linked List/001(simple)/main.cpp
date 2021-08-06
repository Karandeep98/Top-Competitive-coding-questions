#include <bits/stdc++.h>
using namespace std;
struct Node {
    public:
    int data;
    struct Node* next;
};

void printlist(Node* n){
    while(n!=NULL){
        cout<<n->data<<"->";
        n=n->next;
    }
}
void add_at_end(int a,Node* h){
    struct Node* element = new Node();
    element->data=a;
    element->next=NULL;

    while(h->next!=NULL){
        h=h->next;
    }
    h->next=element;
}
void add_at_begin(int a,Node** h){

    struct Node* element = new Node();
    element->data=a;
    element->next=*h;
    (*h)=element;
}
void add_at_pos(int n,int pos,Node* h){
    struct Node* element = new Node();
    element->data=n;
    int count=1;
    if(pos==1){
        add_at_begin(n,&h);
        return;
    }
    while(h->next!=NULL){
        if(count==pos-1){
            element->next=h->next;
            h->next=element;
        break;
        }
        h=h->next;
        count++;
    }
}
int main()
{
    struct Node* head =new Node();
    head=NULL;
    /*struct Node* temp =new Node();
    if(head==NULL) {
        temp->data=5;
        temp->next=NULL;
         head=temp;
    }
    if(head==NULL) {
        temp->data=6;
        temp->next=NULL;
    }

    printlist(head);
    struct Node* head = NULL;
    head = new Node();
    head->data = 1;
    head->next=NULL;*/

    //printlist(head);
    while(1){
        cout<<"\nPress 1 to append:\n";
        cout<<"Press 2 to insert at Beginning\n";
        cout<<"Press 3 to insert at a random position:\n";
        cout<<"Press 0 to exit:\n";
        int n,pos,ch;
        cin>>ch;
        switch(ch){

        case 1:

            cout<<"Enter element to be added at end:";
            cin>>n;
            add_at_end(n,head);
            printlist(head);
            break;
        case 2:
            cout<<"Enter element to be added at beginning:";
            cin>>n;
            add_at_begin(n,&head);
            printlist(head);
            break;
        case 3:

            cout<<"Enter element:";
            cin>>n;
            cout<<"Enter position:";
            cin>>pos;
            add_at_pos(n,pos,head);
            printlist(head);
            break;
        case 0: exit(0);
        default: cout<<"Wrong Choice!";
        }


    }
    return 0;
}
