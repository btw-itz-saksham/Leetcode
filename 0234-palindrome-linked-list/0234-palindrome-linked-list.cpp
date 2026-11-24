class Solution {
public:
    bool isPalindrome(ListNode* head) {

        vector<int> arr;

        //storing all elements of linked list in vector
        ListNode* temp = head;

        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        //checking palindrome using two pointers
        int start = 0;
        int end = arr.size()-1;

        while(start < end){

            if(arr[start] != arr[end]){
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};