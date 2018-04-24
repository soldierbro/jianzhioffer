/*
float,double���ʹ���������ʹ��==��!=
�ж�n����ż�����������㣬n&1==1?������ż��
����2��������������>>��Ч�ʸ���
*/
class Solution {
public:
    double Power(double base, int exponent) {
        if((base>-0.0000001)&&(base<0.0000001)){
            if(exponent<0)
                return -1;
            else if(exponent==0)
                return 1;
            else
                return 0;
        }
        int n=(exponent>=0)?exponent:(-exponent);
        double res=1;
        while(n){
            if(n&1)
                res*=base;
            base*=base;
            n=n>>1;
        }
        return exponent>0?res:1/res;
        
    }
};
