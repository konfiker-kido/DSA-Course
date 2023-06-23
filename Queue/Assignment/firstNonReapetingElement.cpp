/*  Find a string of a first Non repeating element from a stream */

#include <iostream>
#include <queue>
using namespace std;

string firstNonRepeatingChar(string s)
{

    queue<char> q;
    int freq[26] = {0};
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        freq[ch - 'a']++;
        q.push(ch);

        /*  If we have some chars in our Queue */
        while (!q.empty())
        {
            if (freq[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        /*  If our Queue is Empty then we have to push # to our ans */
        if (q.empty())
            ans.push_back('#');
    }

    return ans;
}
int main()
{

    string str = "aabc";

    cout << firstNonRepeatingChar(str);
    return 0;
}