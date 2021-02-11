bool isValid(int board[N][N], int row, int col) {
   for (int i = 0; i < col; i++) //check left
      if (board[row][i])
         return false;
   for (int i=row, j=col; i>=0 && j>=0; i--, j--)
      if (board[i][j]) //check left upper diagonal
         return false;
   for (int i=row, j=col; j>=0 && i<N; i++, j--)
      if (board[i][j]) //check left lower diagonal
         return false;
   return true;
}
bool solveNQueen(int board[N][N], int col){ //recursion
   if (col >= N)
      return true;
   for (int i = 0; i < N; i++) { //validation
      if (isValid(board, i, col) ) {
         board[i][col] = 1; //if validate, place the queen (1)
         if ( solveNQueen(board, col + 1))
            return true;
         board[i][col] = 0; //remove queen
      }
   }
   return false; // no possible order
}
