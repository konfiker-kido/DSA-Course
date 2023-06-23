/*

Climbing Stairs Problems we have to just climb either
1 steps or 2 step at a time
so you have to just find the number of ways in n stairs

*/

#include <iostream>
using namespace std;

int countWaysToClimb(int n)
{
    if (n == 0 or n == 1) // base case
        return 1;

    return countWaysToClimb(n - 1) + countWaysToClimb(n - 2);
}

int main()
{

    int stairs = 5;
    int ways = countWaysToClimb(stairs);
    cout << "There are " << ways << " ways to climb " << stairs << " Stairs";
    return 0;
}
// But by the help of recursion, after some number of stairs it will through run time error TLE