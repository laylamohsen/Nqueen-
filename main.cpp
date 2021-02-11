 #include<iostream>
using namespace std;

#define N 8
void chessboard(int board[N][N]) {
   for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++)
         cout << board[i][j] << " ";
         cout << endl;
   }
}}
bool check() {
   int board[N][N];
   for(int i = 0; i<N; i++)
   for(int j = 0; j<N; j++)
   board[i][j] = 0; //set chessboard elements to 0
   if ( solveNQueen(board, 0) == false ) {
      cout << "Solution does not exist";
      return false;
  }
   chessboard(board);
   return true;
}
int main() {
   check();
}
