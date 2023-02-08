class Solution {
public:
    bool isPalindrome(int x){
        long long int rev=0, rem;
        int p =x;
        while(p>0){
            rem=p%10;
            rev=(rev*10)+rem;
            p=p/10;
        }
        if(rev==x){return true;}
        else{return false;}
    }
};
