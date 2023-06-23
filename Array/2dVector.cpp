#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int row = 5;
    int cols = 3;
    vector<vector<int>> v(row, vector<int>(cols, -1)); // 1st method

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    //     2nd method

    cout << "--------Second Method--------" << endl;
    vector<vector<int>> v1;
    vector<int> a = {10, 20, 30, 40, 50};
    vector<int> b = {100, 200, 300, 4};
    vector<int> c = {1, 3, 40, 5};
    vector<int> d = {0, 0, 0, 0, 0};

    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);
    v1.push_back(d);

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1[i].size(); j++)
        {
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}