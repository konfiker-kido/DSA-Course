#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    //   int smallProblem=printRec(n-1);
    //   cout<<"smallProblem -> "<<smallProblem<<"   ---- ";

    //   int bigProblem=n*smallProblem;
    //     cout<<" bigProblem -> "<<n<<" * "<<smallProblem<<" = "<<bigProblem<<endl;
    //     return bigProblem;

    return n * fact(n - 1);
}
int main()
{
    cout << fact(6);
    return 0;
}