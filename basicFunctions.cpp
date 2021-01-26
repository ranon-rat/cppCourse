#include <iostream>
using namespace std;

void sayMyName(string);
void helloLoop();
void autoIncrementer(float &);
//prototypes

int main()
{

    float helloWorld = 0;
    // simple loop
    //helloLoop();
    // auto increment function
    for (int i = 0; i <= 4; i++)
        autoIncrementer(helloWorld);

    cout << "the final result is : " << helloWorld << endl;

    // simple prototype
    cout << "whats is your name?" << endl;
    string name = "michael jackson";
    cin >> name;
    sayMyName(name);
    return 0;
}
void sayMyName(string name)
{
    cout << "your name is : " + name << endl;
}
void autoIncrementer(float &val)
{
    // we are changing the value of the memory value
    val++;
    cout << val << endl;
}
void helloLoop()
{
    // this function didnt return nothing
    cout << "hello" << endl;
    helloLoop();
}
