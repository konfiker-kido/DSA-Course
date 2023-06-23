#include <iostream>
#include <map>

using namespace std;
int numJewelsInStones(string jewels, string stones) {
        map<char,int>m;
        for(auto s:stones)
            m[s]++;
        int c=0;
        
        for(auto itr=m.begin();itr!=m.end();itr++){
            cout<<itr->first<<" -> "<<itr->second<<endl;
        }
        
        for(int i=0;i<jewels.size();i++)
            c+=m[jewels[i]];
        return c;
    }

int main()
{
    string jewels = "aA", stones = "aAAbbbb";
    cout<<numJewelsInStones(jewels,stones); 
    
    return 0;
}
