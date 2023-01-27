#include<bits/stdc++.h>
using namespace std;

bool knightTour(vector<vector<int>> &path, int rows ,int cols, int i, int j, int counter=0){
     if(counter == row*cols){
        return true;
     }
     if(i<0 || j<0 || i>=rows || j>=cols || path[i][j]>=0){
        return false;
     }
     path[i][j] = counter;
     bool ans=knightTour(path,rows,cols,i-1,j+2,counter+1)||
                 knightTour(path,rows,cols,i-1,j-2,counter+1)||
                 knightTour(path,rows,cols,i+1,j+2,counter+1)||
                 knightTour(path,rows,cols,i+1,j-2,counter+1)||
                 knightTour(path,rows,cols,i-2,j+1,counter+1)||
                 knightTour(path,rows,cols,i-2,j-1,counter+1)||
                 knightTour(path,rows,cols,i+2,j+1,counter+1)||
                 knightTour(path,rows,cols,i+2,j-1,counter+1);
        if(!ans)
            path[i][j]=-1;
        return ans;
}
vector<vector<int>> knightTour(int rows, int cols) {
    vector<vector<int>> path(rows,vector<int>(cols,-1));
    knightTour(path,rows,cols,0,0);
    return path;
     
}
int main(){
    
}