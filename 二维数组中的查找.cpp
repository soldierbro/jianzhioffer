class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if(array.size()==0||array[0].size()==0)
            return false;
        int m=0;
        int n=array[0].size()-1;
        while(m<array.size()&&n>=0){
            if(array[m][n]==target)
                return true;
            else if(target<array[m][n])
                n--;
            else
                m++;
        }
        return false;
    }
};
