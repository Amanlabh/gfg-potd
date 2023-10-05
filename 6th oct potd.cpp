class Solution
{
    public:
    Node* reverseLL(struct Node* head){
        struct Node* prev = NULL;
        struct Node* curr = head;
        
        while(curr){
            struct Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        return prev;
    }
    
    void rearrange(struct Node *odd)
    {
        if(odd == NULL || odd->next==NULL) return;
        
        struct Node* oddHead = odd;
        struct Node* oddCurr = oddHead;
        struct Node* evenHead = odd->next;
        struct Node* evenCurr = evenHead;
        
        while(oddCurr && evenCurr && evenCurr->next){
            oddCurr->next = evenCurr->next;
            oddCurr = oddCurr->next;
            evenCurr->next = oddCurr->next;
            evenCurr = evenCurr->next;
        }
        
        
        oddCurr->next = reverseLL(evenHead);
        // cout<<evenHead->data;
        
        return;
        
    }
};

//amankumar
