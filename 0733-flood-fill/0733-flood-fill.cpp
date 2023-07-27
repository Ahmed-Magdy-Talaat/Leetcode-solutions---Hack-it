class Solution {
public:
void dfs(vector<vector<int>>&image,int val,int i,int j,int color){
    if(i<0||i>=image.size()||j<0||j>=image[0].size()||image[i][j]!=val||image[i][j]==color)
    return;
    image[i][j]=color;
    dfs(image,val,i+1,j,color);
    dfs(image,val,i-1,j,color);
    dfs(image,val,i,j+1,color);
    dfs(image,val,i,j-1,color);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image,image[sr][sc],sr,sc,color);
        return image;     
    }
};