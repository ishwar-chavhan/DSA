class Solution {
    bool tocheck(vector<vector<char>>& board,int rowmain,int colmain,int row2,int subrow)
    {
       if(row2==0)
       return 1;
        //    colmain=colmain+3;
       int smallproblem=tocheck(board,rowmain,colmain+3,row2-1,subrow);
      int subcol=colmain-3;
      int ans=1;
    //   int i=0;
      int arr[10]={0};
     for(int i=subrow;i<rowmain;)   
     {
        for(int j=subcol;j<colmain;j++)
        {
            if(board[i][j]!='.')
            {
                char ch=0;
                ch=board[i][j]-'0';
                arr[ch]++;
            }
        }
        i++;
       }
       for(int j=0;j<10;j++)
        {
            if(arr[j]>1)
            {
                ans=0;
            }
        }
return smallproblem*ans;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      int col=board[0].size();
      int row=board.size();

      int i=0;
      while(i<row)
      {
       int arr[10]={0};
       
        for(int j=0;j<row;j++)
        {
            if(board[j][i]!='.')
            {
        char ch=0;
        ch=board[j][i]-'0';
         arr[ch]++;
        }
        }
        for(int j=0;j<10;j++)
        {
            if(arr[j]>1)
            {
                return false;
            }
        }
       
        i++;
      } 
      int ish=0;
      while(ish<col)
      {
        
       int arr[10]={0};
        for(int j=0;j<col;j++)
        {
            if(board[ish][j]!='.')
        {
        char ch=0;
        ch=board[ish][j]-'0';
         arr[ch]++;
        }
        }
        for(int j=0;j<10;j++)
        {
            if(arr[j]>1)
            {
                return false;
            }
        }
        ish++;
      }
      bool ans=1;
      int row2=3;
      int colmain=3;
      int rowmain=3;
      int subrow=0;
      for(int j=0;j<3;j++)
      {
         ans=tocheck(board,rowmain,colmain,row2,subrow);
         if(ans==false)
             {
                break;
    
                 }

      rowmain=rowmain+3;
      subrow=subrow+3;
      }

return ans;
   
    //   return true;
    }
};