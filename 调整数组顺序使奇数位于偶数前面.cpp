/*
�뷨1���½�һ������v��ɨ��ԭ����һ�飬���������ͼ���v��ɨ��ڶ���ԭ���飬����ż������v
�뷨2������ð����������ָ�룬��һ��ָ��i��ǰ���󣬵ڶ���ָ��j�Ӻ���ǰ��i������ǰż����ͽ��� 
�뷨3�����Ʋ�����������ָ�룬��һ��ָ��iָ���һ��ż�����ڶ���ָ��jָ��i��ĵ�һ����������i��j-1�����к���һλ����j��ֵ��i 
*/ 
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int n=array.size();
        for(int i=0;i<n;i++){
            if((array[i]&0x1)==0){
                for(int j=i+1;j<n;j++){
                    if(array[j]%2&0x1){
                        int temp=array[j];
                        while(j>i){
                            array[j]=array[j-1];
                            j--;
                        }
                        array[i]=temp;
                        break;
                    }
                }
            }
        }
    }
};
