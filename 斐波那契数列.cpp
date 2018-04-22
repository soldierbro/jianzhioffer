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
