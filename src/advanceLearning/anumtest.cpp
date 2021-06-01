#include <iostream>
using namespace std;
enum test : int
{
    test,
    test = 14
};
int main()
{
    for (int i : test)
        cout << i << endl;
    return 0;
}