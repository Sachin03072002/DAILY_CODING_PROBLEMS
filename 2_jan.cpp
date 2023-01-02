/*
    MERGE TWO SORTED ARRAY 
    here we are with our two sorted arrays individually 

        1->2->4->NULL
        1->2->4->NULL

        the SORTED array is:
        1->2->3->4->NULL

    this we can achieve by implementing the following implementation
     BY RECURSIVE ONE
            BASE CASE
                if any one of the list is empty then we have two return the another array as it is mentioned in the statement that they are sorted so that will be the answer
            ANOTHER CASES
                if the value at the head of the list1 is less than or equal to , then taking list 1 as our base list we just add the value and recursively call it and return it after adding
                else if the value is greater at the head of list 1 then taking list 2 as our base list we just add the node and return it
     BY ITERATIVE WAY
            BASE CASE
                if any one of the list is empty then we have two return the another array as it is mentioned in the statement that they are sorted so that will be the answer
            ANOTHER CASES
                taking a pointer at the head of the list 1 and checking if the value at the head of list2 is greater or smaller 
                    if greater, then shifting the ptr to list2 and moving ahead in list 2
                    else ptr is sticking in list1 and moving ahead in list2
                now after initializing the base list we go for further checking 
                    if value at list2 is greater , then the ptr is moved  ahead in list 1 by inserting that node in the base array
                    else , move the pointer ahead in list2 by inserting the node in the base array
                now checking is the lists are empty or not 
                if not then inserting the remaining array in the base array




*/


// BY RECURSIVE WAY
LISTNODE* mergeTwoLists(ListNode* l1, ListNode* l2){
    if(l1==NULL){
        return l2;

    }else if(l2==NULL){
        return l1;
    }
    if(l1->val <= l2->val){
        l1->next=mergeTwoLists(l1->next,l2);
        return l1;
    }else{
        l2->next=mergeTwoLists(l1,l2->next);
        return l2;
    }
}



// BY ITERATIVE ONE

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
    if(l1==NULL){
        return l2;
    }else if(l2==NULL){
        return l1;
    }
    ListNode* ptr=l1;
    if(l1->val > l2->val){
        ptr=l2;
        l2=l2->next;
    }else{
        l1=l1->next;
    }
    ListNode* curr=ptr;
    while(l1 && l2){
        if(l1->val < l2->val){
            curr->next=l1;
            l1=l1->next;
        }else{
            curr->next=l2;
            l2=l2->next;
        }
    }
    if(!li){
        curr->next=l2;
    }else{
        curr->next=l1;
    }
    return ptr;
}