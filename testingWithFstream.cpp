#include <iostream>
#include <fstream>
using namespace std;

void openFile();
void openFileWrite();
void writeFile();
int main()

{
    openFile();
    openFileWrite();
    writeFile();

    return 0;
}

void openFile()
{
    fstream testUserIO;
    string testStringIO = "";
    testUserIO.open("testingIO/test.txt");
    if (!testUserIO.fail())
    {
        while (testUserIO >> testStringIO)
        {
            cout << testStringIO << endl;
        };
    }
    testUserIO.close();
}
void openFileWrite()
{
    fstream userFileIO;
    userFileIO.open("testingIO/test.txt", ios::app);
    for (int i = 0; i <= 5; i++)
    {
        string value = "";
        cin >> value;
        userFileIO << value + "\n";
    }
}
void writeFile()
{
    for (int i = 0; i <= 10; i++)
    {
        ofstream creatingAFile("testingIO/" + to_string(i) + ".txt");
        creatingAFile << i;
        creatingAFile.close();
    }
}
