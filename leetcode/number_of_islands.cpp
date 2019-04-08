/* number of islands 
Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. 
An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.
 You may assume all four edges of the grid are all surrounded by water.
*/

#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        if(grid.empty()){
            return 0;
        }
        int width = grid[0].size();
        int height = grid.size();
        vector<vector<char>> visited = grid;
        int count = 0;

        for (int i=0;i<height;i++){
        	for (int j=0;j<width;j++){
        		if(visited[i][j] =='1'){
        			count++;
        			dfs(visited,i,j);
        		}
        	}
        }
        return count;
    }

    void dfs(vector<vector<char>>& grid, int i,int j){
    	int width = grid[0].size();
        int height = grid.size();
        if(i<0 || i>=height)
        	return;
        if(j<0||j>=width)
        	return;
        if(grid[i][j]=='0'){
        	return;
        }
        else{
        	grid[i][j] = '0';
        	dfs(grid,i+1,j);
        	dfs(grid,i-1,j);
        	dfs(grid,i,j+1);
        	dfs(grid,i,j-1);
        }
        

    }
};


int main(){

	// vector<vector<char>> visited = {{"1","1","1","1","0"},{"1","1","0","1","0"},{"1","1","0","0","0"},{"0","0","0","0","0"}};
	vector<vector<char>> grid = {{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
	Solution solver;
	cout<<endl<<"Num islands:"<<solver.numIslands(grid);

	return 0;
}
