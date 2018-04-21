class Solution {
public:
	void replaceSpace(char *str,int length) {
        int n=0;
        for(int i=0;i<length;i++){
            if(str[i]==' ')
                n++;
        }
        int m=length+2*n-1;
        for(int i=length-1;i>=0;i--){
            if(str[i]!=' '){
                str[m]=str[i];
                m--;
            }
            else{
                str[m]='0';
                str[m-1]='2';
                str[m-2]='%';
                m=m-3;
            }
        }
	}
};
