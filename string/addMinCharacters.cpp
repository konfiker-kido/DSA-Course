
/*

Given a string str, find the minimum characters to be
added at front of the string to make it a palindrome.


Input:
str = ABCD
Output: 3
Explanation: The resultant string
after adding 3 characters is DCBABCD.
The minimum possible answer is 3.

Input:
str = ABA
Output: 0
Explanation: The given string
is already a palindrome.

Your Task:
You don't need to read input or print anything. Your task is to complete the
function addMinChar() which takes the string str as input parameters
and returns the minimum number of characters to be added to make it a palindrome.
*/

#include <iostream>
#include <string>
using namespace std;

bool palindrom(string str)
{

    int s = 0;
    int e = str.size() - 1;
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int addMinChar(string str)
{

    int count = 0;
    while (!palindrom(str))
    {

        str.pop_back();
        count++;
    }
    return count;
}

//   Complexity (|str|)

/*
int addMinChar(string str){    
        //code here
        int st=0;
        int en=str.size()-1;
        int ans=0;
        while(st<=en){
            if(str[st]==str[en]){
                st++;
                en--;
            }else{
                ans++;
                st=0;
                en=str.size()-1-ans;
            }
        }
        return ans;
    }
*/
int main()
{

    string str = "DCBABCD";
    cout << addMinChar(str);
    return 0;
}