// problem link :: https://leetcode.com/problems/valid-sudoku/

#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{

    set<char> row;
    set<char> col;
    set<char> mat1;
    set<char> mat2;
    set<char> mat3;

    for (int i = 0; i < 9; i++)
    {

        for (int j = 0; j < 9; j++)
        {
            // check for every row
            if (board[i][j] != '.')
            {
                if (row.count(board[i][j]) > 0)
                {
                    return false;
                }
                else
                {
                    row.insert(board[i][j]);
                }
            }
            // check for every column
            if (board[j][i] != '.')
            {
                if (col.count(board[j][i]) > 0)
                {

                    return false;
                }
                else
                {
                    col.insert(board[j][i]);
                }
            }
            // check for 1st 3x3 sub box

            if (j < 3 && board[i][j] != '.')
            {
                if (mat1.count(board[i][j]) > 0)
                {
                    cout << "1" << endl;
                    return false;
                }
                else
                {
                    mat1.insert(board[i][j]);
                }
            }
            // check for second 3x3 box
            else if (j < 6 && board[i][j] != '.')
            {
                if (mat2.count(board[i][j]) > 0)
                {
                    cout << "2" << endl;
                    return false;
                }
                else
                {
                    mat2.insert(board[i][j]);
                }
            }
            // check for 3rd 3x3 box
            else if (j < 9 && board[i][j] != '.')
            {
                if (mat3.count(board[i][j]) > 0)
                {
                    cout << "3" << endl;
                    return false;
                }
                else
                {
                    mat3.insert(board[i][j]);
                }
            }
        }
        if (i == 2 || i == 5)
        {
            mat1.clear();
            mat2.clear();
            mat3.clear();
        }
        row.clear();
        col.clear();
    }
    return true;
}

int main()
{

    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout << isValidSudoku(board) << endl;

    return 0;
}