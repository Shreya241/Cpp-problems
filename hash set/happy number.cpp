class Solution {
public:
    int sqrsum(int x){
        int r,s=0;
        while(x!=0){
            r=x%10;
            s=s+(r*r);
            x=x/10;
        }
        return s;
    }

    bool isHappy(int n) {
        int p;
        while(n>4){
            p=sqrsum(n);
            n=p;
        }
        if(n==1){
            return true;
        }else{
            return false;
        }
    }
};