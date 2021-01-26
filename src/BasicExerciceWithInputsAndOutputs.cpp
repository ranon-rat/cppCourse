

#include <iostream>

using namespace std;
/**
 * es para evitar tener que usar std::cout o cosas por el estilo
*/
int main()
{ // solo muestra la salida
    cout << "hello , what is your name?" << endl;
    string name;
    cin >> name;
    cout << "hello " << name << " what is your favorite food?" << endl;
    string favfood;
    cin >> favfood;
    cout << "good election " << favfood << endl;

    return 0;
}