#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{

    int row = matrix.size(); // to find row

    int col = matrix[0].size(); // to find column
    cout << "row-> " << row << " "
         << " col-> " << col << endl;
    vector<vector<int>> ans(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j] = matrix[j][i];
        }
    }
    return ans;
}

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> ans(3, vector<int>(3));
    ans = transpose(matrix);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}