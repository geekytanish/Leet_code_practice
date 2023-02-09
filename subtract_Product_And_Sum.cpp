class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int rem, sum=0, prd=1;

        while(n>0){
            rem=n%10;
            sum=(sum)+rem;
            prd=prd*rem;
            n=n/10;
        }
        return (prd-sum);
    }
};
