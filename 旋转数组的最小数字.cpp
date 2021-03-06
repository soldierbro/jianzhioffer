class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int n=rotateArray.size();
        if(n==0)
            return 0;
        int l=0;
        int r=n-1;
        int mid=0;
        while(rotateArray[l]>=rotateArray[r]){
            if(r-l==1)
                return rotateArray[r];
            mid=l+(r-l)/2;
            if(rotateArray[l]==rotateArray[r]&&rotateArray[l]==rotateArray[mid]){
                int min=rotateArray[l];
                for(int i=l+1;i<=r;i++){
                    if(min>rotateArray[i])
                        min=rotateArray[i];
                }
                return min;
            }
            if(rotateArray[mid]>=rotateArray[r])
                l=mid;
            else
                r=mid;
        }
        return rotateArray[mid];
    }
};
