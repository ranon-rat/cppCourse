#include <iostream>
using namespace std;
//contants
const int divisor = rand() % 14;
int main()
{
    // its a list of character with a ascii value

    char hello_char[] = "hello char\n";
    // this is a group of character , its preferible work with this
    string hello_string = "hello string\n";
    // this is not a decimal number for that this value doesnt have 12.0 or something like that
    int int_num = 12;
    // this is a float number who have more numbers than the int but is for small numbers
    float float_num = 12.3112;
    // its for big float number
    double double_num = float_num / divisor;
    cout << "text types\n"
         << hello_char << hello_string << endl;
    // for change data types you need to use static_cast<type>(variable)

    cout << "int value :" << int_num
         << "\nfloat value :" << float_num
         << "\ndouble value :" << double_num
         << "\nparse the double value :" << static_cast<int>(double_num)

         << endl;

    // simple loops
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
    cout << endl;
    return 0;
}