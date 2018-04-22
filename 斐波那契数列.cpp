/*
题目描述
大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项。
n<=39
*/
class Solution {
public:
    int Fibonacci(int n) {
        int h=0;
        int g=1;
        for(int i=n;i>0;i--){
            g=h+g;
            h=g-h;
        }
        return h;
    }
};
