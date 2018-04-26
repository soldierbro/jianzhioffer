/*
�뷨һ��˳ʱ���ӡ���󣬵�ͬ�ڰ�Ȧ��ӡ�����ȵõ���ӡ��Ȧ����Ȼ�����ҵ��µ����ϴ�ӡ����Ҫ�����ظ���ӡ������ 
*/
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> res;
        int row=matrix.size();
        int collor=matrix[0].size();
        int circle=((row<collor?row:collor)+1)/2;
        for(int i=0;i<circle;i++){
            for(int j=i;j<collor-i;j++){
                res.push_back(matrix[i][j]);
            }
            for(int k=i+1;k<row-i;k++){
                res.push_back(matrix[k][collor-i-1]);
            }
            for(int m=collor-i-2;(m>=i)&&(row-i-1!=i);m--){
                res.push_back(matrix[row-i-1][m]);
            }
            for(int n=row-i-2;(n>i)&&(collor-i-1!=i);n--){
                res.push_back(matrix[n][i]);
            }
        }
        return res;
    }
};
