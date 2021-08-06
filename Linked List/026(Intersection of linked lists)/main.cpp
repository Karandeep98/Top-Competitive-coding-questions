#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 int length(ListNode* x){
     int c=0;
     while(x!=NULL){
         c++;
         x=x->next;
     }
     return c;
 }
 //O(n) solution
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    int n=length(A);
    int m=length(B);
    int d;
    
    if(n>m) {
        d=n-m;
        for(int i=0;i<d;i++){
            A=A->next;
        }
    }
    else {
        d=m-n;
        for(int i=0;i<d;i++){
            B=B->next;
        }
    }
    while(A!=NULL && B!=NULL){
        if(A==B) return A;
        else {
              A=A->next;
              B=B->next;
        }
    }
    return NULL;
}

}
