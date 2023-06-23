/*

Given a string s, sort it in decreasing order based on the frequency of the characters.
The frequency of a character is the number of times it appears in the string.
Return the sorted string. If there are multiple answers, return any of them.

Test-Cases:

Input: s = "tree"
Output: "eert"

Input: s = "Aabb"
Output: "bbAa"

Input: s = "cccaaa"
Output: "aaaccc"
*/

#include <iostream>
#include <map>
#include <queue>
using namespace std;

string frequncySort(string str)
{

    string ans = "";
    map<char, int> m;

    for (int i = 0; i < str.length(); i++)
        m[str[i]]++;

    priority_queue<pair<int,char>> maxHeap;
    

    for (auto itr = m.begin(); itr != m.end(); itr++)
        maxHeap.push({itr->second,itr->first});

        while (maxHeap.size()>0){
            int freq=maxHeap.front.first;
        }
        {
            
        }
        
    
    return ans;
}

int main()
{
    string str = "tree";
    cout << frequncySort(str);

    return 0;
}