/*
想法1：新建一个数组v，扫描原数组一遍，遇到奇数就加入v，扫描第二遍原数组，遇到偶数加入v
想法2：类似冒泡排序，两个指针，第一个指针i从前往后，第二个指针j从后往前到i，遇到前偶后奇就交换 
想法3：类似插入排序，两个指针，第一个指针i指向第一个偶数，第二个指针j指向i后的第一个奇数，把i到j-1的序列后移一位，把j的值给i 
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
