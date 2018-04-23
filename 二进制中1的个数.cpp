/*
想法1：把n逐位右移，判断最后一位是否为1。错误！负数的补码右移，高位补1，会出现很多1
想法2：使用1左移，然后与n与运算
想法3：n&(n-1)使得n二进制最右边的一个1位变为0，那么n有多少个1，就可以由多少次这样的操作
*/
class Solution {
public:
     int  NumberOf1(int n) {
         int res=0;
         while(n){
             res++;
             n=n&(n-1);
         }
         return res;
     }
};
