#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

/**
 * es para evitar tener que usar std::cout o cosas por el estilo
*/
const int divisor = 30;
int main()
{ // solo muestra la salida
    cout << "enter a number please" << endl;
    int sequenceI = 0;
    cin >> sequenceI;
    vector<int> int_vector_var;
    for (int i = 1; i <= sequenceI + 1; i++)
    {
        int value = rand() % i;
        int_vector_var.push_back(value);
        cout << value << endl;
    }
    // arrays and vectors
    int int_array[] = {1, 2, 3, 4, 3};
    // for loops
    for (int i = 0; i < int_vector_var.size(); i++)
    { //
        cout << int_vector_var[i] << " ";
        if (i % divisor == 0)
            cout << "\n";
    }
    cout << "\nthis is a simple array :";

    // this is for print the variable
    for (int i = 0; i < *(&int_array + 1) - int_array; i++)
        cout << int_array[i] << " ";
    string name = "";

    // do while loops
    do
    {
        cout << "\nplease enter the name 'Jose'\n";
        cin >> name;
    } while (name != "Jose");

    string yesOrNot = "";
    cout << "you want a drink water?" << endl;
    cin >> yes;
    while (yesOrNot != "yes")
    {
        cout << "sure?" << endl;
        cin >> yes;
    }
    return 0;
}
