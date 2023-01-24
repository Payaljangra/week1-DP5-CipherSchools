#include<bits/stdc++.h>
using namespace std;

 vector<int> spiralOrder(vector<vector<int>>& matrix) {

    //   int row=matrix.size();
    //   if(row==0)
    //      return {};
    //   int col=matrix[0].size();
    //   if(col==0)
    //       return {};   

      vector<int> result(matrix.size()*matrix[0].size());
      int sx =0 , ex = matrix.size()-1, sy = 0, ey = matrix[0].size()-1;
      int ctr=0;
      while(sx<=ex && sy<=ey)
      {
          for(int j=sy; j<=ey; j++)
          {
              result[ctr] = matrix[sx][j];
              ctr++;
          }
          sx++;
          for(int i = sx; i<=ex; i++)
          {
              result[ctr] = matrix[i][ey];
              ctr++;
          }
          ey--;
          if(sx<=ex)
          {
              for(int j=ey; j>=sy; j--)
              {
                  result[ctr] = matrix[ex][j];
                  ctr++;
              }
              ex--;
          }
        if(sy<=ey){
              for(int i=ex; i>=sx;i--)
              {
                  result[ctr]=matrix[i][sy];
                  ctr++;
              }
              sy++;
              }
          
      }

 return result;
}
int main(){

}