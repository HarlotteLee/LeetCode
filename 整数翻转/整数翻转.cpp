class Solution {
public:
    int reverse(int x) {
        int res=0;
        while(x!=0)
        {
            int tmp=x%10;
            if (res>214748364 || (res==214748364 && tmp>7)) {
                return 0;
            }
            //判断是否 小于 最小32位整数
            if (res<-214748364 || (res==-214748364 && tmp<-8)) {
                return 0;
            }
            x=x/10;
            res=res*10+tmp;
        }
        return res;
    }
};
