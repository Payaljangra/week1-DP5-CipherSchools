#include<bits/stdc++.h>
using namespace std;

class ListNode
{
    public:
    int val;
    ListNode *next;
    ListNode() : val(0),next(nullptr) {}
    ListNode(int x) : val(x) , next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x),next(next) {}

};
ListNode* reverseLLIngroup(ListNode* head, int K) {
       if(headd == NULL || head -> next ==NULL){
        return head;
       }
       ListNode *prev=NULL, *curr = head, *next = NULL;
       int k=0;
        while(curr != NULL && k<K){
                  k++;
                  next = curr->next;
                  curr->next =prev;
                  prev = curr;
                  curr = next;
        }
        if(next != NULL)
            head -> next = reverseLLIngroup(next ,K)
        return head;           
}
int main(){
    
}